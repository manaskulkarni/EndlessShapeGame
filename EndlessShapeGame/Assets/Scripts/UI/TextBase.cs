using UnityEngine;
using UnityEngine.UI;
using System.Collections;

[RequireComponent (typeof (Text))]
public class TextBase : CubiBase
{
  protected Text text { get; private set; }

  public override void cubiAwake ()
  {
    text = GetComponent <Text> ();
  }
}