using UnityEngine;
using System.Collections;

public class AudioManager : Manager
{
  public AudioClip backgroundMusic;

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
	}

  public override void OnGameReset(object sender, System.EventArgs args)
  {
  }

  public override void OnGameStart(object sender, System.EventArgs args)
  {
    StopAllCoroutines();
    StartCoroutine(FadeInPitch());
  }

  public override void OnGameOver(object sender, System.EventArgs args)
  {
    StopAllCoroutines();
    StartCoroutine(FadeOutPitch());
  }

  public override void OnGameRestart(object sender, System.EventArgs args)
  {
  }

  public override void OnHighScore(object sender, System.EventArgs args)
  {
  }

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
}
