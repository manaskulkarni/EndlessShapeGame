using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class FriendButtonList : MonoBehaviour
{
  public GameObject friendButtonPrefab;
  public Color c0;
  public Color c1;
  public Color playerColor;

  void OnFriendListLoaded ()
  {
    var icons = FacebookInterface.inst.profilePictures;
    var player = FacebookInterface.inst.GetPlayer ();
    var playerScore = FacebookInterface.inst.GetPlayerScore ();
    var playerName = player.Name;
    int i = 0;

    for (int index = icons.Count - 1; index >= 0; --index)
    {
      var icon = icons [index];
      var userData = FacebookInterface.inst.GetUserFromId (icon.Key);
      if (userData != null)
      {
        var go = GameObject.Instantiate (friendButtonPrefab) as GameObject;
        var button = go.GetComponent <FriendButton> ();

        button.displayName.text = userData.Name;
        int score = FacebookInterface.inst.GetScoreFromId (userData.Id);

        if (score != -1)
        {
          button.highScore.text = score.ToString ();
        }
        else
        {
          button.highScore.text = "N/A";
        }

        button.profilePic.texture = icon.Value;

        if (userData.Id == player.Id)
        {
          button.panel.color = playerColor;
        }
        else
        {
          if (i % 2 == 0)
          {
            button.panel.color = c0;
          }
          else
          {
            button.panel.color = c1;
          }

          ++i;
        }


        go.transform.SetParent (transform);
        go.transform.localScale = Vector3.one;
      }
    }
  }
}
