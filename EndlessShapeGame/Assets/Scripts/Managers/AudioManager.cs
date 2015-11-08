using UnityEngine;
using System.Collections;

public class AudioManager : Manager
{

  /// <summary>
  /// Background Music Audio Clip
  /// </summary>
  public AudioClip backgroundMusic;
  public AudioClip loseEffect;
    /// <summary>
    /// AudioPlayer attached to gameObject
    /// </summary>
  public AudioSource audioPlayer { get; private set; }
  private float originalVolume { get; set; }
  static public AudioManager inst { get; private set; }

  void Awake ()
  {
    if (inst == null) inst = this;
  }

  // Use this for initialization
  void Start ()
  {
    audioPlayer = GetComponent<AudioSource>();
    if (!audioPlayer)
    {
      audioPlayer = gameObject.AddComponent<AudioSource>();
      audioPlayer.clip = backgroundMusic;
    }

    originalVolume = audioPlayer.volume;
    audioPlayer.volume = 0.0f;
    audioPlayer.Stop();
  }

  public void Play ()
  {
    audioPlayer.volume = 1.0f;
    audioPlayer.Play();
  }

  //void FixedUpdate ()
  //{
  //  Debug.Log ("FREQUENCY : " + backgroundMusic.frequency);
  //}

  #region implemented abstract members of AudioManager
  public override void OnGameReset(object sender, System.EventArgs args)
  {
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    //StopAllCoroutines ();
    //StartCoroutine (FadeInPitch ());
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    StopAllCoroutines ();
    audioPlayer.clip = loseEffect;
    audioPlayer.Play();
    StartCoroutine (FadeOutPitch ());
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
    while (audioPlayer.pitch > 0.0f)
    {
      audioPlayer.pitch -= Time.deltaTime * 0.25f;
      audioPlayer.volume -= Time.deltaTime * 0.25f;
      yield return null;
    }

    audioPlayer.volume = 0.0f;
    audioPlayer.pitch = 0.0f;
    audioPlayer.Stop ();
  }

  private IEnumerator FadeInPitch()
  {
    audioPlayer.Play();

    while (audioPlayer.volume < originalVolume)
    {
      audioPlayer.volume += Time.deltaTime;
      yield return null;
    }
    
    audioPlayer.volume = originalVolume;
  }
  #endregion
}
