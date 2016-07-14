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

  private Dictionary<AudioObject, CPair> f = new Dictionary<AudioObject, CPair>();

  static public AudioManager inst { get; private set; }
  bool _playOnce;
//  bool _inOptions;
  int _mode { get { return StatsManager.inst.vMode; } }

  #region AudioObjects
  public AudioObject[] gameTracks;
  public AudioObject[] loops;
  public AudioObject[] mainTracks;
  public AudioObject[] optionTracks;
  public AudioObject[] storeTracks;

  public AudioObject[] loseEffects;

  // Mode 1 Game Tracks
  public AudioObject _track { get { return gameTracks [_mode]; } }
  public AudioObject _loop { get { return loops [_mode]; } }

  // Mode 1 Options Tracks
  public AudioObject _main { get { return mainTracks [_mode]; } }
  public AudioObject _options { get { return optionTracks [_mode]; } }
  public AudioObject _store { get { return storeTracks [_mode]; } } 
  public AudioObject _lose { get { return loseEffects [_mode]; } }

  // Mode 2 Game Tracks
//  public AudioObject _track2;
//  public AudioObject _track2_loop;
//
//  // Mode 2 Options Tracks
//  public AudioObject _main_menu2;
//  public AudioObject _options_menu2;
//  public AudioObject _store_menu2;
//
//  // Sound Effects
//  public AudioObject _lose_effect;
  #endregion

  #region Properties
  // Mode 1 Game Tracks
  public AudioSource track { get; private set; }
  public AudioSource loop { get; private set; }
  public AudioSource main { get; private set; }
  public AudioSource options { get; private set; }
  public AudioSource store { get; private set; }
  public AudioSource lose { get; private set; }

  // Mode 1 Options Tracks
//  public AudioSource main_menu1 { get; private set; }
//  public AudioSource options_menu1 { get; private set; }
//  public AudioSource store_menu1 { get; private set; }
//
//  // Mode 2 Game Tracks
//  public AudioSource track2 { get; private set; }
//  public AudioSource track2_loop { get; private set; }
//
//  // Mode 2 Options Tracks
//  public AudioSource main_menu2 { get; private set; }
//  public AudioSource options_menu2 { get; private set; }
//  public AudioSource store_menu2 { get; private set; }
//
//  // Sound Effects
//  public AudioSource lose_effect { get; private set; }
  #endregion

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

  public const int MUTE_MODE = 2;

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

//      f.Add(_track1, new CPair());
//      f.Add(_track1_loop, new CPair());
//      f.Add(_track2, new CPair());
//      f.Add(_track2_loop, new CPair());
//      f.Add(_options_menu1, new CPair());
//      f.Add(_options_menu2, new CPair());
//      f.Add(_store_menu1, new CPair());
//      f.Add(_store_menu2, new CPair());
//      f.Add(_main_menu1, new CPair());
//      f.Add(_main_menu2, new CPair());
//      f.Add(_lose_effect, new CPair());


