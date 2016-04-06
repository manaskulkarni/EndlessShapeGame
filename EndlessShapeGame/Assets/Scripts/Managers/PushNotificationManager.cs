using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using OneSignalPush.MiniJSON;

public class PushNotificationManager : MonoBehaviour
{
  private string extraMessage = null;
  private bool oneSignalInitialized = false;
  private bool firstNotificationShown = false;

  public double pushNotificationIntervalSeconds = 30.0;

  public string oneSignalUserId = "";

  public string [] pushNotifications =
    {
      "Hey where have you been ?\nCollect your reward and keep flicking!",
      "You haven't flicked for a while.\nCollect your reward and keep flicking!"
    };

  public string defaultPushNotification = "Hey where have you been ? Collect your reward and keep flicking!";

  // Use this as constructor
  void Awake ()
  {
    // Enable line below to debug issues with setuping OneSignal. (logLevel, visualLogLevel)
    //    OneSignal.SetLogLevel(OneSignal.LOG_LEVEL.INFO, OneSignal.LOG_LEVEL.INFO);

    // The only required method you need to call to setup OneSignal to receive push notifications.
    // Call before using any other methods on OneSignal.
    // Should only be called once when your app is loaded.
    // OneSignal.Init(OneSignal_AppId, GoogleProjectNumber, NotificationReceivedHandler(optional));
    OneSignal.Init("fb4ae499-6bfd-4257-89ef-b3661a2d5963", "703322744261", HandleNotification);

    // Shows a Native iOS/Android alert dialog when the user is in your app when a notification comes in.
    OneSignal.EnableInAppAlertNotification(false);
  }

  void Start ()
  {
    extraMessage = "Waiting to get a OneSignal userId. Uncomment OneSignal.SetLogLevel in the Start method if it hangs here to debug the issue.";

    OneSignal.GetIdsAvailable((userId, pushToken) =>
        {
          oneSignalUserId = userId;
          Debug.Log ("User ID : " + userId);
          Debug.Log ("Push Token : " + pushToken);
          if (pushToken != null)
          {
            SchedulePushNotification (oneSignalUserId);
            oneSignalInitialized = true;
            Debug.Log ("SCHEDULING ONE MORE PUSH NOTIFICATION");
          }
          else
          {
            extraMessage = "ERROR: Device is not registered.";
          }
        });
  }

  private void SchedulePushNotification (string userId)
  {
    //        string languageCode = GetLanguageCode ();
    string languageCode = "en";
    Debug.Log ("LANGUAGE CODE IS : " + languageCode);
    string notificationText;
    if (pushNotifications.Length > 0)
      notificationText = pushNotifications [Random.Range (0, pushNotifications.Length)];
    else
      notificationText = defaultPushNotification;

    // See http://documentation.onesignal.com/v2.0/docs/notifications-create-notification for a full list of options.
    // You can not use included_segments or any fields that require your OneSignal 'REST API Key' in your app for security reasons.
    // If you need to use your OneSignal 'REST API Key' you will need your own server where you can make this call.
    var notification = new Dictionary<string, object>();
    notification["contents"] = new Dictionary<string, string>() { { languageCode, notificationText} };

    // Send notification to this device.
    notification["include_player_ids"] = new List<string>() { userId };
    // Example of scheduling a notification in the future.
    notification["send_after"] =
      System.DateTime.Now.ToUniversalTime().
      AddSeconds (pushNotificationIntervalSeconds).ToString("U");

//    notification ["reward"] = "RewardNotification";

    extraMessage = "Posting test notification now.";
    OneSignal.PostNotification(notification, (responseSuccess) =>
        {
          extraMessage = "Notification posted successful! Delayed by about 30 secounds to give you time to press the home button to see a notification vs an in-app alert.\n" + Json.Serialize(responseSuccess);
        }, (responseFailure) =>
        {
          extraMessage = "Notification failed to post:\n" + Json.Serialize(responseFailure);
        });
  }

