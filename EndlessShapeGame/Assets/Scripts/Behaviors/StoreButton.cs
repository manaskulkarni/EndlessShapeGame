using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class StoreButton : CubiBase
{
  public string defaultPriceText;
  public string priceText { get; set; }
  public Text title;
  public Image icon;
  public Image iconCurrency;
  public Button button;
  public StoreButtonList.CurrencyType currencyType;
  public float price { get; set; }

  public override void cubiAwake ()
  {
    RegisterEvent ("ProductsLoaded", ((object sender, System.EventArgs msg) =>
    {
      var products = (msg as Message <Dictionary <string, StoreInterface.ProductTemplate>>).data;
      Debug.Log ("Products loading");
      if (products.ContainsKey (title.text))
      {
        priceText = products [title.text].Price;
      }
    }));
  }

  void OnProductsLoaded (Dictionary <string, StoreInterface.ProductTemplate> products)
  {
    Debug.Log ("Products loading");
    if (products.ContainsKey (title.text))
    {
      priceText = products [title.text].Price;
    }
  }
}