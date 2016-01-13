using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class StoreButton : MonoBehaviour
{
  public string defaultPriceText;
  public string priceText { get; set; }
  public Text title;
  public Image icon;
  public Image iconCurrency;
  public Button button;
  public StoreButtonList.CurrencyType currencyType;
  public float price { get; set; }

  void OnProductsLoaded (Dictionary <string, StoreInterface.ProductTemplate> products)
  {
    Debug.Log ("Products loading");
    if (products.ContainsKey (title.text))
    {
      priceText = products [title.text].Price;
    }
  }
}