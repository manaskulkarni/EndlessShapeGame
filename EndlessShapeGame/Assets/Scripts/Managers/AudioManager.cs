using UnityEngine;
using System.Collections;

public class AudioManager : Manager
{

  /// <summary>
  /// Background Music Audio Clip
  /// </summary>
  public AudioClip backgroundMusic;
  /// <summary>
  /// AudioPlayer attached to gameObject
  /// </summary>
  private AudioSource audioPlayer { get; set; }
  private float originalVolume { get; set; }

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

  #region implemented abstract members of AudioManager
  public override void OnGameReset(object sender, System.EventArgs args)
  {
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    StopAllCoroutines ();
    StartCoroutine (FadeInPitch ());
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    StopAllCoroutines ();
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
    while (audioPlayer.volume > 0.0f)
    {
      audioPlayer.volume -= Time.deltaTime * 0.25f;
      yield return null;
    }
    
    audioPlayer.volume = 0.0f;
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