//      // Initialize track (MODE 2)
//      track2 = sources[6];
//      track2.clip = _track2.clip;
//
//      // Initialize track loop (MODE 2)
//      track2_loop = sources[7];
//      track2_loop.clip = _track2_loop.clip;
//      track2_loop.loop = true;
//
//      // Initialize main menu loop (MODE 2)
//      main_menu2 = sources[8];
//      main_menu2.clip = _main_menu2.clip;
//      main_menu2.loop = true;
//
//      // Initialize options menu loop (MODE 2)
//      options_menu2 = sources[9];
//      options_menu2.clip = _options_menu2.clip;
//      options_menu2.loop = true;
//      options_menu2.volume = 0.0f;
//      options_menu2.Play();
//
//      // Initialize store menu loop (MODE 2)
//      store_menu2 = sources[10];
//      store_menu2.clip = _store_menu2.clip;
//      store_menu2.loop = true;
//      store_menu2.volume = 0.0f;
//      store_menu2.Play();
    }
  }

  // Use this for initialization
  void Start()
  {
    InitializeAudioSource ();

    _playOnce = true;
//    _inOptions = false;
//    _mode = StatsManager.inst.vMode;

    main.clip = _main.clip;
    main.Play ();
//    if (_mode == 0)
//    {
//      main_menu1.Play();
//      main_menu2.volume = 0.0f;
//      main_menu2.Play();
//    }
//    else if (_mode == 1)
//    {
//      main_menu2.Play();
//      main_menu1.volume = 0.0f;
//      main_menu1.Play();
//    }
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
//    _mode = mode;

    if (_mode == MUTE_MODE)
    {
      StartCoroutine (FadeOutVolume ());
    }
    else
    {
//      if (_mode == 0)
//        FadeOutMode1();
//      else if (_mode == 1)
//        FadeOutMode0();
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
    while (t < 1.0f)
    {
      t += Time.deltaTime * _options.volumeFadeSpeed;
      AudioListener.volume = Mathf.Lerp (1.0f, 0.0f, t);
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
//    if (mode == 0)
//    {
      main.clip = _main.clip;
      options.clip = _options.clip;
      store.clip = _store.clip;

      main.volume = 1.0f;
      options.volume = 0.0f;
      store.volume = 0.0f;

//      main_menu1.Stop();
//      main_menu1.Play();
//      main_menu1.volume = 1.0f;
//
//      options_menu1.Stop();
//      options_menu1.Play();
//      options_menu1.volume = 0.0f;
//
//      store_menu1.Stop();
//      store_menu1.Play();
//      store_menu1.volume = 0.0f;
//    }
//    else if (mode == 1)
//    {
//      main_menu2.Stop();
//      main_menu2.Play();
//      main_menu2.volume = 1.0f;
//
//      options_menu2.Stop();
//      options_menu2.Play();
//      options_menu2.volume = 0.0f;
//
//      store_menu2.Stop();
//      store_menu2.Play();
//      store_menu2.volume = 0.0f;
//    }
  }

  private void PlayOptionsTrack(int mode)
  {
//    if (mode == 0)
//    {
    StopCoroutineSafe (f[_options].fadeOut);
    StopCoroutineSafe (f [_main].fadeIn);

    f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
    f[_options].fadeIn = StartCoroutine(FadeIn(options, _options));
//    }
//    else if (mode == 1)
//    {
//      StopCoroutineSafe(f[_options_menu2].fadeOut);
//      StopCoroutineSafe(f[_main_menu2].fadeIn);
//
//      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
//      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu2, _options_menu2));
//    }
  }

  private void StopOptionsTrack(int mode)
  {
//    if (mode == 0)
//    {
      StopCoroutineSafe(f[_options].fadeIn);
      StopCoroutineSafe(f[_main].fadeOut);

      f[_main].fadeIn = StartCoroutine(FadeIn(main, _main));
      f[_options].fadeOut = StartCoroutine(FadeOut(options, _options));
//    }
//    else if (mode == 1)
//    {
//      StopCoroutineSafe(f[_options_menu2].fadeIn);
//      StopCoroutineSafe(f[_main_menu2].fadeOut);
//
//      f[_main_menu2].fadeIn = StartCoroutine(FadeIn(main_menu2, _main_menu2));
//      f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
//    }
  }

  private void PlayStoreTrack(int mode)
  {
//    if (mode == 0)
//    {
      StopCoroutineSafe(f[_store].fadeOut);
      StopCoroutineSafe(f[_main].fadeIn);
      StopCoroutineSafe(f[_track].fadeIn);
      StopCoroutineSafe(f[_loop].fadeIn);

      f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
      f[_store].fadeIn = StartCoroutine(FadeIn(store, _store));
//    }
//    else if (mode == 1)
//    {
//      StopCoroutineSafe(f[_store_menu2].fadeOut);
//      StopCoroutineSafe(f[_main_menu2].fadeIn);
//      StopCoroutineSafe(f[_track2].fadeIn);
//      StopCoroutineSafe(f[_track2_loop].fadeIn);
//
//      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
//      f[_store_menu2].fadeIn = StartCoroutine(FadeIn(store_menu2, _store_menu2));
//    }
  }

  private void StopStoreTrack(int mode)
  {
//    if (mode == 0)
//    {
      StopCoroutineSafe(f[_store].fadeIn);
      StopCoroutineSafe(f[_main].fadeOut);

      f[_main].fadeIn = StartCoroutine(FadeIn(main, _main));
      f[_store].fadeOut = StartCoroutine(FadeOut(store, _store));
//    }
//    else if (mode == 1)
//    {
//      StopCoroutineSafe(f[_store_menu2].fadeIn);
//      StopCoroutineSafe(f[_main_menu2].fadeOut);
//
//      f[_main_menu2].fadeIn = StartCoroutine(FadeIn(main_menu2, _main_menu2));
//      f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
//    }
  }

  private void ResetLoopingTracks(int mode)
  {
    _playOnce = true;

//    if (mode == 0)
      loop.volume = 1.0f;
//    else if (mode == 1)
//      track2_loop.volume = 1.0f;
  }

  public int[] timeSamples = new int[] { 5734425, 6350000, 6144000 };
  private int _timeSamples { get { return timeSamples [_mode]; } }

  private void PlayLoopingTrack(int mode)
  {
    // Track 1: 5734425
    // Track 2: 6350000
    // Track 3: 6144000

//    if (mode == 0)
//    {
      if (track.timeSamples > _timeSamples && _playOnce == true)
      {
        loop.clip = _loop.clip;
        loop.Play();
        _playOnce = false;
      }
//    }
//    else if (mode == 1)
//    {
//      if (track2.timeSamples > 6350000 && _playOnce == true)
//      {
//        track2_loop.Play();
//        _playOnce = false;
//      }
//    }
  }

  private void PlayMusicTrack(int mode)
  {
//    if (mode == 0)
//    {
      track.volume = 1.0f;
      track.clip = _track.clip;
      track.Play();
//    }
//    else if (mode == 1)
//    {
//      track2.volume = 1.0f;
//      track2.Play();
//    }
  }

  private void StopMusicTrack(int mode)
  {
//    if (mode == 0)
//    {
      track.Stop();
      loop.Stop();
//    }
//    else if (mode == 1)
//    {
//      track2.Stop();
//      track2_loop.Stop();
//    }
  }

  private void FadeOutMusicTrack(int mode)
  {
//    if (mode == 0)
//    {
      f[_track].fadeOut = StartCoroutine(FadeOutMusic(track, _track));
      f[_loop].fadeOut = StartCoroutine(FadeOutMusic(loop, _loop));
//    }
//    else if (mode == 1)
//    {
//      f[_track2].fadeOut = StartCoroutine(FadeOutMusic(track2, _track2));
//      f[_track2_loop].fadeOut = StartCoroutine(FadeOutMusic(track2_loop, _track2_loop));
//    }
  }

  private void FadeInMusicTrack(int mode)
  {
//    if (mode == 0)
//    {
      f[_track].fadeIn = StartCoroutine(FadeInMusic(track, _track));
      f[_loop].fadeIn = StartCoroutine(FadeInMusic(loop, _loop));
//    }
//    else if (mode == 1)
//    {
//      f[_track2].fadeIn = StartCoroutine(FadeInMusic(track2, _track2));
//      f[_track2_loop].fadeIn = StartCoroutine(FadeInMusic(track2_loop, _track2_loop));
//    }
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
//    if (mode == 0)
//    {
      StopCoroutineSafe(f[_options].fadeIn);
      StopCoroutineSafe(f[_main].fadeIn);
      StopCoroutineSafe(f[_store].fadeIn);

      f[_main].fadeOut = StartCoroutine(FadeOut(main, _main));
      f[_store].fadeOut = StartCoroutine(FadeOut(store, _store));
      f[_options].fadeOut = StartCoroutine(FadeOut(options, _options));
//    }
//    else if (mode == 1)
//    {
//      StopCoroutineSafe(f[_options_menu2].fadeIn);
//      StopCoroutineSafe(f[_main_menu2].fadeIn);
//      StopCoroutineSafe(f[_store_menu2].fadeIn);
//
//      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
//      f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
//      f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
//    }
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

//    StopCoroutineSafe(f[_options].fadeIn);
//    StopCoroutineSafe(f[_main].fadeIn);
//    StopCoroutineSafe(f[_store].fadeIn);
//    StopCoroutineSafe(f[_track].fadeIn);
//    StopCoroutineSafe(f[_loop].fadeIn);
//
//    f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu1, _main_menu1));
//    f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu1, _store_menu1));
//    f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu1, _options_menu1));
//    f[_track1].fadeOut = StartCoroutine(FadeOutMusic(track1, _track1));
//    f[_track1_loop].fadeOut = StartCoroutine(FadeOutMusic(track1_loop, _track1_loop));
//
//    if (_inOptions)
//    {
//      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu2, _options_menu2));
//    }
  }
//
//  private void FadeOutMode1()
//  {
//    StopCoroutineSafe(f[_options_menu2].fadeIn);
//    StopCoroutineSafe(f[_main_menu2].fadeIn);
//    StopCoroutineSafe(f[_store_menu2].fadeIn);
//    StopCoroutineSafe(f[_track2].fadeIn);
//    StopCoroutineSafe(f[_track2_loop].fadeIn);
//    StopCoroutineSafe(f[_options_menu1].fadeOut);
//
//    f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
//    f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
//    f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
//    f[_track1].fadeOut = StartCoroutine(FadeOutMusic(track2, _track2));
//    f[_track2_loop].fadeOut = StartCoroutine(FadeOutMusic(track2_loop, _track2_loop));
//
//    if (_inOptions)
//    {
//      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu1, _options_menu1));
//    }
//  }

  private void PauseMusic(int mode)
  {
//    if (mode == 0)
//    {
      track.Pause();
      loop.Pause();
//    }
//    else if (mode == 1)
//    {
//      track2.Pause();
//      track2_loop.Pause();
//    }
  }

  private void UnPauseMusic(int mode)
  {
//    if (mode == 0)
//    {
      track.UnPause();
      loop.UnPause();
//    }
//    else if (mode == 1)
//    {
//      track2.UnPause();
//      track2_loop.UnPause();
//    }
  }

  private void PauseAll()
  {
    track.Pause();
    loop.Pause();
    main.Pause();
    options.Pause();
    store.Pause();

//    track2.Pause();
//    track2_loop.Pause();
//    options_menu2.Pause ();
//    store_menu2.Pause();
//    main_menu2.Pause();
//
//    lose_effect.Pause();
  }

  private void ResumeAll()
  {
    track.UnPause();
    loop.UnPause();
    main.UnPause();
    options.UnPause();
    store.UnPause();

//    track2.UnPause();
//    track2_loop.UnPause();
//    options_menu2.UnPause ();
//    store_menu2.UnPause();
//    main_menu2.UnPause();
//
//    lose_effect.UnPause();
  }
  #endregion
}
