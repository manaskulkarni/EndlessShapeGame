﻿using UnityEngine;
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
  public AudioSource[] audioPlayer { get; private set; }
  public AudioSource bgm;
  public AudioSource loseSFX;
  private float originalVolume { get; set; }
  static public AudioManager inst { get; private set; }

  void Awake ()
  {
    if (inst == null) inst = this;
  }

  // Use this for initialization
  void Start ()
  {
    audioPlayer = GetComponents<AudioSource>();

    if (!bgm)
    {
      bgm = gameObject.AddComponent<AudioSource>();
      bgm.clip = backgroundMusic;
    }

    if(!loseSFX)
    {
      loseSFX = gameObject.AddComponent<AudioSource>();
      loseSFX.clip = loseEffect;
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
      loseSFX.pitch -= Time.deltaTime * 0.25f;
      bgm.volume -= Time.deltaTime * 0.35f;
      bgm.pitch -= Time.deltaTime * 0.05f;
      loseSFX.volume -= Time.deltaTime * 0.25f;
      yield return null;
    }

    bgm.volume = 0.0f;
    loseSFX.volume = 0.0f;
    loseSFX.pitch = 0.0f;
    bgm.Stop ();
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
