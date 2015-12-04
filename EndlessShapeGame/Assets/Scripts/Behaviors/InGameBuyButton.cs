using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class InGameBuyButton : MonoBehaviour
{
  public enum ButtonType
  {
    Revive,
    SlowMotion,
    NumTypes,
  }

  public ButtonType type;
  public int price;
}
