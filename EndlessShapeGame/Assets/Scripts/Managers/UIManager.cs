using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using BadassProjects.StateMachine;

public class UIManager : MonoBehaviour
{
//  public enum States
//  {
//    FadeInStart,
//    FadeOutStart,
//    FadeInRevive,
//    FadeOutRevive,
//    FadeInStore,
//    FadeOutStore,
//    None,
//  }

  // TODO
//  public enum StoreType
//  {
//    Diamonds,
//    Potions,
//  }

  // TODO
//  public class InGameBuyButtonData
//  {
//    public InGameBuyButtonData (InGameBuyButton b, int c)
//    {
//      button = b;
//      count = c;
//    }
//    public InGameBuyButton button;
//    public int count;
//  }
  
  
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
//  private GameObject menuCoins { get; set; }
  private GameObject menuRevive { get; set; }
  private GameObject menuStore { get; set; }
  private GameObject menuColor { get; set; }
  private GameObject menuMusic { get; set; }

  /// <summary>
  /// Safety check if revive at last minute and ReviveDeclined called at same time
  /// </summary>
  /// <value><c>true</c> if using revive; otherwise, <c>false</c>.</value>
//  private bool usingRevive { get; set; }
  // TODO
//  private GameObject menuFacebookLeaderboard { get; set; }
  // TODO
//  private GameObject menuDiamondStore { get; set; }
  // TODO
//  private GameObject menuPotionStore { get; set; }
  private GameObject menuTutorialStart { get; set; }
  private GameObject menuTutorialRevive { get; set; }
  private GameObject menuReady { get; set; }

  private GameObject imageReviveButtonSeparator;

  private Text textScore { get; set; }
  private Text textPauseTimer { get; set; }
  public Text [] textCoins;
  private Text textGameOverScore { get; set; }
  private Text textGameOverFeedback { get; set; }
  private Text textConnectStatus { get; set; }
  private Image imageCircle { get; set; }
  private Color startImageCircleColor { get; set; }
  
  public ScrollSnapRect diamondStoreList;
//  public ScrollSnapRect potionStoreList;

  public Button buttonStart;
  public Button buttonOptionsBack;
  public Button buttonStoreBack;
  // TODO
//  public Button buttonFacebookBack;
  public Button buttonRevive;
  public Button buttonTutorialReviveDone;
  public ParticleSystem coinBoughtEffect;


  // TODO
//  public Button buttonSwitchToDiamond;
//  public Button buttonSwitchToPotion;

  public Button buttonBuyDiamonds;
//  public Button buttonBuyPotions;

  public Text textTutorial;
  public Text textReady;

  public GameObject animRevive;
  public Text textRevivePrice;

  public GameObject menuReviveWatchVideo;
  public GameObject menuReviveUseCoins;

  // TODO
//  public GameObject menuSwitchDiamondStorePrompt;
//  public GameObject menuSwitchPotionStorePrompt;
//  public GameObject menuBuyDiamondMessage;
//  public GameObject menuBuyPotionMessage;

  public MaskableGraphic [] allUI { get; set; }
  
  private GameManager.States previousState { get; set; }

  private Vector2 originalReviveButtonPosition;
  
