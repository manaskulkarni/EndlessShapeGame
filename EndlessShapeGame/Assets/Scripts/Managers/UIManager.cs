using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using BadassProjects.StateMachine;

public class UIManager : StateBehaviour
{
  public enum States
  {
    FadeInStart,
    FadeOutStart,
    FadeInRevive,
    FadeOutRevive,
    FadeInStore,
    FadeOutStore,
    None,
  }

  public enum StoreType
  {
    Diamonds,
    Potions,
  }

  public class InGameBuyButtonData
  {
    public InGameBuyButtonData (InGameBuyButton b, int c)
    {
      button = b;
      count = c;
    }
    public InGameBuyButton button;
    public int count;
  }
  
  
  // Public Members
  //  public GameObject menuGameOver
  //  {
  //    get;
  //    private set;
  //  }
  
  static public UIManager inst { get; private set; }
  
  // Private Members
  private GameObject menuStart { get; set; }
  private GameObject menuGame { get; set; }
  private GameObject menuOptions { get; set; }
  private GameObject menuGameOver { get; set; }
  private GameObject menuCoins { get; set; }
  private GameObject menuRevive { get; set; }
  private GameObject animRevive { get; set; }
  private GameObject menuStore { get; set; }
  private GameObject menuFacebookLeaderboard { get; set; }
  private GameObject menuDiamondStore { get; set; }
  private GameObject menuPotionStore { get; set; }

  private Text textScore { get; set; }
  private Text textPauseTimer { get; set; }
  public Text [] textCoins;
  private Text textGameOverScore { get; set; }
  private Text textGameOverFeedback { get; set; }
  private Text textConnectStatus { get; set; }
  private Image imageCircle { get; set; }
  private Color startImageCircleColor { get; set; }
  
  public ScrollSnapRect diamondStoreList;
  public ScrollSnapRect potionStoreList;

  public Button buttonStart;
  public Button buttonOptionsBack;
  public Button buttonStoreBack;
  public Button buttonFacebookBack;
  public Button buttonRevive;

  public Button buttonBuyDiamonds;
  public Button buttonBuyPotions;

  public MaskableGraphic [] allUI { get; set; }
  
  private GameManager.States previousState { get; set; }

