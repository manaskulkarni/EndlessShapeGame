﻿using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;
using System.Collections.Generic;

public class StoreButtonList : MonoBehaviour
{
  public enum CurrencyType
  {
    Coins,
    Money,
    Ads,
  }

  [System.Serializable]
  public class StoreItem
  {
    public float price;
    public Sprite icon;
    public string description;
    public CurrencyType currencyType;
    public Button.ButtonClickedEvent onClick;
  }
  
  public Sprite iconCoinCurrency;
  public GameObject storeButtonPrefab;
  public List <StoreItem> itemList;

	// Use this for initialization
	void Awake ()
	{
//	  foreach (var item in itemList)
//    {
//      var go = Instantiate (storeButtonPrefab) as GameObject;
//      StoreButton button = go.GetComponent <StoreButton> ();
//      
//      if (item.currencyType == CurrencyType.Coins)
//      {
//        button.priceText.text = ""+item.price;
//        button.iconCurrency.enabled = true;
//        button.iconCurrency.sprite = iconCoinCurrency;
//      }
//      else if (item.currencyType == CurrencyType.Money)
//      {
//        button.priceText.text = "$ "+item.price+"";
//        button.iconCurrency.enabled = false;
//      }
//      
//      button.currencyType = item.currencyType;
//      button.price = item.price;
//
//      button.title.text = item.description;
//      button.icon.sprite = item.icon;
//      button.button.onClick.AddListener(() => { UIManager.inst.PurchaseItem(button); });
//      go.transform.SetParent (this.transform);
//      go.transform.localScale = Vector3.one;
//    }
    
    if (GetComponentInParent <ScrollSnapRect> ())
    {
      GetComponentInParent <ScrollSnapRect> ().enabled = true;
    }
	}
}
