using UnityEngine;
using System.Collections;
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

  // Sound Effects
  public AudioObject _lose_effect;
  #endregion

  #region Properties
  // Mode 1 Game Tracks
  public AudioSource track1 { get; private set; }
  public AudioSource track1_loop { get; private set; }

  // Mode 1 Option Tracks
  public AudioSource main_menu1 { get; private set; }
  public AudioSource options_menu1 { get; private set; }
  public AudioSource store_menu1 { get; private set; }

  // Mode 2 Game Tracks
  public AudioSource track2 { get; private set; }

  // Sound Effects
  public AudioSource lose_effect { get; private set; }
  #endregion

  static public AudioManager inst { get; private set; }
  bool _playOnce;
  int _mode;

  void Awake()
  {
    if (inst == null)
    {
      inst = this;

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
      main_menu1.Play();

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
      track2 = sources[2];
      track2.clip = _track2.clip;
    }
  }

  // Use this for initialization
  void Start()
  {
    _playOnce = true;
    _mode = 0;
  }

  void FixedUpdate()
  {
    if (track1.timeSamples > 2994740 && _playOnce == true)
    {
      track1_loop.Play();
      _playOnce = false;
    }
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

  void OnDeclineRevive()
  {
    StopLoseEffect();
  }

  void OnCompleteRevive()
  {
    StopAllCoroutines();
    FadeInMusicTrack(_mode);
  }

  void OnShowOptions()
  {
    PlayOptionsTrack(_mode);
  }

  void OnHideOptions()
  {
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
  void OnUnPause()
  {
    ResumeAll();
  }

  void OnFirstBeat()
  {
    track1.volume = 1.0f;
    PlayMusicTrack(_mode);
  }

  void OnSwitchMode(int mode)
  {
    _mode = mode;
  }

  #endregion

  #region Coroutines

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
  }

  private void PlayOptionsTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeOut(main_menu1, _main_menu1));
      StartCoroutine(FadeIn(options_menu1, _options_menu1));
    }
  }

  private void StopOptionsTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeIn(main_menu1, _main_menu1));
      StartCoroutine(FadeOut(options_menu1, _options_menu1));
    }
  }

  private void PlayStoreTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeOut(main_menu1, _main_menu1));
      StartCoroutine(FadeIn(store_menu1, _store_menu1));
    }
  }

  private void StopStoreTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeIn(main_menu1, _main_menu1));
      StartCoroutine(FadeOut(store_menu1, _store_menu1));
    }
  }

  private void PlayMusicTrack(int mode)
  {
    if (mode == 0)
    {
      track1.Play();
    }
    else if (mode == 1)
    {
      track2.Play();
    }
  }

  private void StopMusicTrack(int mode)
  {
    if (mode == 0)
    {
      track1.Stop();
    }
    else if (mode == 1)
    {
      track2.Stop();
    }
  }

  private void FadeOutMusicTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeOutMusic(track1, _track1));
      StartCoroutine(FadeOutMusic(track1_loop, _track1_loop));
    }
    else if (mode == 1)
    {
      StartCoroutine(FadeOutMusic(track2, _track2));
    }
  }

  private void FadeInMusicTrack(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeInMusic(track1, _track1));
      StartCoroutine(FadeInMusic(track1_loop, _track1_loop));
    }
    else if (mode == 1)
    {
      StartCoroutine(FadeInMusic(track2, _track2));
    }
  }

  private void PlayLoseEffect()
  {
    lose_effect.Play();
    StartCoroutine(FadeIn(lose_effect, _lose_effect));
  }

  private void StopLoseEffect()
  {
    lose_effect.Stop();
  }

  private void FadeOutAllMenuTracks(int mode)
  {
    if (mode == 0)
    {
      StartCoroutine(FadeOut(main_menu1, _main_menu1));
      StartCoroutine(FadeOut(store_menu1, _store_menu1));
      StartCoroutine(FadeOut(options_menu1, _options_menu1));
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
    lose_effect.UnPause();
  }
  #endregion
}
