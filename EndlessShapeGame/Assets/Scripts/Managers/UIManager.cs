using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using BadassProjects.StateMachine;

public class UIManager : CubiBase
{
  static public UIManager inst { get; private set; }

  // Private Members
  private GameObject menuStart { get; set; }
  private GameObject menuGame { get; set; }
  private GameObject menuOptions { get; set; }
  //  private GameObject menuGameOver { get; set; }
  //  private GameObject menuCoins { get; set; }
  private GameObject menuRevive { get; set; }
  private GameObject menuStore { get; set; }
  private GameObject menuColor { get; set; }
  private GameObject menuMusic { get; set; }

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
  public ScrollSnapRect musicList;
  //  public ScrollSnapRect potionStoreList;

  // TODO
  //  public Button buttonFacebookBack;
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
  private bool switchingMode = false;

  public override void cubiAwake ()
  {
    if (inst == null)
    {
      inst = this;
      //      Initialize <States> ();
    }
    else
    {
      GameObject.Destroy (gameObject);
      return;
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

    textGameOverScore = GameObject.Find ("TextGameOverScore").GetComponent <Text> ();
    textGameOverFeedback = GameObject.Find ("TextGameOverFeedback").GetComponent <Text> ();

    imageCircle = GameObject.Find ("ImageCircle").GetComponent <Image> ();
    startImageCircleColor = imageCircle.color;
    imageCircle.gameObject.SetActive (false);

    menuTutorialStart = GameObject.Find ("MenuTutorialStart");
    menuTutorialRevive = GameObject.Find ("MenuTutorialRevive");
    menuReady = GameObject.Find ("MenuReady");

    textGameOverScore.text = BestScore ();
    textGameOverFeedback.text = "";



    UpdateMusicButtons (StatsManager.inst.vMode);

    SetMenuActive (menuTutorialStart, false);
    SetMenuActive (menuTutorialRevive, false);
    SetMenuActive (menuReady, false);
    SetMenuActive (menuStart, true);
    SetMenuActive (menuRevive, false);
    SetMenuActive (menuStore, false);
    SetMenuActive (menuMusic, false);

    menuOptions = GameObject.Find ("MenuOptions");
    SetMenuActive (menuOptions, false);

    menuGame = GameObject.Find ("MenuGame");
    textScore = GameObject.Find ("TextScore").GetComponent <Text> ();
    textPauseTimer = GameObject.Find ("TextPauseTimer").GetComponent <Text> ();
    textPauseTimer.enabled = false;
    textScore.text = ZeroScore ();

    UpdateCoinsText ();

    SetMenuActive (menuGame, false);

    originalReviveButtonPosition = menuReviveUseCoins.GetComponent <RectTransform> ().anchoredPosition;

    RegisterEvent ("FadeInOptions", ((object sender, System.EventArgs e) =>
    {
      UpdateMusicButtons (StatsManager.inst.vMode);
    }));

    RegisterEvent ("FadeInStore", ((object sender, System.EventArgs e) =>
    {
      GameManager.inst.SendMessage ("OnStoreFadeIn");
    }));

    RegisterEvent ("FadeOutRevive", ((object sender, System.EventArgs e) =>
    {
      if (GameManager.inst.GetState ().Equals (GameManager.States.AcceptRevive))
      {
        GameManager.inst.ChangeState (GameManager.States.ReviveCompleteStart);
      }
    }));

    RegisterEvent ("UpdateScore", ((object sender, System.EventArgs e) =>
    {
      textScore.text = ""+StatsManager.inst.score+"";
    }));
  }

  public void ShowOptions ()
  {
    GameManager.inst.ChangeState (GameManager.States.ShowOptions); 
  }

  public void ShowMusicMenu()
  {
    musicList.SetPage (StatsManager.inst.vMode);
    StartCoroutine(FadeOutMenu(menuColor));

    StartCoroutine(FadeInMenu(menuMusic));

    GameObject.Find ("ButtonColorOption").GetComponent <Image> ().color = Color.clear;
    GameObject.Find ("ButtonMusicOption").GetComponent <Image> ().color = new Color (1.0f, 1.0f, 1.0f, 50.0f / 255.0f);

    GameObject.Find ("ButtonPick").GetComponentInChildren<Text> ().text = "PICK";
  }

  public void ShowColorMenu()
  {
    StartCoroutine(FadeOutMenu(menuMusic));
    StartCoroutine(FadeInMenu(menuColor));

    GameObject.Find ("ButtonMusicOption").GetComponent <Image> ().color = Color.clear;
    GameObject.Find ("ButtonColorOption").GetComponent <Image> ().color = new Color (1.0f, 1.0f, 1.0f, 50.0f / 255.0f);

    GameObject.Find ("ButtonPick").GetComponentInChildren<Text> ().text = "RESET";
  }

  public void StartSwitchMode (ScrollSnapRect scroll)
  {
    if (!switchingMode)
    {
      int mode = scroll.currentPage;
      if (scroll.container.GetChild (mode).CompareTag ("song"))
      {
        if (StatsManager.inst.vMode != mode)
        {
          switchingMode = true;
          GameManager.inst.BroadcastMessage ("OnSwitchMode", mode);
          UpdateMusicButtons (mode);
        }
      }
    }
  }

  public void OptionsPick ()
  {
    if (menuColor.activeSelf)
    {
      GameManager.inst.BroadcastMessage ("OnResetBackground");
    }
    else if (!switchingMode && menuMusic.activeSelf)
    {
      int mode = musicList.currentPage;
      if (musicList.container.GetChild (mode).CompareTag ("song"))
      {
        if (StatsManager.inst.vMode != mode)
        {
          switchingMode = true;
          Debug.Log ("Swtcdfsdjkfl" + mode);
          GameManager.inst.BroadcastMessage ("OnSwitchMode", mode);
          UpdateMusicButtons (mode);
        }
      }
    }
  }

  public void EndGame ()
  {
    //    StartCoroutine (FadeOutGameOverCanvas ());
    //    Camera.main.backgroundColor = Utils.Color255 (100, 122, 141, 5);
    StartCoroutine (FadeInMenu (menuStart));
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
      StartCoroutine (FadeOutMenu (menuRevive));
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

  public void PlayAgain ()
  {
    ReviveDeclined ();
    GameManager.inst.PlayGame ();
  }

  public void DisableReviveButtons ()
  {
    menuReviveUseCoins.GetComponentInChildren <Button> ().interactable = false;
    menuReviveWatchVideo.GetComponentInChildren <Button> ().interactable = false;
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

  public void RateUs ()
  {
    StatsManager.inst.ShowRateUsDialog ();
  }

  public void TutorialReviveDone ()
  {
    GameManager.inst.SendMessage ("TutorialReviveDone");
  }

  #region Coroutines
  private IEnumerator StartPauseTimer ()
  {
    yield return new WaitForSeconds (2.0f);
    int i = 3;

    imageCircle.gameObject.SetActive (true);
    imageCircle.color = startImageCircleColor;

    textPauseTimer.enabled = true;
    textPauseTimer.text = ""+i+"";
    textScore.enabled = false;

    while (i > 0)
    {
      --i;
      textPauseTimer.text = ""+i+"";
      yield return StartCoroutine (StartPopFeedback(textPauseTimer));
      yield return new WaitForSeconds (0.5f);
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
      //      if (scale > 1.5f) scale = 1.4f;
      text.transform.localScale = Vector2.one * scale;
      yield return null;
    }
    while (scale > 1.0f)
    {
      scale -= Time.deltaTime * 5.0f;
      //      if (scale < 1.0f) scale = 1.0f;
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

  private IEnumerator FadeInReviveCanvas (bool animate = true)
  {
    var group = menuRevive.GetComponent <CanvasGroup> ();

    SetMenuActive (menuRevive, true);
    animRevive.SetActive (animate);


    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * 5.0f;
      group.alpha = alpha;
      yield return null;
    }

    group.interactable = true;
    group.blocksRaycasts = true;
  }

  private IEnumerator FadeInMenu (GameObject target, float speed = 5.0f, string startMessage = "", string finishMessage = "")
  {
    SetMenuActive (target, true);

    if (startMessage != "")
      InvokeMessageDontRequireReceiver (this, startMessage);

    var group = target.GetComponent <CanvasGroup> ();
    while (group.alpha < 1.0f)
    {
      float alpha = group.alpha;
      alpha += Time.deltaTime * speed;
      group.alpha = alpha;
      yield return null;
    }

    group.alpha = 1.0f;
    group.interactable = true;
    group.blocksRaycasts = true;

    if (finishMessage != "")
      InvokeMessageDontRequireReceiver (this, finishMessage);
  }

  private IEnumerator FadeOutMenu (GameObject target, float speed = 5.0f, string startMessage = "", string finishMessage = "")
  {
    if (startMessage != "")
      InvokeMessageDontRequireReceiver (this, startMessage);

    var group = target.GetComponent <CanvasGroup> ();
    group.interactable = false;
    group.blocksRaycasts = false;

    while (group.alpha > 0.0f)
    {
      float alpha = group.alpha;
      alpha -= Time.deltaTime * speed;
      group.alpha = alpha;
      yield return null;
    }

    group.alpha = 0.0f;
    SetMenuActive (target, false);

    if (finishMessage != "")
      InvokeMessageDontRequireReceiver (this, finishMessage);
  }

  private IEnumerator IgnoreSwitchMode (float time)
  {
    yield return new WaitForSeconds (time);

    switchingMode = false;
  }

  #endregion

  private void UpdateMusicButtons (int mode)
  {
    for (int i = 0; i < musicList.container.childCount; ++i)
    {
      if (musicList.container.GetChild (i).CompareTag("song"))
      {
        Image b = musicList.container.GetChild (i).FindChild ("ImageButton").GetComponent<Image> ();
        Color c = b.color;
        c.a = 50.0f / 255.0f;
        b.color = c;
      }
    }

    Image bb = musicList.container.GetChild (mode).FindChild ("ImageButton").GetComponent <Image> ();
    Color cc = bb.color;
    cc.a = 1.0f;
    bb.color = cc;

    musicList.SetPage (mode);
  }

  static public string BestScore ()
  {
    return "BEST: " + ""+StatsManager.inst.highScore+"";
  }

  static public string NewHighScore ()
  {
    return "NEW HIGH SCORE!";
  }

  static public string ZeroScore ()
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
    StartCoroutine(FadeOutMenu(menuStart));
    ////    Camera.main.backgroundColor = GameObject.FindObjectOfType <Background> ().drawable.color;
    StartCoroutine(FadeInMenu(menuGame));
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
    StartCoroutine (FadeOutMenu (menuGame));
    StartCoroutine (FadeInReviveCanvas ());
  }

  void OnDeclineRevive ()
  {
    previousState = GameManager.States.None;
    animRevive.SetActive (false);
    StartCoroutine (FadeOutMenu (menuRevive));
    StartCoroutine (FadeOutMenu (menuGame));
  }

  void OnAcceptRevive ()
  {
    Debug.Log ("CALLED");
    StartCoroutine (FadeOutMenu (menuRevive, 5.0f, "", "FadeOutRevive"));
    animRevive.SetActive (false);
    StartCoroutine (FadeInMenu (menuGame));
  }

  void OnReviveCompleteStart ()
  {
    previousState = GameManager.States.None;
    StartCoroutine (FadeOutMenu (menuStore));
    StartCoroutine (FadeInMenu (menuGame));
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
      UpdateCoinsText ();
      GameManager.inst.ChangeState (GameManager.States.ReviveCompleteStart);
    }
    else
    {
      StartCoroutine (IncreaseCoins ());
    }
  }

  void OnShowOptions ()
  {
    StartCoroutine (FadeInMenu (menuOptions, 5.0f, "FadeInOptions"));
    StartCoroutine (FadeOutMenu (menuStart));
  }

  void OnHideOptions ()
  {
    StartCoroutine (FadeOutMenu (menuOptions));
    StartCoroutine (FadeInMenu (menuStart));
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
    StartCoroutine (FadeInMenu (menuStore, 5.0f, "", "FadeInStore"));
    StartCoroutine (FadeOutMenu (menuStart));
  }

  void OnHideStore ()
  {
    StartCoroutine (FadeOutMenu (menuStore));
    StartCoroutine (FadeInMenu (menuStart));

    //    Debug.Log ("STATE " + previousState);
    if (TransitionFromRevive ())
    {
      GameManager.inst.ChangeState (GameManager.States.DeclineRevive);
    }
  }

  void OnGameOver ()
  {
    StartCoroutine(FadeInMenu(menuStart));
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = BestScore ();
  }

  void OnHighScore ()
  {
    textGameOverScore.text = ""+StatsManager.inst.score+"";
    textGameOverFeedback.text = NewHighScore ();
  }

  void OnNoHighScore ()
  {
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
    //    {
    if (data.container.gameObject.transform.parent.parent.name == "MenuDiamondStore")
    {
      if (diamondStoreList != null)
      {
        //        Debug.Log (data.container.gameObject.name);
        Transform container = diamondStoreList.container;
        if (diamondStoreList.container != null)
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
    }
    else if (data.container.gameObject.transform.parent.parent.name == "MenuMusic")
    {
      if (musicList != null)
      {
        Transform container = musicList.container;
        if (musicList.container != null)
        {
          if (container.GetChild (data.scrollIndex) != null)
          {
            if (!container.GetChild (data.scrollIndex).gameObject.CompareTag ("song"))
            {
              GameObject.Find ("ButtonPick").GetComponent<Button> ().interactable = false;
            }
            else
            {
              GameObject.Find ("ButtonPick").GetComponent<Button> ().interactable = true;
            }
          }
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
    //    }
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
    OnBoughtRevive ();
  }

  void OnTutorialStart ()
  {
    StartCoroutine (FadeInMenu (menuTutorialStart));
    StartCoroutine (FadeOutMenu (menuGame));
  }

  void OnTutorialEnd ()
  {
    StartCoroutine (FadeOutMenu (menuReady));
    StartCoroutine (FadeInMenu (menuGame));
  }

  void OnPreTutorialReviveStart ()
  {
  }

  void OnTutorialReviveStart ()
  {
    StartCoroutine (FadeOutMenu (menuGame));
    StartCoroutine (FadeInMenu (menuTutorialRevive));
  }

  void OnTutorialReviveEnd ()
  {
    StartCoroutine (FadeOutMenu (menuTutorialRevive));
    GameManager.inst.ChangeState (GameManager.States.ShowTutorialRevive);
  }

  void OnShowTutorialRevive ()
  {
    StartCoroutine (FadeOutMenu (menuGame));
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
    StartCoroutine (FadeOutMenu (menuTutorialStart));
    StartCoroutine (FadeInMenu (menuReady));
  }

  void OnInterstitialStarted ()
  {
    // Only do this if watch video for revive
    if (previousState == GameManager.States.ShowRevive)
    {
      //    previousState =  (GameManager.States)GameManager.inst.GetState ();
      animRevive.SetActive (false);
      StopAllCoroutines ();
      StartCoroutine (FadeOutMenu (menuRevive));
    }
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
    float time = 0.5f;
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
