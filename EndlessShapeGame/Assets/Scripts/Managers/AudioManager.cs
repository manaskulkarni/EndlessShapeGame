using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class AudioManager : MonoBehaviour
{
  [System.Serializable]
  public class AudioObject
  {
    public AudioClip clip;
    public float volumeFadeSpeed;
  }

  public class CPair
  {
    public CPair(Coroutine FI = null, Coroutine FO = null)
    {
      fadeIn = FI;
      fadeOut = FO;
    }
    public Coroutine fadeIn;
    public Coroutine fadeOut;
  }

  private Dictionary<AudioObject, CPair> f = new Dictionary<AudioObject, CPair>();

  static public AudioManager inst { get; private set; }
  bool _playOnce;
  //  bool _inOptions;
  int _mode { get; set; }

  #region AudioObjects
  public AudioObject[] gameTracks;
  public AudioObject[] loops;
  public AudioObject[] mainTracks;
  public AudioObject[] optionTracks;
  public AudioObject[] storeTracks;

  public AudioObject[] loseEffects;
  #endregion

  #region Properties
  // Current AudioObjects
  public AudioObject _track { get { return gameTracks [_mode]; } }
  public AudioObject _loop { get { return loops [_mode]; } }
  public AudioObject _main { get { return mainTracks [_mode]; } }
  public AudioObject _options { get { return optionTracks [_mode]; } }
  public AudioObject _store { get { return storeTracks [_mode]; } } 
  public AudioObject _lose { get { return loseEffects [_mode]; } }

  // All AudioSources
  public AudioSource track { get; private set; }
  public AudioSource loop { get; private set; }
  public AudioSource main { get; private set; }
  public AudioSource options { get; private set; }
  public AudioSource store { get; private set; }
  public AudioSource lose { get; private set; }
  #endregion

  public const int MUTE_MODE = 3;

  void Awake()
  {
    if (inst == null)
    {
      inst = this;

      foreach (var v in gameTracks)
        f.Add (v, new CPair ());
      foreach (var v in loops)
        f.Add (v, new CPair ());
      foreach (var v in mainTracks)
        f.Add (v, new CPair ());
      foreach (var v in optionTracks)
        f.Add (v, new CPair ());
      foreach (var v in storeTracks)
        f.Add (v, new CPair ());
      foreach (var v in loseEffects)
        f.Add (v, new CPair ());
    }
  }

  // Use this for initialization
  void Start()
  {
    _mode = StatsManager.inst.vMode;

    if (_mode == MUTE_MODE)
    {
      AudioListener.volume = 0.0f;
      _mode = 0;
    }
    
    InitializeAudioSource ();

    _playOnce = true;
    //    _inOptions = false;
    //    _mode = StatsManager.inst.vMode;

    main.clip = _main.clip;
    main.Play ();
  }

  void FixedUpdate()
  {
    PlayLoopingTrack(_mode);

    if (Input.GetKeyUp(KeyCode.Q))
    {
      Time.timeScale = 0.5f;
      foreach (var source in GetComponents<AudioSource>())
      {
        source.pitch = Time.timeScale;
      }
    }
    else if (Input.GetKeyUp(KeyCode.R))
    {
      Time.timeScale = 1.0f;
      foreach (var source in GetComponents<AudioSource>())
      {
        source.pitch = Time.timeScale;
      }
    }
  }

  #region implemented abstract members of AudioManager
  void OnGameReset()
  {
  }

  void OnGameStart()
  {
    FadeOutAllMenuTracks(_mode);
  }

  void OnShowRevive()
  {
    PlayLoseEffect();
    FadeOutMusicTrack(_mode);
  }

  void OnShowTutorialRevive ()
  {
    OnShowRevive ();
  }

  void OnDeclineRevive()
  {
    StopLoseEffect();
    StopMusicTrack(_mode);
  }

  void OnReviveCompleteEnd()
  {
    StopAllCoroutines();
    OnHideStore();
    FadeInMusicTrack(_mode);
    FadeOutAllMenuTracks(_mode);
  }

  void OnShowOptions()
  {
    //    _inOptions = true;
    PlayOptionsTrack(_mode);
  }

  void OnHideOptions()
  {
    //    _inOptions = false;
    StopOptionsTrack(_mode);
  }

  void OnShowStore()
  {
    PlayStoreTrack(_mode);
  }

  void OnHideStore()
  {
    StopStoreTrack(_mode);
  }

  private bool playAgain = false;

  void OnPlayAgain ()
  {
    playAgain = true;
  }

  void OnGameOver()
  {
    StopMusicTrack(_mode);
    if (!playAgain)
    {
      ReplayMenuTrack (_mode);
    }
    ResetLoopingTracks(_mode);
    playAgain = false;
  }

  void OnGameRestart()
  {
  }

  void OnHighScore()
  {
  }

  void OnPause()
  {
    PauseAll();
  }

  void OnInterstitialStarted ()
  {
    OnPause ();
  }

  void OnEndVideo ()
  {
    OnUnPause ();
  }

  void OnUnPause()
  {
    ResumeAll();
  }

  void OnFirstBeat()
  {
    PlayMusicTrack(_mode);
  }

  void OnSwitchMode(int mode)
  {
    _mode = mode;

    if (mode == MUTE_MODE)
    {
      _mode = 0;
      AudioListener.volume = 0.0f;
      StopAll ();
    }
    else
    {
      StartCoroutine (SwitchMode ());
    }
  }

  #endregion

  #region Coroutines

  private void StopCoroutineSafe(Coroutine c)
  {
    if (c != null)
    {
      StopCoroutine(c);
    }
  }

  private IEnumerator FadeInVolume ()
  {
    var t = 0.0f;
    while (t < 1.0f)
    {
      t += Time.deltaTime * _options.volumeFadeSpeed;
      AudioListener.volume = Mathf.Lerp (0.0f, 1.0f, t);
      yield return null;
    }
  }

  private IEnumerator FadeOutVolume ()
  {
    var t = 0.0f;
    var start = AudioListener.volume;

    while (t < 1.0f)
    {
      t += Time.deltaTime * _options.volumeFadeSpeed;
      AudioListener.volume = Mathf.Lerp (start, 0.0f, t);
      yield return null;
    }
  }

  private IEnumerator FadeOut(AudioSource source, AudioObject clip, float end = 0.0f)
  {
    while (source.volume > end)
    {
      source.volume -= Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }

    source.volume = end;
  }

  private IEnumerator FadeIn(AudioSource source, AudioObject clip, float start = 0.0f, float end = 1.0f)
  {
    source.volume = start;

    while (source.volume < end)
    {
      source.volume += Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }
  }

  private IEnumerator FadeInMusic(AudioSource source, AudioObject clip, float start = 0.0f, float end = 1.0f)
  {
    source.UnPause();

    while (source.volume < end)
    {
      source.volume += Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }
  }

  private IEnumerator FadeOutMusic(AudioSource source, AudioObject clip, float end = 0.0f)
  {
    while (source.volume > end)
    {
      source.volume -= Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }

    source.volume = end;
    source.Pause();
  }
  #endregion

  #region AudioFunctions
  private void InitializeAudioSource ()
  {
    var sources = gameObject.GetComponentsInChildren<AudioSource>();

    // Initialize lose sound effect
    lose = sources[0];
    lose.clip = _lose.clip;

    // Initialize track (MODE 1)
    track = sources[1];
    track.clip = _track.clip;

    // Initialize track loop (MODE 1)
    loop = sources[2];
    loop.clip = _loop.clip;
    loop.loop = true;

    // Initialize main menu loop (MODE 1)
    main = sources[3];
    main.clip = _main.clip;
    main.loop = true;

    // Initialize options menu loop (MODE 1)
    options = sources[4];
    options.clip = _options.clip;
    options.loop = true;
    options.Play();
    options.volume = 0.0f;

    // Initialize store menu loop (MODE 1)
    store = sources[5];
    store.clip = _store.clip;
    store.loop = true;
    store.Play();
    store.volume = 0.0f;
  }

  private void ReplayMenuTrack(int mode)
  {
    main.Stop ();
    options.Stop ();
    store.Stop ();

    main.clip = _main.clip;
    options.clip = _options.clip;
    store.clip = _store.clip;

    main.Play ();
    options.Play ();
    store.Play ();

    main.volume = 1.0f;
    options.volume = 0.0f;
    store.volume = 0.0f;
  }

  private void PlayOptionsTrack(int mode)
  {
    StopCoroutineSafe (f[_options].fadeOut);
    StopCoroutineSafe (f [_main].fadeIn);

    f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
    f[_options].fadeIn = StartCoroutine(FadeIn(options, _options));
  }

  private void StopOptionsTrack(int mode)
  {
    StopCoroutineSafe(f[_options].fadeIn);
    StopCoroutineSafe(f[_main].fadeOut);

    f[_main].fadeIn = StartCoroutine(FadeIn(main, _main));
    f[_options].fadeOut = StartCoroutine(FadeOut(options, _options));
  }

  private void PlayStoreTrack(int mode)
  {
    StopCoroutineSafe(f[_store].fadeOut);
    StopCoroutineSafe(f[_main].fadeIn);
    StopCoroutineSafe(f[_track].fadeIn);
    StopCoroutineSafe(f[_loop].fadeIn);

    f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
    f[_store].fadeIn = StartCoroutine(FadeIn(store, _store));
  }

  private void StopStoreTrack(int mode)
  {
    StopCoroutineSafe(f[_store].fadeIn);
    StopCoroutineSafe(f[_main].fadeOut);

    f[_main].fadeIn = StartCoroutine(FadeIn(main, _main));
    f[_store].fadeOut = StartCoroutine(FadeOut(store, _store));
  }

  private void ResetLoopingTracks(int mode)
  {
    _playOnce = true;
    loop.volume = 1.0f;
  }

  public int[] timeSamples = new int[] { 5734425, 6350000, 6144000 };
  private int _timeSamples { get { return timeSamples [_mode]; } }

  private void PlayLoopingTrack(int mode)
  {
    // Track 1: 5734425
    // Track 2: 6350000
    // Track 3: 6144000

    if (track.timeSamples > _timeSamples && _playOnce == true)
    {
      loop.clip = _loop.clip;
      loop.Play();
      _playOnce = false;
    }
  }

  private void PlayMusicTrack(int mode)
  {
    track.volume = 1.0f;
    track.clip = _track.clip;
    track.Play();
  }

  private void StopMusicTrack(int mode)
  {
    track.Stop();
    loop.Stop();
  }

  private void FadeOutMusicTrack(int mode)
  {
    f[_track].fadeOut = StartCoroutine(FadeOutMusic(track, _track));
    f[_loop].fadeOut = StartCoroutine(FadeOutMusic(loop, _loop));
  }

  private void FadeInMusicTrack(int mode)
  {
    f[_track].fadeIn = StartCoroutine(FadeInMusic(track, _track));
    f[_loop].fadeIn = StartCoroutine(FadeInMusic(loop, _loop));
  }

  private void PlayLoseEffect()
  {
    lose.Play();
    f[_lose].fadeIn = StartCoroutine(FadeIn(lose, _lose));
  }

  private void StopLoseEffect()
  {
    lose.Stop();
  }

  private void FadeOutAllMenuTracks(int mode)
  {
    StopCoroutineSafe(f[_options].fadeIn);
    StopCoroutineSafe(f[_main].fadeIn);
    StopCoroutineSafe(f[_store].fadeIn);

    f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
    f[_store].fadeOut = StartCoroutine(FadeOut(store, _store));
    f[_options].fadeOut = StartCoroutine(FadeOut(options, _options));
  }

  private IEnumerator SwitchMode()
  {
    yield return StartCoroutine (FadeOutVolume ());

    lose.clip = _lose.clip;
    // Initialize track (MODE 1)
    track.clip = _track.clip;
    // Initialize track loop (MODE 1)
    loop.clip = _loop.clip;
    // Initialize main menu loop (MODE 1)
    main.clip = _main.clip;
    main.Play ();
    // Initialize options menu loop (MODE 1)
    options.clip = _options.clip;
    options.Play ();
    // Initialize store menu loop (MODE 1)
    store.clip = _store.clip;
    store.Play ();

    StartCoroutine (FadeInVolume ());
  }

  private void PauseMusic(int mode)
  {
    track.Pause();
    loop.Pause();
  }

  private void UnPauseMusic(int mode)
  {
    track.UnPause();
    loop.UnPause();
  }

  private void StopAll()
  {
    track.Stop();
    loop.Stop();
    main.Stop();
    options.Stop();
    store.Stop();
  }

  private void PauseAll()
  {
    track.Pause();
    loop.Pause();
    main.Pause();
    options.Pause();
    store.Pause();
  }

  private void ResumeAll()
  {
    track.UnPause();
    loop.UnPause();
    main.UnPause();
    options.UnPause();
    store.UnPause();
  }
  #endregion
}