  void Awake ()
  {
    if (inst == null)
    {
      inst = this;
//      Initialize <States> ();
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

    menuStart = GameObject.Find ("MenuStart");
    menuRevive = GameObject.Find ("MenuRevive");
    menuRevive.GetComponent <CanvasGroup> ().alpha = 0.0f;
    menuStore = GameObject.Find ("MenuStore");
    menuStore.GetComponent <CanvasGroup> ().alpha = 0.0f;

    menuColor = GameObject.Find("MenuColorWheel");
    menuMusic = GameObject.Find("MenuMusic");
    menuMusic.gameObject.GetComponent<CanvasGroup>().alpha = 0.0f;

    imageReviveButtonSeparator = GameObject.Find ("ReviveSeparator");

//    menuFacebookLeaderboard = GameObject.Find ("MenuFacebookLeaderboard");
//    menuFacebookLeaderboard.GetComponent <CanvasGroup> ().alpha = 0.0f;
    textGameOverScore = GameObject.Find ("TextGameOverScore").GetComponent <Text> ();
    textGameOverFeedback = GameObject.Find ("TextGameOverFeedback").GetComponent <Text> ();
//    textGameOverFeedback.GetComponent <Animator> ().Stop ();
    var textConnectStatusGo = GameObject.Find ("TextConnectStatus");
    if (textConnectStatusGo)
    {
      textConnectStatus = textConnectStatusGo.GetComponent <Text> ();
    }
    imageCircle = GameObject.Find ("ImageCircle").GetComponent <Image> ();
    startImageCircleColor = imageCircle.color;
    imageCircle.gameObject.SetActive (false);

    menuTutorialStart = GameObject.Find ("MenuTutorialStart");
    menuTutorialRevive = GameObject.Find ("MenuTutorialRevive");
    menuReady = GameObject.Find ("MenuReady");
    // TODO
//    menuDiamondStore = GameObject.Find ("MenuDiamondStore");
//    menuPotionStore = GameObject.Find ("MenuPotionStore");
//    ShowDiamondStore ();
    
    textGameOverScore.text = BestScore ();
    textGameOverFeedback.text = "";

    SetMenuActive (menuTutorialStart, false);
    SetMenuActive (menuTutorialRevive, false);
    SetMenuActive (menuReady, false);
    SetMenuActive (menuStart, true);
    SetMenuActive (menuRevive, false);
    SetMenuActive (menuStore, false);
    SetMenuActive (menuMusic, false);
//    buttonFacebookBack.interactable = false;
//    buttonStoreBack.interactable = false;

    menuOptions = GameObject.Find ("MenuOptions");
//    buttonOptionsBack.interactable = false;
    SetMenuActive (menuOptions, false);
    
    menuGameOver = GameObject.Find ("MenuGameOver");
    SetMenuActive (menuGameOver, false);
    
//    menuCoins = GameObject.Find ("MenuCoins");
//    SetMenuActive (menuCoins, false);
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

    originalReviveButtonPosition = menuReviveUseCoins.GetComponent <RectTransform> ().anchoredPosition;
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
  public void ShowMusicMenu()
  {
    StartCoroutine(FadeOutColorCanvas());

    StartCoroutine(FadeInMusicCanvas());

    GameObject.Find ("ButtonColorOption").GetComponent <Image> ().color = Color.clear;
    GameObject.Find ("ButtonMusicOption").GetComponent <Image> ().color = new Color (1.0f, 1.0f, 1.0f, 50.0f / 255.0f);
  }

  public void ShowColorMenu()
  {
    StartCoroutine(FadeOutMusicCanvas());
    StartCoroutine(FadeInColorCanvas());

    GameObject.Find ("ButtonMusicOption").GetComponent <Image> ().color = Color.clear;
    GameObject.Find ("ButtonColorOption").GetComponent <Image> ().color = new Color (1.0f, 1.0f, 1.0f, 50.0f / 255.0f);
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
    Debug.Log ("Enough Coins : " + StatsManager.inst.canUseRevive);
    if (StatsManager.inst.canUseRevive)
    {
      GameManager.inst.ChangeState (GameManager.States.AcceptRevive);
    }
    else
    {
      previousState = GameManager.States.ShowRevive;
//      Debug.Log ("PREVIOUS STATE : " + previousState);
      animRevive.SetActive (false);
      StopAllCoroutines ();
      StartCoroutine (FadeOutReviveCanvas ());
      GameManager.inst.ChangeState (GameManager.States.ShowStore);
    }
  }

  public void ShowRewardVideo ()
  {
    previousState = GameManager.States.ShowRevive;
    //      Debug.Log ("PREVIOUS STATE : " + previousState);
//    animRevive.SetActive (false);
    GameManager.inst.BroadcastMessage ("OnShowVideo");
  }
  
  public void ReviveDeclined ()
  {
//    if (!usingRevive)
    {
      GameManager.inst.ChangeState (GameManager.States.DeclineRevive);
    }
  }
  
  public void PurchaseItem (StoreButton button)
  {
    GameManager.inst.SendMessage ("PurchaseItem", button);
  }

  // TODO
  public void PurchaseInGameItem (InGameBuyButton button)
  {
//    Debug.Log ("PURCHASE IN GAME ITEM");
//    GameManager.inst.SendMessage ("PurchaseInGameItem", new InGameBuyButtonData (button, counter));
    throw new System.NotImplementedException ();
  }

  // TODO
  public void AddInGameItem (InGameBuyButton button)
  {
//    GameManager.inst.SendMessage ("AddInGameItem", button);
    throw new System.NotImplementedException ();
  }

  // TODO
  public void SubtractInGameItem (InGameBuyButton button)
  {
//    GameManager.inst.SendMessage ("SubtractInGameItem", button);
    throw new System.NotImplementedException ();
  }

  // TODO
  public void FacebookConnect ()
  {
//    GameManager.inst.ChangeState (GameManager.States.FacebookConnect);
    throw new System.NotImplementedException ();
  }

  // TODO
  public void ShowFacebookLeaderboard ()
  {
//    GameManager.inst.ChangeState (GameManager.States.TryShowFacebookLeaderboard);
    throw new System.NotImplementedException ();
  }

  // TODO
  public void HideFacebookLeaderboard ()
  {
//    GameManager.inst.ChangeState (GameManager.States.HideFacebookLeaderboard);
    throw new System.NotImplementedException ();
  }

  public void RestorePurchase ()
  {
    GameManager.inst.ChangeState (GameManager.States.TryRestorePurchase);
  }

  public void RemoveAds ()
  {
    GameManager.inst.ChangeState (GameManager.States.RemoveAds);
  }

  private bool switchingMode = false;

  public void InvertColor ()
  {
    if (!switchingMode)
    {
      switchingMode = true;

      if (StatsManager.inst.vMode == 0)
      {
        GameManager.inst.SendMessage ("SwitchMode", 1, SendMessageOptions.DontRequireReceiver);
      }
      else
      {
        GameManager.inst.SendMessage ("SwitchMode", 0, SendMessageOptions.DontRequireReceiver);
      }
    }
  }

  // TODO
  public void SwitchStore (int store)
  {
//    var type = (StoreType) store;
//    if (menuDiamondStore.activeSelf && type == StoreType.Diamonds ||
//      menuPotionStore.activeSelf && type == StoreType.Potions)
//    {
//      return;
//    }
//
//    switch (type)
//    {
//    case StoreType.Diamonds:
//      ShowDiamondStore ();
//      break;
//    case StoreType.Potions:
//      ShowPotionStore ();
//      break;
//    }
//
//    GameManager.inst.SendMessage ("OnSwitchStore", store);
    throw new System.NotImplementedException ();
  }
    
  public void TutorialReviveDone ()
  {
    GameManager.inst.SendMessage ("TutorialReviveDone");
  }

  public void StartSwitchMode (ScrollSnapRect scroll)
  {
    int mode = scroll.currentPage;
    if (scroll.container.GetChild (mode).CompareTag ("song"))
    {
      if (StatsManager.inst.vMode != mode)
      {
        Debug.Log ("Swtcdfsdjkfl" + mode);
        GameManager.inst.BroadcastMessage ("OnSwitchMode", mode);
      }
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

  private IEnumerator FadeOutColorCanvas()
  {
    CanvasGroup group = menuColor.GetComponent<CanvasGroup>();

    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }

    group.alpha = 0.0f;
    SetMenuActive(group.gameObject, false);
  }

  private IEnumerator FadeInColorCanvas()
  {
    CanvasGroup group = menuColor.GetComponent<CanvasGroup>();
    SetMenuActive(group.gameObject, true);

    while(group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 2.0f;
      group.alpha += alpha;
      yield return null;
    }
    group.alpha = 1.0f;
  }

  private IEnumerator FadeOutMusicCanvas()
  {
    CanvasGroup group = menuMusic.GetComponent<CanvasGroup>();

    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }

    group.alpha = 0.0f;
    SetMenuActive(group.gameObject, false);
  }

  private IEnumerator FadeInMusicCanvas()
  {
    CanvasGroup group = menuMusic.GetComponent<CanvasGroup>();
    SetMenuActive(group.gameObject, true);

    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 2.0f;
      group.alpha += alpha;
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
    SetMenuActive(group.gameObject, false);
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
    yield return new WaitForSeconds (2.0f);
    int i = 3;

    imageCircle.gameObject.SetActive (true);
    imageCircle.color = startImageCircleColor;

    textPauseTimer.enabled = true;
    textPauseTimer.text = ""+i+"";
    textScore.enabled = false;
//    textPauseTimer.color = new Color (0.0f, 0.0f, 0.0f, textScore.color.a);
    
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

  private IEnumerator StartReviveTimer ()
  {
    //    yield return new WaitForSeconds (2.0f);
    int i = 3;

    imageCircle.gameObject.SetActive (true);
    imageCircle.color = startImageCircleColor;

    textPauseTimer.enabled = true;
    textPauseTimer.text = ""+i+"";
    textScore.enabled = false;
//    textPauseTimer.color = new Color (0.0f, 0.0f, 0.0f, textScore.color.a);

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
    GameManager.inst.ChangeState (GameManager.States.ReviveCompleteEnd);
    StartCoroutine (FadeOut (imageCircle, 5.0f));
  }

  private IEnumerator StartPopFeedback (Text text)
  {
    text.transform.localScale = Vector3.one;
    float scale = text.transform.localScale.x;
    while (scale < 1.5f)
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
  
  private IEnumerator FadeInReviveCanvas (bool animate = true)
  {
    CanvasGroup revive = menuRevive.GetComponent <CanvasGroup> ();

    SetMenuActive (menuRevive, true);
    animRevive.SetActive (animate);

    
    while (revive.alpha < 1.0f)
    {
      float alpha = revive.alpha;
      alpha += Time.deltaTime * 5.0f;
      revive.alpha = alpha;
      yield return null;
    }

    buttonRevive.interactable = true;
    menuReviveUseCoins.GetComponentInChildren <Button> ().interactable = true;
    menuReviveWatchVideo.GetComponentInChildren <Button> ().interactable = true;
  }

  private IEnumerator FadeOutReviveCanvas ()
  {
    CanvasGroup revive = menuRevive.GetComponent <CanvasGroup> ();
    buttonRevive.interactable = false;
    menuReviveUseCoins.GetComponentInChildren <Button> ().interactable = false;
    menuReviveWatchVideo.GetComponentInChildren <Button> ().interactable = false;
    
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
    menuReviveUseCoins.GetComponentInChildren <Button> ().interactable = false;
    menuReviveWatchVideo.GetComponentInChildren <Button> ().interactable = false;
    
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
      GameManager.inst.ChangeState (GameManager.States.ReviveCompleteStart);
    }
  }
  
  private IEnumerator FadeInStoreCanvas ()
  {
    CanvasGroup store = menuStore.GetComponent <CanvasGroup> ();
    SetMenuActive (menuStore, true);

    // TODO
//    if (menuDiamondStore.activeSelf)
//    {
//      ShowDiamondStore ();
//    }
//    else
//    {
//      ShowPotionStore ();
//    }
    
    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }

    buttonStoreBack.interactable = true;
    GameManager.inst.SendMessage ("OnStoreFadeIn");
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

//  private IEnumerator FadeInFacebookLeaderboardCanvas ()
//  {
//    CanvasGroup store = menuFacebookLeaderboard.GetComponent <CanvasGroup> ();
//    SetMenuActive (menuFacebookLeaderboard, true);
//    
//    while (store.alpha < 1.0f)
//    {
//      float alpha = store.alpha;
//      alpha += Time.deltaTime * 5.0f;
//      store.alpha = alpha;
//      yield return null;
//    }
//
//    buttonStoreBack.interactable = true;
//  }
//  
//  private IEnumerator FadeOutFacebookLeaderboardCanvas ()
//  {
//    CanvasGroup store = menuFacebookLeaderboard.GetComponent <CanvasGroup> ();
//    buttonStoreBack.interactable = false;
//    
//    while (store.alpha > 0.0f)
//    {
//      float alpha = store.alpha;
//      alpha -= Time.deltaTime * 5.0f;
//      store.alpha = alpha;
//      yield return null;
//    }
//    
//    store.alpha = 0.0f;
//    SetMenuActive (menuFacebookLeaderboard, false);
//  }

  private IEnumerator FadeInTutorialCanvas ()
  {
    CanvasGroup store = menuTutorialStart.GetComponent <CanvasGroup> ();
    SetMenuActive (menuTutorialStart, true);
    
    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
  }
  
  private IEnumerator FadeOutTutorialCanvas ()
  {
    CanvasGroup store = menuTutorialStart.GetComponent <CanvasGroup> ();
    
    while (store.alpha > 0.0f)
    {
      float alpha = store.alpha;
      alpha -= Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
    
    store.alpha = 0.0f;
    SetMenuActive (menuTutorialStart, false);
  }

  private IEnumerator FadeInTutorialReviveCanvas ()
  {
    CanvasGroup store = menuTutorialRevive.GetComponent <CanvasGroup> ();
    SetMenuActive (menuTutorialRevive, true);

    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }

    buttonTutorialReviveDone.interactable = true;
  }
  
  private IEnumerator FadeOutTutorialReviveCanvas ()
  {
    CanvasGroup store = menuTutorialRevive.GetComponent <CanvasGroup> ();
    buttonTutorialReviveDone.interactable = false;

    while (store.alpha > 0.0f)
    {
      float alpha = store.alpha;
      alpha -= Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
    
    store.alpha = 0.0f;
    SetMenuActive (menuTutorialRevive, false);
  }

  private IEnumerator FadeInReadyCanvas ()
  {
    CanvasGroup store = menuReady.GetComponent <CanvasGroup> ();
    SetMenuActive (menuReady, true);
    
    while (store.alpha < 1.0f)
    {
      float alpha = store.alpha;
      alpha += Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
  }
  
  private IEnumerator FadeOutReadyCanvas ()
  {
    CanvasGroup store = menuReady.GetComponent <CanvasGroup> ();
    
    while (store.alpha > 0.0f)
    {
      float alpha = store.alpha;
      alpha -= Time.deltaTime * 5.0f;
      store.alpha = alpha;
      yield return null;
    }
    
    store.alpha = 0.0f;
    SetMenuActive (menuReady, false);
  }

  private IEnumerator IgnoreSwitchMode (float time)
  {
    yield return new WaitForSeconds (time);

    switchingMode = false;
  }

  // TODO
//  bool promptingDiamond = false;

  // TODO
//  private IEnumerator BuyDiamondPrompt ()
//  {
//    promptingDiamond = true; 
//    float scale = 1.0f;
//    for (int i = 0; i < 2; ++i)
//    {
//      while (buttonSwitchToDiamond.transform.localScale.x < scale + 0.5f)
//      {
//        float s = buttonSwitchToDiamond.transform.localScale.x;
//        s += Time.deltaTime * 5.0f;
//        buttonSwitchToDiamond.transform.localScale = Vector2.one * s;
//        yield return null;
//      }
//
//      while (buttonSwitchToDiamond.transform.localScale.x > scale)
//      {
//        float s = buttonSwitchToDiamond.transform.localScale.x;
//        s -= Time.deltaTime * 5.0f;
//        buttonSwitchToDiamond.transform.localScale = Vector2.one * s;
//        yield return null;
//      }
//    }
//
//    promptingDiamond = false;
////    Debug.Log ("HERE");
////    var sprite = buttonBuyDiamonds.image;
////    float alpha = sprite.color.a;
////    for (int i = 0; i < 5; ++i)
////    {
////      while (sprite.color.a < 1.0f)
////      {
////        var c = sprite.color;
////        c.a += Time.deltaTime * 5.0f;
////        sprite.color = c;
////        yield return null;
////      }
////
////      while (sprite.color.a > alpha)
////      {
////        var c = sprite.color;
////        c.a -= Time.deltaTime * 5.0f;
////        sprite.color = c;
////        yield return null;
////      }
////    }
//  }
  
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
    if (!FirstRevive ())
    {
      menuReviveWatchVideo.SetActive (false);
      Vector2 v = menuReviveUseCoins.GetComponent <RectTransform> ().anchoredPosition;
      v.y = 0.0f;
      menuReviveUseCoins.GetComponent <RectTransform> ().anchoredPosition = v;
      imageReviveButtonSeparator.SetActive (false);
    }
    else
    {
      menuReviveWatchVideo.SetActive (true);
      menuReviveUseCoins.GetComponent <RectTransform> ().anchoredPosition = originalReviveButtonPosition;
      imageReviveButtonSeparator.SetActive (true);
    }

    UpdateRevivePriceText ();
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
    Debug.Log ("CALLED");
    StartCoroutine (FadeOutReviveCanvasSpecial ());
    animRevive.SetActive (false);
    StartCoroutine (FadeInGameCanvas ());
  }
  
  void OnReviveCompleteStart ()
  {
    previousState = GameManager.States.None;
    StartCoroutine (FadeOutStoreCanvas ());
    StartCoroutine (FadeInGameCanvas ());
    UpdateCoinsText ();

    StartCoroutine (StartReviveTimer ());
//    ChangeState (States.None);
  }

  void OnReviveCompleteEnd ()
  {
    UpdateRevivePriceText ();
  }

  void OnBoughtRevive ()
  {
    if (TransitionFromRevive () && StatsManager.inst.canUseRevive)
    {
      Debug.Log ("CODE HERE");
      GameManager.inst.ChangeState (GameManager.States.ReviveCompleteStart);
    }

    StartCoroutine (IncreaseCoins ());
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

  /// <summary>
  /// Check if store was opened from Revive Menu
  /// </summary>
  /// <returns><c>true</c>, if from revive was transitioned, <c>false</c> otherwise.</returns>
  bool TransitionFromRevive ()
  {
    return previousState == GameManager.States.ShowRevive || previousState == GameManager.States.ShowTutorialRevive;
  }

  /// <summary>
  /// For now just check if original and current revive price match
  /// </summary>
  /// <returns><c>true</c>, if revive was firsted, <c>false</c> otherwise.</returns>
  bool FirstRevive ()
  {
    return StatsManager.inst.reviveCoinsPrice == StatsManager.inst.originalRevivePrice;
  }
  
  void OnShowStore ()
  {
    StartCoroutine (FadeInStoreCanvas ());
    StartCoroutine (FadeOutStartCanvas ());

//    Debug.Log (previousState);
    // TODO
//    if (TransitionFromRevive ())
//    {
//      if (!potionStoreList.initialized)
//      {
//        potionStoreList.gameObject.SetActive (true);
//        potionStoreList.Start ();
//      }
//      
//      ShowPotionStore ();
//      potionStoreList.SetPage (0);
//    }
  }
  
  void OnHideStore ()
  {
    StartCoroutine (FadeOutStoreCanvas ());
    StartCoroutine (FadeInStartCanvas ());

//    Debug.Log ("STATE " + previousState);
    if (TransitionFromRevive ())
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
//    textGameOverFeedback.GetComponent <Animator> ().SetTime (0.0);
//    textGameOverFeedback.GetComponent <Animator> ().Play ("HighScoreFeedback");
  }

  void OnNoHighScore ()
  {
//    textGameOverFeedback.GetComponent <Animator> ().Play ("None");
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

  // TODO
  void OnShowFacebookLeaderboard ()
  {
//    StartCoroutine (FadeInFacebookLeaderboardCanvas ());
//    StartCoroutine (FadeOutOptionsCanvas ());
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnHideFacebookLeaderboard ()
  {
//    StartCoroutine (FadeOutFacebookLeaderboardCanvas ());
//    StartCoroutine (FadeInOptionsCanvas ());
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnAddInGameItem (InGameBuyButton button)
  {
//    counter++;
//    buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+button.price * counter+"";
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnSubtractInGameItem (InGameBuyButton button)
  {
//    if (counter - 1 > 0)
//    {
//      --counter;
//      buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+button.price * counter+"";
//    }
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnCannotPurchaseInGameItem ()
  {
//    if (!promptingDiamond)
//    {
//      StartCoroutine (BuyDiamondPrompt ());
//    }
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnStoreButtonSwipe (ScrollSnapRect.ScrollData data)
  {
//    if (menuDiamondStore != null && menuPotionStore != null)
    {
//      if (menuDiamondStore.activeSelf)
      {
//        Debug.Log (data.container.gameObject.name);
        Transform container = diamondStoreList.container;
        if (diamondStoreList != null && diamondStoreList.container != null)
        {
          StoreButton b = container.GetChild (data.scrollIndex).GetComponent <StoreButton> ();
          if (b != null)
          {
            b.priceText = StatsManager.inst.GetPrice (b);
            buttonBuyDiamonds.GetComponentInChildren <Text> ().text = b.priceText;
            buttonBuyDiamonds.onClick.RemoveAllListeners ();
            buttonBuyDiamonds.onClick.AddListener (() => {PurchaseItem (b);});
          }
        }
      }
//      else if (menuPotionStore.activeSelf)
//      {
//        Transform container = potionStoreList.container;
//        InGameBuyButton b = container.GetChild (index).GetComponent <InGameBuyButton> ();
//        buttonBuyPotions.GetComponentInChildren <Text> ().text = ""+b.price+"";
//        buttonBuyPotions.onClick.RemoveAllListeners ();
//        buttonBuyPotions.onClick.AddListener (() => {PurchaseInGameItem (b);});
//      }
    }
  }

  void OnSwitchMode (int mode)
  {
    StartCoroutine (IgnoreSwitchMode (AudioManager.inst._options_menu1.volumeFadeSpeed * 2.0f));
//    var ui = UIManager.inst.allUI;
//    foreach (var v in ui)
//    {
//      if (!v.gameObject.CompareTag ("noinvert"))
//      {
//        v.color = new Color (1.0f - v.color.r, 1.0f - v.color.g, 1.0f - v.color.b, v.color.a);
//      }
//    }
  }

  void OnProductsLoaded (Dictionary <string, StoreInterface.ProductTemplate> products)
  {
    Transform container = diamondStoreList.container;
//    StoreButton b = container.GetChild (index).GetComponent <StoreButton> ();
    foreach (Transform t in container)
    {
      var v = t.GetComponent <StoreButton> ();
      if (v != null && products.ContainsKey (v.title.text))
      {
        v.priceText = products [v.title.text].Price;
      }
    }

    buttonBuyDiamonds.GetComponentInChildren <Text> ().text =
      container.GetChild (diamondStoreList.currentPage).GetComponent <StoreButton> ().priceText;
  }

  void OnBoughtCoins ()
  {
//    UpdateCoinsText ();
    OnBoughtRevive ();
  }

  void OnTutorialStart ()
  {
    StartCoroutine (FadeInTutorialCanvas ());
    StartCoroutine (FadeOutGameCanvas ());
  }

  void OnTutorialEnd ()
  {
    StartCoroutine (FadeOutReadyCanvas ());
    StartCoroutine (FadeInGameCanvas ());
  }

  void OnPreTutorialReviveStart ()
  {
  }

  void OnTutorialReviveStart ()
  {
    StartCoroutine (FadeOutGameCanvas ());
    StartCoroutine (FadeInTutorialReviveCanvas ());
  }

  void OnTutorialReviveEnd ()
  {
    StartCoroutine (FadeOutTutorialReviveCanvas ());
    GameManager.inst.ChangeState (GameManager.States.ShowTutorialRevive);
  }

  void OnShowTutorialRevive ()
  {
    StartCoroutine (FadeOutGameCanvas ());
    StartCoroutine (FadeInReviveCanvas (false));
  }

  // TODO
  void OnShowSwitchToDiamondStorePrompt ()
  {
//    buttonSwitchToDiamond.interactable = true;
//    SetMenuActive (menuSwitchDiamondStorePrompt, true);
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnShowBuyDiamondPrompt ()
  {
//    buttonBuyDiamonds.GetComponent <Animator> ().Play ("ScaleInOut");
//    SetMenuActive (menuSwitchDiamondStorePrompt, false);
//    SetMenuActive (menuBuyDiamondMessage, true);
//
//    SetMenuActive (menuSwitchPotionStorePrompt, true);
//
//    buttonSwitchToPotion.interactable = true;
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnShowBuyPotionPrompt ()
  {
//    SetMenuActive (menuSwitchPotionStorePrompt, false);
//    SetMenuActive (menuBuyDiamondMessage, false);
//    buttonBuyDiamonds.GetComponent <Animator> ().Play ("None");
//
//    buttonBuyPotions.interactable = true;
//
//    SetMenuActive (menuBuyPotionMessage, true);
//
//    buttonBuyPotions.GetComponent <Animator> ().Play ("ScaleInOut");
    throw new System.NotImplementedException ();
  }

  // TODO
  void OnTutorialReviveDone ()
  {
//    SetMenuActive (menuBuyPotionMessage, false);
//    buttonBuyPotions.GetComponent <Animator> ().Play ("None");
    throw new System.NotImplementedException ();
  }

  void OnShowReadyMessage ()
  {
    StartCoroutine (FadeOutTutorialCanvas ());
    StartCoroutine (FadeInReadyCanvas ());
  }

  void OnInterstitialStarted ()
  {
//    previousState =  (GameManager.States)GameManager.inst.GetState ();
    animRevive.SetActive (false);
    StopAllCoroutines ();
    StartCoroutine (FadeOutReviveCanvas ());
  }

  void OnInterstitialFailed ()
  {
//    animRevive.SetActive (true);
    Debug.Log ("Interstitial Failed Received");
  }

  // TODO
//  void ShowDiamondStore ()
//  {
//    Image diamond = GameObject.Find ("ButtonDiamondType").GetComponent <Image> ();
//    Color c = diamond.color;
//    c.a = 100.0f / 255.0f;
//    diamond.color = c;
//
//    Image potion = GameObject.Find ("ButtonPotionType").GetComponent <Image> ();
//    c = potion.color;
//    c.a = 30.0f / 255.0f;
//    potion.color = c;
//
//    menuDiamondStore.SetActive (true);
//    menuPotionStore.SetActive (false);
//    OnStoreButtonSwipe (diamondStoreList.currentPage);
//  }
//
//  void ShowPotionStore ()
//  {
//    Image diamond = GameObject.Find ("ButtonDiamondType").GetComponent <Image> ();
//    Color c = diamond.color;
//    c.a = 30.0f / 255.0f;
//    diamond.color = c;
//    
//    Image potion = GameObject.Find ("ButtonPotionType").GetComponent <Image> ();
//    c = potion.color;
//    c.a = 100.0f / 255.0f;
//    potion.color = c;
//
//    menuDiamondStore.SetActive (false);
//    menuPotionStore.SetActive (true);
//
//    OnStoreButtonSwipe (potionStoreList.currentPage);
//  }

  private IEnumerator IncreaseCoins ()
  {
    int target = StatsManager.inst.coins, curr = 0;
    int.TryParse (textCoins [0].text, out curr);

    int distance = target - curr;
    float time = 1.0f;
    float speed = distance / (60 * time);

    while (curr + speed < target)
    {
      curr += (int)speed;
      foreach (var v in textCoins)
      {
        v.text = ""+curr+"";
      }

      yield return null;
    }

    foreach (var v in textCoins)
    {
      v.text = ""+target+"";
    }
  }

  void UpdateCoinsText ()
  {
    string c = Coins ();
    foreach (var v in textCoins)
    {
      v.text = c;
    }
  }

  void UpdateRevivePriceText ()
  {
    int price = StatsManager.inst.reviveCoinsPrice;
    textRevivePrice.text = ""+price+"";
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
}
