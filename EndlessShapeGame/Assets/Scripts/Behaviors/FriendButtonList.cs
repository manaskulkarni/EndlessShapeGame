using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FriendButtonList : MonoBehaviour
{
  public GameObject friendButtonPrefab;

  void OnFriendListLoaded ()
  {
    var icons = FacebookInterface.inst.profilePictures;

    foreach (var icon in icons)
    {
      var friendData = FacebookInterface.inst.GetFriendFromId (icon.Key);
      if (friendData != null)
      {
        var go = GameObject.Instantiate (friendButtonPrefab) as GameObject;
        var button = go.GetComponent <FriendButton> ();

        button.displayName.text = friendData.Name;
        int score = FacebookInterface.inst.GetScoreFromId (friendData.Id);
        if (score != -1)
        {
          button.highScore.text = score.ToString ();
        }
        else
        {
          button.highScore.text = "N/A";
        }

        button.profilePic.sprite = icon.Value;

        go.transform.SetParent (transform);
        go.transform.localScale = Vector3.one;
      }
    }
  }
}
