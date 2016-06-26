using UnityEngine;
using System.Collections;

public class ReviveMenu : CubiBase
{
  public override void cubiAwake ()
  {
    RegisterEvent ("LoadMainMenu", ((object sender, System.EventArgs e) =>
    {
      UIManager.inst.ReviveDeclined ();
    }));

    RegisterEvent ("DisableButtons", ((object sender, System.EventArgs e) =>
    {
      UIManager.inst.DisableReviveButtons ();
    }));
  }
	
//	// Update is called once per frame
//	void Update ()
//  {
//	
//	}

  public void LoadMainMenu ()
  {
    UIManager.inst.ReviveDeclined ();
  }

  public void DisableButtons ()
  {
    UIManager.inst.DisableReviveButtons ();
  }

}
