using UnityEngine;
using System.Collections;
using System;

public class AudioManager : Manager
{
  [System.Serializable]
  public class SoundEffect
  {
    public AudioClip clip;
    public float volumeFadeSpeed;
    public float pitchFadeSpeed;
  }

  /// <summary>
  /// Background Music Audio Clip
  /// </summary>
  public SoundEffect backgroundMusic;
  public SoundEffect loseEffect;
  public SoundEffect backgroundLoop;
  public SoundEffect mainMenuLoop;
  public SoundEffect optionsMenuLoop;

  #region Properties
  public AudioSource bgm { get; private set; }
  public AudioSource loseSFX { get; private set; }
  public AudioSource bgmLoop { get; private set; }
  public AudioSource mainMenu { get; private set; }
  public AudioSource optionsMenu { get; private set; }
  #endregion

  /// <summary>
  /// AudioPlayer attached to gameObject
  /// </summary>
  private float originalVolume { get; set; }
  static public AudioManager inst { get; private set; }
  bool once;

  void Awake()
  {
    if (inst == null)
    {
      inst = this;

      var sources = gameObject.GetComponents<AudioSource>();

      bgm = sources[0];
      bgm.clip = backgroundMusic.clip;

      loseSFX = sources[1];
      loseSFX.clip = loseEffect.clip;

      bgmLoop = sources[2];
      bgmLoop.clip = backgroundLoop.clip;
      bgmLoop.loop = true;
      bgmLoop.mute = false;

      mainMenu = sources[3];
      mainMenu.clip = mainMenuLoop.clip;
      mainMenu.loop = true;
      mainMenu.Play();

      optionsMenu = sources[4];
      optionsMenu.clip = optionsMenuLoop.clip;
      optionsMenu.loop = true;
      optionsMenu.Play();
      optionsMenu.volume = 0.0f;

      originalVolume = bgm.volume;
      bgm.volume = 0.0f;
      bgm.Stop();
    }
  }

  // Use this for initialization
  void Start()
  {
    once = true;
    GameManager.inst.PauseEvent += OnPause;
    GameManager.inst.UnPauseEvent += OnUnPause;
  }

  public void Play()
  {
    StopAllCoroutines();
    StartCoroutine(FadeInPitch());
  }

  void FixedUpdate()
  {
    if (bgm.timeSamples > 2994740 && once == true)
    {
      bgmLoop.Play();
      once = false;
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
  public override void OnGameReset(object sender, System.EventArgs args)
  {
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    StopAllCoroutines();
    bgm.Stop();
    loseSFX.Stop();
    bgm.pitch = 1.0f;
    bgm.volume = 1.0f;
    loseSFX.pitch = 1.0f;
    loseSFX.volume = 1.0f;
    StartCoroutine(FadeOut(mainMenu, mainMenuLoop));
  }

  public void PlayOptionsTrack()
  {
    StartCoroutine(FadeOut(mainMenu, mainMenuLoop));
    StartCoroutine(FadeIn(optionsMenu, optionsMenuLoop));
  }

  public void StopOptionsTrack()
  {
    StartCoroutine(FadeIn(mainMenu, mainMenuLoop));
    StartCoroutine(FadeOut(optionsMenu, optionsMenuLoop));
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    StopAllCoroutines();
    StartCoroutine(FadeOutPitch());
    loseSFX.Play();
    mainMenu.Play();
    StartCoroutine(FadeIn(mainMenu, mainMenuLoop));
    optionsMenu.Play();
    optionsMenu.mute = true;
  }

  public override void OnGameRestart(object sender, System.EventArgs args)
  {
  }

  public override void OnHighScore(object sender, System.EventArgs args)
  {
  }

  public override void OnPause(object sender, EventArgs args)
  {
    bgm.Pause();
    bgmLoop.Pause();
  }
  public override void OnUnPause(object sender, EventArgs args)
  {
    bgm.UnPause();
    bgmLoop.UnPause();
  }

  #endregion
  #region Coroutines
  private IEnumerator FadeOutPitch()
  {
    while (loseSFX.volume > 0.0f)
    {
      bgm.volume -= Time.deltaTime * backgroundMusic.volumeFadeSpeed;
      bgmLoop.volume -= Time.deltaTime * backgroundLoop.volumeFadeSpeed;
      loseSFX.volume -= Time.deltaTime * loseEffect.volumeFadeSpeed;
      yield return null;
    }

    bgm.volume = 0.0f;
    bgmLoop.volume = 0.0f;
    loseSFX.volume = 0.0f;
    bgm.Stop();
    bgmLoop.Stop();
    loseSFX.Stop();
  }

  private IEnumerator FadeInPitch()
  {
    bgm.Play();

    while (bgm.volume < originalVolume)
    {
      bgm.volume += Time.deltaTime;
      yield return null;
    }

    bgm.volume = originalVolume;
  }

  private IEnumerator FadeOut(AudioSource source, SoundEffect clip)
  {
    while (source.volume > 0.0f)
    {
      source.volume -= Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }

    optionsMenu.Stop();
  }

  private IEnumerator FadeIn(AudioSource source, SoundEffect clip)
  {
    while (source.volume < 1.0f)
    {
      source.volume += Time.deltaTime * clip.volumeFadeSpeed;
      yield return null;
    }

    optionsMenu.Stop();
  }
  #endregion
}
