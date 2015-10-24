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

	// Use this for initialization
	void Start ()
  {
    audioPlayer = GetComponent<AudioSource>();
    if (!audioPlayer)
    {
      audioPlayer = gameObject.AddComponent<AudioSource>();
      audioPlayer.clip = backgroundMusic;
    }

    audioPlayer.Stop();
	}

  #region implemented abstract members of AudioManager
  public override void OnGameReset(object sender, System.EventArgs args)
  {
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    audioPlayer.Play();
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    audioPlayer.Stop();
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
      yield return null;
    }
  }

  private IEnumerator FadeInPitch()
  {
    while (audioPlayer.pitch < 1.0f)
    {
      audioPlayer.pitch += Time.deltaTime * 0.25f;
      yield return null;
    }
  }
  #endregion
}
