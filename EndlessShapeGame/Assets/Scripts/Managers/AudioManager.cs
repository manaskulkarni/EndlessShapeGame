using UnityEngine;
using System.Collections;

public class AudioManager : Manager
{
  [System.Serializable]
  public struct SoundEffect
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
  

  /// <summary>
  /// AudioPlayer attached to gameObject
  /// </summary>
  public AudioSource[] audioPlayer { get; private set; }
  public AudioSource bgm;
  public AudioSource loseSFX;
  public AudioSource bgmLoop;
  private float originalVolume { get; set; }
  static public AudioManager inst { get; private set; }
  bool once;

  void Awake ()
  {
    if (inst == null) inst = this;
  }

  // Use this for initialization
  void Start ()
  {
    once = true;

    audioPlayer = GetComponents<AudioSource>();

    if (!bgm)
    {
      bgm = gameObject.AddComponent<AudioSource>();
      bgm.clip = backgroundMusic.clip;
    }

    if(!loseSFX)
    {
      loseSFX = gameObject.AddComponent<AudioSource>();
      loseSFX.clip = loseEffect.clip;
    }

    if (!bgmLoop)
    {
      bgmLoop = gameObject.AddComponent<AudioSource>();
      bgmLoop.clip = backgroundLoop.clip;
      bgmLoop.loop = true;
    }

    originalVolume = bgm.volume;
    bgm.volume = 0.0f;
    bgm.Stop();
  }

  public void Play ()
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
      foreach (var source in GetComponents<AudioSource> ())
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
    //StopAllCoroutines ();
    //StartCoroutine (FadeInPitch ());
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    StopAllCoroutines ();
    StartCoroutine (FadeOutPitch ());
    loseSFX.Play();
  }

  public override void OnGameRestart(object sender, System.EventArgs args)
  {
  }

  public override void OnHighScore(object sender, System.EventArgs args)
  {
  }
  #endregion
  #region Coroutines
  private IEnumerator FadeOutPitch()
  {
    while (loseSFX.volume > 0.0f)
    {
      loseSFX.pitch -= Time.deltaTime * loseEffect.pitchFadeSpeed;
      bgm.volume -= Time.deltaTime * backgroundMusic.volumeFadeSpeed;
      bgmLoop.volume -= Time.deltaTime * backgroundLoop.volumeFadeSpeed;
      bgm.pitch -= Time.deltaTime * backgroundMusic.pitchFadeSpeed;
      bgmLoop.pitch -= Time.deltaTime * backgroundLoop.pitchFadeSpeed;
      loseSFX.volume -= Time.deltaTime * loseEffect.volumeFadeSpeed;
      yield return null;
    }

    bgm.volume = 0.0f;
    bgmLoop.volume = 0.0f;
    loseSFX.volume = 0.0f;
    loseSFX.pitch = 0.0f;
    bgm.Stop ();
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
  #endregion
}
