using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class StoreButton : MonoBehaviour
{
  public Text priceText;
  public Text title;
  public Image icon;
  public Image iconCurrency;
  public Button button;
  public StoreButtonList.CurrencyType currencyType;
  public float price { get; set; }
}