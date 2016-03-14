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

  #region AudioObjects
  // Mode 1 Game Tracks
  public AudioObject _track1;
  public AudioObject _track1_loop;

  // Mode 1 Options Tracks
  public AudioObject _main_menu1;
  public AudioObject _options_menu1;
  public AudioObject _store_menu1;

  // Mode 2 Game Tracks
  public AudioObject _track2;
  public AudioObject _track2_loop;

  // Mode 2 Options Tracks
  public AudioObject _main_menu2;
  public AudioObject _options_menu2;
  public AudioObject _store_menu2;

  // Sound Effects
  public AudioObject _lose_effect;
  #endregion

  #region Properties
  // Mode 1 Game Tracks
  public AudioSource track1 { get; private set; }
  public AudioSource track1_loop { get; private set; }

  // Mode 1 Options Tracks
  public AudioSource main_menu1 { get; private set; }
  public AudioSource options_menu1 { get; private set; }
  public AudioSource store_menu1 { get; private set; }

  // Mode 2 Game Tracks
  public AudioSource track2 { get; private set; }
  public AudioSource track2_loop { get; private set; }

  // Mode 2 Options Tracks
  public AudioSource main_menu2 { get; private set; }
  public AudioSource options_menu2 { get; private set; }
  public AudioSource store_menu2 { get; private set; }

  // Sound Effects
  public AudioSource lose_effect { get; private set; }
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

  private Dictionary<AudioObject, CPair> f = new Dictionary<AudioObject, CPair>();

  static public AudioManager inst { get; private set; }
  bool _playOnce;
  bool _inOptions;
  int _mode;

  void Awake()
  {
    if (inst == null)
    {
      inst = this;

      f.Add(_track1, new CPair());
      f.Add(_track1_loop, new CPair());
      f.Add(_track2, new CPair());
      f.Add(_track2_loop, new CPair());
      f.Add(_options_menu1, new CPair());
      f.Add(_options_menu2, new CPair());
      f.Add(_store_menu1, new CPair());
      f.Add(_store_menu2, new CPair());
      f.Add(_main_menu1, new CPair());
      f.Add(_main_menu2, new CPair());
      f.Add(_lose_effect, new CPair());

      var sources = gameObject.GetComponentsInChildren<AudioSource>();

      // Initialize lose sound effect
      lose_effect = sources[0];
      lose_effect.clip = _lose_effect.clip;

      // Initialize track (MODE 1)
      track1 = sources[1];
      track1.clip = _track1.clip;

      // Initialize track loop (MODE 1)
      track1_loop = sources[2];
      track1_loop.clip = _track1_loop.clip;
      track1_loop.loop = true;

      // Initialize main menu loop (MODE 1)
      main_menu1 = sources[3];
      main_menu1.clip = _main_menu1.clip;
      main_menu1.loop = true;

      // Initialize options menu loop (MODE 1)
      options_menu1 = sources[4];
      options_menu1.clip = _options_menu1.clip;
      options_menu1.loop = true;
      options_menu1.Play();
      options_menu1.volume = 0.0f;

      // Initialize store menu loop (MODE 1)
      store_menu1 = sources[5];
      store_menu1.clip = _store_menu1.clip;
      store_menu1.loop = true;
      store_menu1.Play();
      store_menu1.volume = 0.0f;

      // Initialize track (MODE 2)
      track2 = sources[6];
      track2.clip = _track2.clip;

      // Initialize track loop (MODE 2)
      track2_loop = sources[7];
      track2_loop.clip = _track2_loop.clip;
      track2_loop.loop = true;

      // Initialize main menu loop (MODE 2)
      main_menu2 = sources[8];
      main_menu2.clip = _main_menu2.clip;
      main_menu2.loop = true;

      // Initialize options menu loop (MODE 2)
      options_menu2 = sources[9];
      options_menu2.clip = _options_menu2.clip;
      options_menu2.loop = true;
      options_menu2.volume = 0.0f;
      options_menu2.Play();

      // Initialize store menu loop (MODE 2)
      store_menu2 = sources[10];
      store_menu2.clip = _store_menu2.clip;
      store_menu2.loop = true;
      store_menu2.volume = 0.0f;
      store_menu2.Play();
    }
  }

  // Use this for initialization
  void Start()
  {
    _playOnce = true;
    _inOptions = false;
    _mode = StatsManager.inst.vMode;

    if (_mode == 0)
    {
      main_menu1.Play();
      main_menu2.volume = 0.0f;
      main_menu2.Play();
    }
    else if (_mode == 1)
    {
      main_menu2.Play();
      main_menu1.volume = 0.0f;
      main_menu1.Play();
    }
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
    _inOptions = true;
    PlayOptionsTrack(_mode);
  }

  void OnHideOptions()
  {
    _inOptions = false;
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

  void OnGameOver()
  {
    StopMusicTrack(_mode);
    ReplayMenuTrack(_mode);
    ResetLoopingTracks(_mode);
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

    if (_mode == 0)
      FadeOutMode1();
    else if (_mode == 1)
      FadeOutMode0();
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
  private void ReplayMenuTrack(int mode)
  {
    if (mode == 0)
    {
      main_menu1.Stop();
      main_menu1.Play();
      main_menu1.volume = 1.0f;

      options_menu1.Stop();
      options_menu1.Play();
      options_menu1.volume = 0.0f;

      store_menu1.Stop();
      store_menu1.Play();
      store_menu1.volume = 0.0f;
    }
    else if (mode == 1)
    {
      main_menu2.Stop();
      main_menu2.Play();
      main_menu2.volume = 1.0f;

      options_menu2.Stop();
      options_menu2.Play();
      options_menu2.volume = 0.0f;

      store_menu2.Stop();
      store_menu2.Play();
      store_menu2.volume = 0.0f;
    }
  }

  private void PlayOptionsTrack(int mode)
  {
    if (mode == 0)
    {
      StopCoroutineSafe(f[_options_menu1].fadeOut);
      StopCoroutineSafe(f[_main_menu1].fadeIn);

      f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu1, _main_menu1));
      f[_options_menu1].fadeIn = StartCoroutine(FadeIn(options_menu1, _options_menu1));
    }
    else if (mode == 1)
    {
      StopCoroutineSafe(f[_options_menu2].fadeOut);
      StopCoroutineSafe(f[_main_menu2].fadeIn);

      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu2, _options_menu2));
    }
  }

  private void StopOptionsTrack(int mode)
  {
    if (mode == 0)
    {
      StopCoroutineSafe(f[_options_menu1].fadeIn);
      StopCoroutineSafe(f[_main_menu1].fadeOut);

      f[_main_menu1].fadeIn = StartCoroutine(FadeIn(main_menu1, _main_menu1));
      f[_options_menu1].fadeOut = StartCoroutine(FadeOut(options_menu1, _options_menu1));
    }
    else if (mode == 1)
    {
      StopCoroutineSafe(f[_options_menu2].fadeIn);
      StopCoroutineSafe(f[_main_menu2].fadeOut);

      f[_main_menu2].fadeIn = StartCoroutine(FadeIn(main_menu2, _main_menu2));
      f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
    }
  }

  private void PlayStoreTrack(int mode)
  {
    if (mode == 0)
    {
      StopCoroutineSafe(f[_store_menu1].fadeOut);
      StopCoroutineSafe(f[_main_menu1].fadeIn);
      StopCoroutineSafe(f[_track1].fadeIn);
      StopCoroutineSafe(f[_track1_loop].fadeIn);

      f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu1, _main_menu1));
      f[_store_menu1].fadeIn = StartCoroutine(FadeIn(store_menu1, _store_menu1));
    }
    else if (mode == 1)
    {
      StopCoroutineSafe(f[_store_menu2].fadeOut);
      StopCoroutineSafe(f[_main_menu2].fadeIn);
      StopCoroutineSafe(f[_track2].fadeIn);
      StopCoroutineSafe(f[_track2_loop].fadeIn);

      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
      f[_store_menu2].fadeIn = StartCoroutine(FadeIn(store_menu2, _store_menu2));
    }
  }

  private void StopStoreTrack(int mode)
  {
    if (mode == 0)
    {
      StopCoroutineSafe(f[_store_menu1].fadeIn);
      StopCoroutineSafe(f[_main_menu1].fadeOut);

      f[_main_menu1].fadeIn = StartCoroutine(FadeIn(main_menu1, _main_menu1));
      f[_store_menu1].fadeOut = StartCoroutine(FadeOut(store_menu1, _store_menu1));
    }
    else if (mode == 1)
    {
      StopCoroutineSafe(f[_store_menu2].fadeIn);
      StopCoroutineSafe(f[_main_menu2].fadeOut);

      f[_main_menu2].fadeIn = StartCoroutine(FadeIn(main_menu2, _main_menu2));
      f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
    }
  }

  private void ResetLoopingTracks(int mode)
  {
    _playOnce = true;

    if (mode == 0)
      track1_loop.volume = 1.0f;
    else if (mode == 1)
      track2_loop.volume = 1.0f;
  }

  private void PlayLoopingTrack(int mode)
  {
    if (mode == 0)
    {
      if (track1.timeSamples > 5734425 && _playOnce == true)
      {
        track1_loop.Play();
        _playOnce = false;
      }
    }
    else if (mode == 1)
    {
      if (track2.timeSamples > 6350000 && _playOnce == true)
      {
        track2_loop.Play();
        _playOnce = false;
      }
    }
  }

  private void PlayMusicTrack(int mode)
  {
    if (mode == 0)
    {
      track1.volume = 1.0f;
      track1.Play();
    }
    else if (mode == 1)
    {
      track2.volume = 1.0f;
      track2.Play();
    }
  }

  private void StopMusicTrack(int mode)
  {
    if (mode == 0)
    {
      track1.Stop();
      track1_loop.Stop();
    }
    else if (mode == 1)
    {
      track2.Stop();
      track2_loop.Stop();
    }
  }

  private void FadeOutMusicTrack(int mode)
  {
    if (mode == 0)
    {
      f[_track1].fadeOut = StartCoroutine(FadeOutMusic(track1, _track1));
      f[_track1_loop].fadeOut = StartCoroutine(FadeOutMusic(track1_loop, _track1_loop));
    }
    else if (mode == 1)
    {
      f[_track2].fadeOut = StartCoroutine(FadeOutMusic(track2, _track2));
      f[_track2_loop].fadeOut = StartCoroutine(FadeOutMusic(track2_loop, _track2_loop));
    }
  }

  private void FadeInMusicTrack(int mode)
  {
    if (mode == 0)
    {
      f[_track1].fadeIn = StartCoroutine(FadeInMusic(track1, _track1));
      f[_track1_loop].fadeIn = StartCoroutine(FadeInMusic(track1_loop, _track1_loop));
    }
    else if (mode == 1)
    {
      f[_track2].fadeIn = StartCoroutine(FadeInMusic(track2, _track2));
      f[_track2_loop].fadeIn = StartCoroutine(FadeInMusic(track2_loop, _track2_loop));
    }
  }

  private void PlayLoseEffect()
  {
    lose_effect.Play();
    f[_lose_effect].fadeIn = StartCoroutine(FadeIn(lose_effect, _lose_effect));
  }

  private void StopLoseEffect()
  {
    lose_effect.Stop();
  }

  private void FadeOutAllMenuTracks(int mode)
  {
    if (mode == 0)
    {
      StopCoroutineSafe(f[_options_menu1].fadeIn);
      StopCoroutineSafe(f[_main_menu1].fadeIn);
      StopCoroutineSafe(f[_store_menu1].fadeIn);

      f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu1, _main_menu1));
      f[_store_menu1].fadeOut = StartCoroutine(FadeOut(store_menu1, _store_menu1));
      f[_options_menu1].fadeOut = StartCoroutine(FadeOut(options_menu1, _options_menu1));
    }
    else if (mode == 1)
    {
      StopCoroutineSafe(f[_options_menu2].fadeIn);
      StopCoroutineSafe(f[_main_menu2].fadeIn);
      StopCoroutineSafe(f[_store_menu2].fadeIn);

      f[_main_menu2].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
      f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
      f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
    }
  }

  private void FadeOutMode0()
  {
    StopCoroutineSafe(f[_options_menu1].fadeIn);
    StopCoroutineSafe(f[_main_menu1].fadeIn);
    StopCoroutineSafe(f[_store_menu1].fadeIn);
    StopCoroutineSafe(f[_track1].fadeIn);
    StopCoroutineSafe(f[_track1_loop].fadeIn);
    StopCoroutineSafe(f[_options_menu2].fadeOut);

    f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu1, _main_menu1));
    f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu1, _store_menu1));
    f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu1, _options_menu1));
    f[_track1].fadeOut = StartCoroutine(FadeOutMusic(track1, _track1));
    f[_track1_loop].fadeOut = StartCoroutine(FadeOutMusic(track1_loop, _track1_loop));

    if (_inOptions)
    {
      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu2, _options_menu2));
    }
  }

  private void FadeOutMode1()
  {
    StopCoroutineSafe(f[_options_menu2].fadeIn);
    StopCoroutineSafe(f[_main_menu2].fadeIn);
    StopCoroutineSafe(f[_store_menu2].fadeIn);
    StopCoroutineSafe(f[_track2].fadeIn);
    StopCoroutineSafe(f[_track2_loop].fadeIn);
    StopCoroutineSafe(f[_options_menu1].fadeOut);

    f[_main_menu1].fadeOut = StartCoroutine(FadeOut(main_menu2, _main_menu2));
    f[_store_menu2].fadeOut = StartCoroutine(FadeOut(store_menu2, _store_menu2));
    f[_options_menu2].fadeOut = StartCoroutine(FadeOut(options_menu2, _options_menu2));
    f[_track1].fadeOut = StartCoroutine(FadeOutMusic(track2, _track2));
    f[_track2_loop].fadeOut = StartCoroutine(FadeOutMusic(track2_loop, _track2_loop));

    if (_inOptions)
    {
      f[_options_menu2].fadeIn = StartCoroutine(FadeIn(options_menu1, _options_menu1));
    }
  }

  private void PauseMusic(int mode)
  {
    if (mode == 0)
    {
      track1.Pause();
      track1_loop.Pause();
    }
    else if (mode == 1)
    {
      track2.Pause();
      track2_loop.Pause();
    }
  }

  private void UnPauseMusic(int mode)
  {
    if (mode == 0)
    {
      track1.UnPause();
      track1_loop.UnPause();
    }
    else if (mode == 1)
    {
      track2.UnPause();
      track2_loop.UnPause();
    }
  }

  private void PauseAll()
  {
    track1.Pause();
    track1_loop.Pause();
    options_menu1.Pause();
    store_menu1.Pause();
    main_menu1.Pause();
    track2.Pause();
    track2_loop.Pause();
    lose_effect.Pause();
  }

  private void ResumeAll()
  {
    track1.UnPause();
    track1_loop.UnPause();
    options_menu1.UnPause();
    store_menu1.UnPause();
    main_menu1.UnPause();
    track2.UnPause();
    track2_loop.UnPause();
    lose_effect.UnPause();
  }
  #endregion
}
