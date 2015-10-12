using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class UIManager : Manager
{
  
  // Public Members
  //  public GameObject menuGameOver
  //  {
  //    get;
  //    private set;
  //  }
  
  static public UIManager inst
  {
    get;
    private set;
  }
  
  // Private Members
  private GameObject menuStart
  {
    get;
    set;
  }
  
  private GameObject menuGame
  {
    get;
    set;
  }
  
  private GameObject menuOptions
  {
    get;
    set;
  }
  
  private GameObject menuGameOver
  {
    get;
    set;
  }
  
  private GameObject buttonStart
  {
    get;
    set;
  }
  
  private Text textScore
  {
    get;
    set;
  }
  
  private Text textGameOverScore
  {
    get;
    set;
  }
  
  private Text textGameOverFeedback
  {
    get;
    set;
  }
  
  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
    }
    else
    {
      GameObject.Destroy (gameObject);
    }
  }
  
  // Use this for initialization
  void Start ()
  {
    menuStart = GameObject.Find ("MenuStart");
    buttonStart = GameObject.Find ("ButtonStart");
    textGameOverScore = GameObject.Find ("TextGameOverScore").GetComponent <Text> ();
    textGameOverFeedback = GameObject.Find ("TextGameOverFeedback").GetComponent <Text> ();
    
    textGameOverScore.text = BestScore ();
    textGameOverFeedback.text = null;
    
    SetMenuActive (menuStart, true);
    
    menuGame = GameObject.Find ("MenuGame");
    textScore = GameObject.Find ("TextScore").GetComponent <Text> ();
    textScore.text = ZeroScore ();
    SetMenuActive (menuGame, false);
    
    //    menuGameOver = GameObject.Find ("MenuGameOver");
    //    SetMenuActive (menuGameOver, false);
    
    menuOptions = GameObject.Find ("MenuOptions");
    SetMenuActive (menuOptions, false);
    
    menuGameOver = GameObject.Find ("MenuGameOver");
    SetMenuActive (menuGameOver, false);

    // Subscribe to High Score event for text feedback
    GameManager.inst.HighScoreEvent += OnHighScore;
  }
  
  public void UpdateScore ()
  {
    //    if (StatsManager.inst.isHighScoreRT)
    //    {
    //      StartCoroutine (HighScoreFeedback ());
    //    }
    //    else
    {
      textScore.text = ""+StatsManager.inst.score+"";
    }
    //    StartCoroutine (ScoreUpdateFeedback ());
  }
  
  public void DisplayScore ()
  {
    //    Text text = menuGameOver.GetComponentInChildren <Text> ();
    //    text.text += "\n Score: " + StatsManager.inst.score.ToString ();
  }
  
  public void ShowOptions ()
  {
    StartCoroutine (FadeInOptionsCanvas ());
    StartCoroutine (FadeOutStartCanvas ());
    
    //    SetMenuActive (menuOptions, true);
    //    SetMenuActive (menuStart, false);
    //    //    SetMenuActive (menuGameOver, false);
    //    SetMenuActive (menuGame, false);
    
    #region Old Options Menu Code
    //    OnDifficultyChange ();
    //    OnSpeedChange ();
    #endregion
  }
  
  public void EndGame ()
  {
    StartCoroutine (FadeOutGameOverCanvas ());
    //    Camera.main.backgroundColor = Utils.Color255 (100, 122, 141, 5);
    StartCoroutine (FadeInStartCanvas ());
  }
  
  public void HideOptions ()
  {
    //    SetMenuActive (menuOptions, false);
    //    SetMenuActive (menuStart, true);
    
    StartCoroutine (FadeInStartCanvas ());
    StartCoroutine (FadeOutOptionsCanvas ());
  }
  
  public void ShowLeaderBoard ()
  {
    StatsManager.inst.ShowLeaderBoard ();
  }
  
  public void ShowAchievements ()
  {
    StatsManager.inst.ShowAchievements ();
  }
  
  #region Coroutines
  
  private IEnumerator HighScoreFeedback ()
  {
    float originalAlpha = textScore.color.a;
    
    while (textScore.color.a <= 1.0f)
    {
      Color color = textScore.color;
      color.a += Time.deltaTime * 2.0f;
      textScore.color = color;
      yield return null;
    }
    
    while (textScore.color.a >= originalAlpha)
    {
      Color color = textScore.color;
      color.a -= Time.deltaTime * 2.0f;
      textScore.color = color;
      yield return null;
    }
    
    textScore.text = ""+StatsManager.inst.score+"";
  }
  
  private IEnumerator FadeOutStartCanvas ()
  {
    CanvasGroup group = menuStart.GetComponent<CanvasGroup>();
    buttonStart.SetActive (false);
    
    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 0.0f;
    SetMenuActive (group.gameObject, false);
  }
  
  private IEnumerator FadeOutGameCanvas ()
  {
    CanvasGroup group = menuGame.GetComponent<CanvasGroup>();
    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 0.0f;
    SetMenuActive (group.gameObject, false);
  }
  
  private IEnumerator FadeOutGameOverCanvas ()
  {
    CanvasGroup group = menuGameOver.GetComponent<CanvasGroup>();
    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 0.0f;
    SetMenuActive (group.gameObject, false);
  }
  
  private IEnumerator FadeInOptionsCanvas ()
  {
    CanvasGroup group = menuOptions.GetComponent<CanvasGroup>();
    SetMenuActive (group.gameObject, true);
    
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 1.0f;
  }
  
  private IEnumerator FadeInGameOverCanvas ()
  {
    CanvasGroup group = menuGameOver.GetComponent<CanvasGroup>();
    SetMenuActive (group.gameObject, true);
    
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 1.0f;
  }
  
  private IEnumerator FadeOutOptionsCanvas ()
  {
    CanvasGroup group = menuOptions.GetComponent<CanvasGroup>();
    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 0.0f;
    SetMenuActive (group.gameObject, false);
  }
  
  private IEnumerator FadeInStartCanvas ()
  {
    CanvasGroup group = menuStart.GetComponent<CanvasGroup>();
    SetMenuActive (group.gameObject, true);
    
    //    textScore.text = "0";
    
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = BestScore ();
    textGameOverFeedback.GetComponent <Animator> ().enabled = false;
    
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 1.0f;
    buttonStart.SetActive (true);
  }
  
  private IEnumerator FadeInGameCanvas ()
  {
    CanvasGroup group = menuGame.GetComponent<CanvasGroup>();
    SetMenuActive (group.gameObject, true);
    
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 1.0f;
  }
  
  #endregion
  
  private string BestScore ()
  {
    return "BEST: " + ""+StatsManager.inst.highScore+"";
  }
  
  private string NewHighScore ()
  {
    return "NEW HIGH SCORE!";
  }
  
  private string ZeroScore ()
  {
    return "0";
  }
  
  #region implemented abstract members of Manager
  
  public override void OnGameReset (object sender, System.EventArgs args)
  {
    SetMenuActive (menuStart, true);
    SetMenuActive (menuGame, false);
    //    SetMenuActive (menuGameOver, false);
  }
  
  public override void OnGameStart (object sender, System.EventArgs args)
  {
    //SetMenuActive(menuStart, false);
    //SetMenuActive(menuGame, true);
    StartCoroutine(FadeOutStartCanvas());
    ////    Camera.main.backgroundColor = GameObject.FindObjectOfType <Background> ().drawable.color;
    StartCoroutine(FadeInGameCanvas());
    textScore.text = ZeroScore ();
    //    SetMenuActive (menuGameOver, false);
  }
  
  public override void OnGameRestart (object sender, System.EventArgs args)
  {
    //    textGameOverScore.text = null;
    //    Reset ();
  }
  
  public override void OnGameOver (object sender, System.EventArgs args)
  {
    //SetMenuActive(menuGame, false);
    //menuGame.GetComponent<CanvasGroup>().alpha = 0.0f;
    //SetMenuActive(menuStart, true);
    //menuStart.GetComponent<CanvasGroup>().alpha = 1.0f;
    
    //SetMenuActive (menuGameOver, true);
    
    StartCoroutine(FadeOutGameCanvas());
    ////    Camera.main.backgroundColor = Utils.Color255 (100, 122, 141, 5);
    ////    StartCoroutine (FadeInGameOverCanvas (gameOverCanvas));
    StartCoroutine(FadeInStartCanvas());
  }
  
  public override void OnHighScore (object sender, System.EventArgs args)
  {
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = NewHighScore ();
    textGameOverFeedback.GetComponent <Animator> ().enabled = true;
  }
  
  //  public override void OnDifficultyChange ()
  //  {
  //    GameObject go = GameObject.Find ("GroupDifficulty");
  //
  //    for (int i = 0; i < go.transform.childCount; ++i)
  //    {
  //      Image image = go.transform.GetChild (i).GetComponent <Image> ();
  //      if (i == (int) GameManager.inst.gameSettings.dificultyLevel)
  //      {
  //        image.color = Color.gray;
  //      }
  //      else
  //      {
  ////        image.color = new Color (45.0f / 255.0f, 45.0f / 255.0f, 45.0f / 255.0f, 1.0f);
  //        image.color = Color.white * 0.3f;
  //      }
  //    }
  //
  //    textGameOverScore.text = BestScore ();
  //    textGameOverFeedback.text = null;
  //  }
  
  //  public override void OnSpeedChange ()
  //  {
  //    GameObject go = GameObject.Find ("GroupSpeed");
  //    
  //    for (int i = 0; i < go.transform.childCount; ++i)
  //    {
  //      Image image = go.transform.GetChild (i).GetComponent <Image> ();
  //      if (i == (int) GameManager.inst.gameSettings.speedLevel)
  //      {
  //        image.color = Color.gray;
  //      }
  //      else
  //      {
  ////        image.color = new Color (45.0f / 255.0f, 45.0f / 255.0f, 45.0f / 255.0f, 1.0f);
  //        image.color = Color.white * 0.3f;
  //      }
  //    }
  //
  //    textGameOverScore.text = BestScore ();
  //    textGameOverFeedback.text = null;
  //  }
  
  #endregion
  
  private void SetMenuActive (GameObject menu, bool active)
  {
    menu.SetActive (active);
  }
  
  //  // Update is called once per frame
  //  void Update ()
  //  {
  //  }
  
}