  int counter = 1;
  
  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
      Initialize <States> ();
    }
    else
    {
      GameObject.Destroy (gameObject);
    }
  }
  
  // Use this for initialization
  void Start ()
  {
    allUI = GameObject.FindObjectsOfType <MaskableGraphic> ();

    Debug.Log ("LAST VMODE : " + StatsManager.inst.vMode);

    if (StatsManager.inst.vMode != 0)
    {
      GameManager.inst.BroadcastMessage ("SwitchMode", StatsManager.inst.vMode);
    }

    menuStart = GameObject.Find ("MenuStart");
    menuRevive = GameObject.Find ("MenuRevive");
    menuRevive.GetComponent <CanvasGroup> ().alpha = 0.0f;
    menuStore = GameObject.Find ("MenuStore");
    menuStore.GetComponent <CanvasGroup> ().alpha = 0.0f;
    menuFacebookLeaderboard = GameObject.Find ("MenuFacebookLeaderboard");
    menuFacebookLeaderboard.GetComponent <CanvasGroup> ().alpha = 0.0f;
    textGameOverScore = GameObject.Find ("TextGameOverScore").GetComponent <Text> ();
    textGameOverFeedback = GameObject.Find ("TextGameOverFeedback").GetComponent <Text> ();
    textGameOverFeedback.GetComponent <Animator> ().Stop ();
    textConnectStatus = GameObject.Find ("TextConnectStatus").GetComponent <Text> ();
    animRevive = GameObject.Find ("ImageFill");
    imageCircle = GameObject.Find ("ImageCircle").GetComponent <Image> ();
    startImageCircleColor = imageCircle.color;
    imageCircle.gameObject.SetActive (false);

    menuDiamondStore = GameObject.Find ("MenuDiamondStore");
    menuPotionStore = GameObject.Find ("MenuPotionStore");
    ShowDiamondStore ();
    
    textGameOverScore.text = BestScore ();
    textGameOverFeedback.text = null;
    
    SetMenuActive (menuStart, true);
    SetMenuActive (menuRevive, false);
    SetMenuActive (menuStore, false);
//    buttonFacebookBack.interactable = false;
//    buttonStoreBack.interactable = false;

    menuOptions = GameObject.Find ("MenuOptions");
//    buttonOptionsBack.interactable = false;
    SetMenuActive (menuOptions, false);
    
    menuGameOver = GameObject.Find ("MenuGameOver");
    SetMenuActive (menuGameOver, false);
    
    menuCoins = GameObject.Find ("MenuCoins");
    SetMenuActive (menuCoins, false);
//    SetMenuActive (menuFacebookLeaderboard, false);
    
    menuGame = GameObject.Find ("MenuGame");
    textScore = GameObject.Find ("TextScore").GetComponent <Text> ();
    textPauseTimer = GameObject.Find ("TextPauseTimer").GetComponent <Text> ();
    textPauseTimer.enabled = false;
    textScore.text = ZeroScore ();
    
    UpdateCoinsText ();
    
    SetMenuActive (menuGame, false);
    
    //    menuGameOver = GameObject.Find ("MenuGameOver");
    //    SetMenuActive (menuGameOver, false);
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
    GameManager.inst.ChangeState (GameManager.States.ShowOptions); 
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
    GameManager.inst.ChangeState (GameManager.States.HideOptions);
  }
  
  public void ShowLeaderBoard ()
  {
    StatsManager.inst.ShowLeaderBoard ();
  }
  
  public void ShowAchievements ()
  {
    StatsManager.inst.ShowAchievements ();
  }
  
  public void ShowStore ()
  {
    GameManager.inst.ChangeState (GameManager.States.ShowStore);
  }
  
  public void HideStore ()
  {
    GameManager.inst.ChangeState (GameManager.States.HideStore);
  }

  public void UseRevive ()
  {
    Debug.Log ("Using Revive");
    Debug.Log (StatsManager.inst.canUseRevive);
    if (StatsManager.inst.canUseRevive)
    {
      GameManager.inst.ChangeState (GameManager.States.AcceptRevive);
    }
    else
    {
      previousState = (GameManager.States)GameManager.inst.GetState ();
//      Debug.Log ("PREVIOUS STATE : " + previousState);
      animRevive.SetActive (false);
      StopAllCoroutines ();
      StartCoroutine (FadeOutReviveCanvas ());
      GameManager.inst.ChangeState (GameManager.States.ShowStore);
    }
  }
  
  public void ReviveDeclined ()
  {
    GameManager.inst.ChangeState (GameManager.States.DeclineRevive);
  }
  
  public void PurchaseItem (StoreButton button)
  {
    GameManager.inst.SendMessage ("PurchaseItem", button);
  }

  public void PurchaseInGameItem (InGameBuyButton button)
  {
    GameManager.inst.SendMessage ("PurchaseInGameItem", new InGameBuyButtonData (button, counter));
  }

  public void AddInGameItem (InGameBuyButton button)
  {
    GameManager.inst.SendMessage ("AddInGameItem", button);
  }

  public void SubtractInGameItem (InGameBuyButton button)
  {
    GameManager.inst.SendMessage ("SubtractInGameItem", button);
  }

  public void FacebookConnect ()
  {
    GameManager.inst.ChangeState (GameManager.States.FacebookConnect);
  }

  public void ShowFacebookLeaderboard ()
  {
    GameManager.inst.ChangeState (GameManager.States.TryShowFacebookLeaderboard);
  }

  public void HideFacebookLeaderboard ()
  {
    GameManager.inst.ChangeState (GameManager.States.HideFacebookLeaderboard);
  }

  public void RestorePurchase ()
  {
    GameManager.inst.ChangeState (GameManager.States.TryRestorePurchase);
  }

  public void RemoveAds ()
  {
    GameManager.inst.ChangeState (GameManager.States.RemoveAds);
  }

  public void InvertColor ()
  {
    if (StatsManager.inst.vMode == 0)
    {
      GameManager.inst.SendMessage ("SwitchMode", 1, SendMessageOptions.DontRequireReceiver);
    }
    else
    {
      GameManager.inst.SendMessage ("SwitchMode", 0, SendMessageOptions.DontRequireReceiver);
    }
  }

  public void SwitchStore (int store)
  {
    var type = (StoreType) store;
    switch (type)
    {
    case StoreType.Diamonds:
      ShowDiamondStore ();
      break;
    case StoreType.Potions:
      ShowPotionStore ();
      break;
    }
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
    buttonStart.interactable = false;
    
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
    buttonOptionsBack.interactable = true;
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
    buttonOptionsBack.interactable = false;

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
//    textGameOverFeedback.GetComponent <Animator> ().enabled = false;
    
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }
    
    group.alpha = 1.0f;
    buttonStart.interactable = (true);
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
  
  private IEnumerator StartPauseTimer ()
  {
    int i = 3;

    imageCircle.gameObject.SetActive (true);
    imageCircle.color = startImageCircleColor;

    textPauseTimer.enabled = true;
    textPauseTimer.text = ""+i+"";
    textScore.enabled = false;
    textPauseTimer.color = new Color (0.0f, 0.0f, 0.0f, textScore.color.a);
    
    while (i > 0)
    {
      --i;
      var cor = StartCoroutine (StartPopFeedback(textPauseTimer));
      yield return new WaitForSeconds (0.5f);
      textPauseTimer.text = ""+i+"";
      StopCoroutine (cor);
    }
    
    textScore.enabled = true;
    textPauseTimer.enabled = false;
    GameManager.inst.ChangeState (GameManager.States.UnPause);
    StartCoroutine (FadeOut (imageCircle, 5.0f));
  }

  private IEnumerator FadeOut (Image image, float speed = 1.0f)
  {
    Color c = image.color;

    while (c.a > 0.0f)
    {
      c.a -= Time.deltaTime * speed;
      image.color = c;
      yield return null;
    }

    image.gameObject.SetActive (false);
  }

  private IEnumerator FadeIn (Image image, float speed = 1.0f)
  {
    Color c = image.color;
    image.gameObject.SetActive (true);
    
    while (c.a < 1.0f)
    {
      c.a += Time.deltaTime * speed;
      image.color = c;
      yield return null;
    }
  }
  
  private IEnumerator StartPopFeedback (Text text)
  {
    float scale = text.transform.localScale.x;
    while (scale < 2.0f)
    {
      scale += Time.deltaTime * 5.0f;
      text.transform.localScale = Vector2.one * scale;
      yield return null;
    }
    while (scale > 1.0f)
    {
      scale -= Time.deltaTime * 5.0f;
      text.transform.localScale = Vector2.one * scale;
      yield return null;
    }
  }

  private IEnumerator StartColorFeedback (Text text)
  {
    float c = text.color.r;
    while (c > 0.0f)
    {
      c -= Time.deltaTime * 5.0f;
      text.color = new Color (c, c, c, text.color.a);
      yield return null;
    }
    
    while (c < 1.0f)
    {
      c += Time.deltaTime * 5.0f;
      text.color = new Color (c, c, c, text.color.a);
      yield return null;
    }
  }
  
  private IEnumerator FadeInReviveCanvas ()
  {
    CanvasGroup revive = menuRevive.GetComponent <CanvasGroup> ();
    SetMenuActive (menuRevive, true);
    animRevive.SetActive (true);
    
    while (revive.alpha < 1.0f)
    {
      float alpha = revive.alpha;
      alpha += Time.deltaTime * 5.0f;
      revive.alpha = alpha;
      yield return null;
    }

    buttonRevive.interactable = true;
  } 
  
  private IEnumerator FadeOutReviveCanvas ()
  {
    CanvasGroup revive = menuRevive.GetComponent <CanvasGroup> ();
    buttonRevive.interactable = false;
    
    while (revive.alpha > 0.0f)
    {
      float alpha = revive.alpha;
      alpha -= Time.deltaTime * 5.0f;
      revive.alpha = alpha;
      yield return null;
    }
    
    revive.alpha = 0.0f;
    SetMenuActive (menuRevive, false);
  }
  
  private IEnumerator FadeOutReviveCanvasSpecial ()
  {
    CanvasGroup revive = menuRevive.GetComponent <CanvasGroup> ();
    buttonRevive.interactable = false;
    
    while (revive.alpha > 0.0f)
    {
      float alpha = revive.alpha;
      alpha -= Time.deltaTime * 5.0f;
      revive.alpha = alpha;
      yield return null;
    }
    
    revive.alpha = 0.0f;
    SetMenuActive (menuRevive, false);
    
    if (GameManager.inst.GetState ().Equals (GameManager.States.AcceptRevive))
    {
      GameManager.inst.ChangeState (GameManager.States.ReviveComplete);
    }
  }
  
  private IEnumerator FadeInStoreCanvas ()
  {
    CanvasGroup store = menuStore.GetComponent <CanvasGroup> ();
    SetMenuActive (menuStore, true);
    
    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }

    buttonStoreBack.interactable = true;
  }
  
  private IEnumerator FadeOutStoreCanvas ()
  {
    CanvasGroup store = menuStore.GetComponent <CanvasGroup> ();
    buttonStoreBack.interactable = false;
    
    while (store.alpha > 0.0f)
    {
      float alpha = store.alpha;
      alpha -= Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
    
    store.alpha = 0.0f;
    SetMenuActive (menuStore, false);
  }

  private IEnumerator FadeInFacebookLeaderboardCanvas ()
  {
    CanvasGroup store = menuFacebookLeaderboard.GetComponent <CanvasGroup> ();
    SetMenuActive (menuFacebookLeaderboard, true);
    
    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }

    buttonStoreBack.interactable = true;
  }
  
  private IEnumerator FadeOutFacebookLeaderboardCanvas ()
  {
    CanvasGroup store = menuFacebookLeaderboard.GetComponent <CanvasGroup> ();
    buttonStoreBack.interactable = false;
    
    while (store.alpha > 0.0f)
    {
      float alpha = store.alpha;
      alpha -= Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
    
    store.alpha = 0.0f;
    SetMenuActive (menuFacebookLeaderboard, false);
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
  
  private string Coins ()
  {
    Debug.Log ("RETURN " + StatsManager.inst.coins);
    return ""+StatsManager.inst.coins+"";
  }
  
  #region implemented abstract members of Manager
  
  void OnGameReset ()
  {
    SetMenuActive (menuStart, true);
    SetMenuActive (menuGame, false);
    //    SetMenuActive (menuGameOver, false);
  }
  
  void OnGameStart ()
  {
    //SetMenuActive(menuStart, false);
    //SetMenuActive(menuGame, true);
    StartCoroutine(FadeOutStartCanvas());
    ////    Camera.main.backgroundColor = GameObject.FindObjectOfType <Background> ().drawable.color;
    StartCoroutine(FadeInGameCanvas());
    textScore.text = ZeroScore ();
    //    SetMenuActive (menuGameOver, false);
  }
  
  void OnGameRestart ()
  {
    //    textGameOverScore.text = null;
    //    Reset ();
  }
  
  void OnShowRevive ()
  {
    StartCoroutine (FadeOutGameCanvas ());
    StartCoroutine (FadeInReviveCanvas ());
  }
  
  void OnDeclineRevive ()
  {
    previousState = GameManager.States.None;
    animRevive.SetActive (false);
    StartCoroutine (FadeOutReviveCanvas ());
    StartCoroutine (FadeOutGameCanvas ());
  }
  
  void OnAcceptRevive ()
  {
    StartCoroutine (FadeOutReviveCanvasSpecial ());
    animRevive.SetActive (false);
    StartCoroutine (FadeInGameCanvas ());
  }
  
  void OnCompleteRevive ()
  {
    ChangeState (States.None);
  }

  void OnBoughtRevive ()
  {
    if (previousState == GameManager.States.ShowRevive)
    {
      previousState = GameManager.States.None;
      StartCoroutine (FadeOutStoreCanvas ());
      StartCoroutine (FadeInGameCanvas ());
      GameManager.inst.ChangeState (GameManager.States.ReviveComplete);
    }

    UpdateCoinsText ();
  }
  
  void OnShowOptions ()
  {
    StartCoroutine (FadeInOptionsCanvas ());
    StartCoroutine (FadeOutStartCanvas ());
  }
  
  void OnHideOptions ()
  {
    StartCoroutine (FadeOutOptionsCanvas ());
    StartCoroutine (FadeInStartCanvas ());
  }
  
  void OnShowStore ()
  {
    StartCoroutine (FadeInStoreCanvas ());
    StartCoroutine (FadeOutStartCanvas ());
    
    Debug.Log (previousState);
    if (previousState == GameManager.States.ShowRevive)
    {
      if (!potionStoreList.initialized)
      {
        potionStoreList.gameObject.SetActive (true);
        potionStoreList.Start ();
      }
      
      ShowPotionStore ();
      potionStoreList.SetPage (0);
    }
  }
  
  void OnHideStore ()
  {
    StartCoroutine (FadeOutStoreCanvas ());
    StartCoroutine (FadeInStartCanvas ());

    Debug.Log ("STATE " + previousState);
    if (previousState == GameManager.States.ShowRevive)
    {
      GameManager.inst.ChangeState (GameManager.States.DeclineRevive);
    }
  }
  
  void OnGameOver ()
  {
    //SetMenuActive(menuGame, false);
    //menuGame.GetComponent<CanvasGroup>().alpha = 0.0f;
    //SetMenuActive(menuStart, true);
    //menuStart.GetComponent<CanvasGroup>().alpha = 1.0f;
    
    //SetMenuActive (menuGameOver, true);
    
//    StartCoroutine(FadeOutGameCanvas());
    StartCoroutine(FadeInStartCanvas());
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = BestScore ();
  }
  
  void OnHighScore ()
  {
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = NewHighScore ();
    textGameOverFeedback.GetComponent <Animator> ().enabled = true;
    textGameOverFeedback.GetComponent <Animator> ().Play ("HighScoreFeedback", 0);
  }

  void OnNoHighScore ()
  {
    textGameOverFeedback.GetComponent <Animator> ().enabled = false;
  }
  
  void OnHighScoreCross ()
  {
    Debug.Log ("High Score Crossed");
  }
  
  void OnPause ()
  {
  }
  
  void OnResume ()
  {
    if (GameManager.inst.playing)
    {
      Debug.Log ("PAUSED");
      StartCoroutine (StartPauseTimer ());
    }
  }

  void OnFacebookConnected (bool connected)
  {
    textConnectStatus.text = connected ? "Logout" : "Connect";
  }

  void OnShowFacebookLeaderboard ()
  {
    StartCoroutine (FadeInFacebookLeaderboardCanvas ());
    StartCoroutine (FadeOutOptionsCanvas ());
  }

  void OnHideFacebookLeaderboard ()
  {
    StartCoroutine (FadeOutFacebookLeaderboardCanvas ());
    StartCoroutine (FadeInOptionsCanvas ());
  }

  void OnAddInGameItem (InGameBuyButton button)
  {
    counter++;
    buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+button.price * counter+"";
  }

  void OnSubtractInGameItem (InGameBuyButton button)
  {
    if (counter - 1 > 0)
    {
      --counter;
      buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+button.price * counter+"";
    }
  }

  void OnStoreButtonSwipe (int index)
  {
    if (menuDiamondStore != null && menuPotionStore != null)
    {
      if (menuDiamondStore.activeSelf)
      {
        Transform container = diamondStoreList.container;
        StoreButton b = container.GetChild (index).GetComponent <StoreButton> ();
        buttonBuyDiamonds.GetComponentInChildren <Text> ().text = b.priceText.text;
        buttonBuyDiamonds.onClick.RemoveAllListeners ();
        buttonBuyDiamonds.onClick.AddListener (() => {PurchaseItem (b);});
      }
      else if (menuPotionStore.activeSelf)
      {
        Transform container = potionStoreList.container;
        InGameBuyButton b = container.GetChild (index).GetComponent <InGameBuyButton> ();
        buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+b.price+"";
        buttonBuyPotions.onClick.RemoveAllListeners ();
        buttonBuyPotions.onClick.AddListener (() => {PurchaseInGameItem (b);});
      }
    }
  }

  void OnSwitchMode (int mode)
  {
    var ui = UIManager.inst.allUI;
    foreach (var v in ui)
    {
      if (!v.gameObject.CompareTag ("noinvert"))
      {
        v.color = new Color (1.0f - v.color.r, 1.0f - v.color.g, 1.0f - v.color.b, v.color.a);
      }
    }

    switch (mode)
    {
    case 0:
      Camera.main.GetComponent <UnityStandardAssets.ImageEffects.InvertColor> ().enabled = false;
      break;
    case 1:
      Camera.main.GetComponent <UnityStandardAssets.ImageEffects.InvertColor> ().enabled = true;
      break;
    }
  }

  void OnBoughtCoins ()
  {
    UpdateCoinsText ();
  }

  void ShowDiamondStore ()
  {
    Image diamond = GameObject.Find ("ButtonDiamondType").GetComponent <Image> ();
    Color c = diamond.color;
    c.a = 100.0f / 255.0f;
    diamond.color = c;

    Image potion = GameObject.Find ("ButtonPotionType").GetComponent <Image> ();
    c = potion.color;
    c.a = 30.0f / 255.0f;
    potion.color = c;

    menuDiamondStore.SetActive (true);
    menuPotionStore.SetActive (false);
    OnStoreButtonSwipe (diamondStoreList.currentPage);
  }

  void ShowPotionStore ()
  {
    Image diamond = GameObject.Find ("ButtonDiamondType").GetComponent <Image> ();
    Color c = diamond.color;
    c.a = 30.0f / 255.0f;
    diamond.color = c;
    
    Image potion = GameObject.Find ("ButtonPotionType").GetComponent <Image> ();
    c = potion.color;
    c.a = 100.0f / 255.0f;
    potion.color = c;

    menuDiamondStore.SetActive (false);
    menuPotionStore.SetActive (true);

    OnStoreButtonSwipe (potionStoreList.currentPage);
  }

  void UpdateCoinsText ()
  {
    foreach (var v in textCoins)
    {
      v.text = Coins ();
    }
  }
  
  //  void OnDifficultyChange ()
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
  
  //  void OnSpeedChange ()
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