  // Gets called when the user opens the notification or gets one while in your app.
  // The name of the method can be anything as long as the signature matches.
  // Method must be static or this object should be marked as DontDestroyOnLoad
  private void HandleNotification(string message, Dictionary <string, object> additionalData, bool isActive)
  {
    // Only go inside if notification was received when app is suspended
    if (!isActive)
    {
      Debug.Log ("Opened App With Push Notification : " + message);
      extraMessage = "Notification opened with text: " + message;

      Debug.Log ("ADDITIONAL DATA : " + additionalData);

      foreach (var v in additionalData)
      {
        Debug.Log ("KEY : " + v.Key);
      }

      // When isActive is true this means the user is currently in your game.
      // Use isActive and your own game logic so you don't interrupt the user with a popup or menu when they are in the middle of playing your game.
      if (additionalData != null)
      {
        if (additionalData.ContainsKey("discount"))
        {
          extraMessage = (string)additionalData["discount"];
          // Take user to your store.
        }
        else if (additionalData.ContainsKey("actionSelected"))
        {
          // actionSelected equals the id on the button the user pressed.
          // actionSelected will equal "__DEFAULT__" when the notification itself was tapped when buttons were present.
          extraMessage = "Pressed ButtonId: " + additionalData["actionSelected"];
        }
      }

      GameManager.inst.ChangeState (GameManager.States.PushNotificationReward);
    }

    firstNotificationShown = true;

    if (oneSignalInitialized && firstNotificationShown)
    {
      SchedulePushNotification (oneSignalUserId);
    }
  }

  private static string GetLanguageCode ()
  {
    switch (Application.systemLanguage)
    {
      case SystemLanguage.Afrikaans:
        return "af";
        break;
      case SystemLanguage.Arabic:
        return "ar";
        break;
      case SystemLanguage.Basque:
        return "eu";
        break;
      case SystemLanguage.Belarusian:
        return "be";
        break;
      case SystemLanguage.Bulgarian:
        return "bg";
        break;
      case SystemLanguage.Catalan:
        return "ca";
        break;
      case SystemLanguage.Chinese:
        return "zh";
        break;
      case SystemLanguage.ChineseSimplified:
        return "zh";
        break;
      case SystemLanguage.ChineseTraditional:
        return "zh";
        break;
      case SystemLanguage.Czech:
        return "cs";
        break;
      case SystemLanguage.Danish:
        return "da";
        break;
      case SystemLanguage.Dutch:
        return "nl";
        break;
      case SystemLanguage.English:
        return "en";
        break;
      case SystemLanguage.Estonian:
        return "et";
        break;
      case SystemLanguage.Faroese:
        return "fo";
        break;
      case SystemLanguage.Finnish:
        return "fi";
        break;
      case SystemLanguage.French:
        return "fr";
        break;
      case SystemLanguage.German:
        return "de";
        break;
      case SystemLanguage.Greek:
        return "el";
        break;
      case SystemLanguage.Hebrew:
        return "he";
        break;
      case SystemLanguage.Hungarian:
        return "hu";
        break;
      case SystemLanguage.Icelandic:
        return "is";
        break;
      case SystemLanguage.Indonesian:
        return "id";
        break;
      case SystemLanguage.Italian:
        return "it";
        break;
      case SystemLanguage.Japanese:
        return "ja";
        break;
      case SystemLanguage.Korean:
        return "ko";
        break;
      case SystemLanguage.Latvian:
        return "lv";
        break;
      case SystemLanguage.Lithuanian:
        return "lt";
        break;
      case SystemLanguage.Norwegian:
        return "no";
        break;
      case SystemLanguage.Polish:
        return "pl";
        break;
      case SystemLanguage.Portuguese:
        return "pt";
        break;
      case SystemLanguage.Romanian:
        return "ro";
        break;
      case SystemLanguage.Russian:
        return "ru";
        break;
      case SystemLanguage.SerboCroatian:
        return "sr";
        break;
      case SystemLanguage.Slovak:
        return "sk";
        break;
      case SystemLanguage.Slovenian:
        return "sl";
        break;
      case SystemLanguage.Spanish:
        return "es";
        break;
      case SystemLanguage.Swedish:
        return "sv";
        break;
      case SystemLanguage.Thai:
        return "th";
        break;
      case SystemLanguage.Turkish:
        return "tr";
        break;
      case SystemLanguage.Ukrainian:
        return "uk";
        break;
      case SystemLanguage.Unknown:
        goto default;
        break;
      case SystemLanguage.Vietnamese:
        return "vi";
        break;
      default:
        return "en";
        break;  
    }
  }
}
