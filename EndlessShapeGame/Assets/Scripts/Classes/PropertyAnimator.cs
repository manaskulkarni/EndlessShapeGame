using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;

public enum PropertyType
{
  Bool,
  Int,
  Float,
  Vector2,
  Vector3,
  Vector4,
  Color,
}

static public class Utility
{
  static public Dictionary <System.Type, PropertyType> types = new Dictionary<System.Type, PropertyType> ()
  {
    { typeof (bool), PropertyType.Bool },
    { typeof (int), PropertyType.Int },
    { typeof (float), PropertyType.Float },
    { typeof (Vector2), PropertyType.Vector2 },
    { typeof (Vector3), PropertyType.Vector3 },
    { typeof (Vector4), PropertyType.Vector4 },
    { typeof (Color), PropertyType.Color },
  };
}

public class PropertyAnimator : CubiBase, ISerializationCallbackReceiver
{
  [SerializeField]
  public MemberTypes memberType;
  [SerializeField]
  public string memberName;
  [SerializeField]
  private string memberValueFrom;
  [SerializeField]
  private string memberValueTo;
  [SerializeField]
  public bool defaultStartValue = false;
  [SerializeField]
  public string componentName;
  [SerializeField]
  public float duration;
  [SerializeField]
  public string eventListener;
  [SerializeField]
  public bool sendEventOnStart = false;
  [SerializeField]
  public string startEventName;
  [SerializeField]
  public bool sendEventOnFinish = false;
  [SerializeField]
  public string finishEventName;
  [SerializeField]
  public AnimationCurve curve = AnimationCurve.Linear (0.0f, 1.0f, 1.0f, 1.0f);
  #if UNITY_EDITOR
  [SerializeField]
  public int selectIndex = 0;
  [SerializeField]
  public int prevSelectIndex = -1;
  #endif

  private object target;

  public System.ValueType from;
  public System.ValueType to;

  private delegate void LerpHandle ();
  private LerpHandle lerp;

  private delegate object InvokeDel (object obj, object [] parameters);
  InvokeDel inv;

  public delegate T1 Action<T1, T2>(T1 obj, T2 index);
  public delegate void Action<T1, T2, T3>(T1 obj, T2 val, T3 index);

  public delegate object FieldGetter (object obj);
  public delegate void FieldSetter (object obj, object val);

  private Action <object, object []> propGetter { get; set; }
  private Action <object, object []> propSetter { get; set; }

  private FieldGetter fieldGetter { get; set; }
  private FieldSetter fieldSetter { get; set; }

  public override void cubiAwake ()
  {
    target = GetComponent (componentName);
    if (memberType == MemberTypes.Field)
    {
      var field = target.GetType ().GetField (memberName);

      MethodInfo get = field.GetType ().GetMethod ("GetValue", new Type[] {
        typeof(object)
      });
      fieldGetter = (FieldGetter)Delegate.CreateDelegate (typeof(FieldGetter), field, get);

      MethodInfo set = field.GetType ().GetMethod ("SetValue", new Type[] {
        typeof(object),
        typeof(object)
      });
      //
      fieldSetter = (FieldSetter)Delegate.CreateDelegate (typeof (FieldSetter), field, set);

      if (defaultStartValue)
        fieldSetter (target, from);
    }
    else
    {
      var prop = target.GetType ().GetProperty (memberName);

      MethodInfo get = prop.GetGetMethod ().GetType ().GetMethod ("Invoke", new Type[] {
        typeof(object),
        typeof(object[])
      });
      propGetter = (Action <object, object []>)Delegate.CreateDelegate (typeof(Action<object, object[]>), prop.GetGetMethod (), get);
//
      MethodInfo set = prop.GetSetMethod ().GetType ().GetMethod ("Invoke", new Type[] {
        typeof(object),
        typeof(object[])
      });
      propSetter = (Action <object, object []>)Delegate.CreateDelegate (typeof(Action<object, object[]>), prop.GetSetMethod (), set);

      if (defaultStartValue)
        propSetter (target, new object [] {from});
    }

    ChooseLerpHandle ();

    RegisterEvent (eventListener, (object sender, System.EventArgs e) =>
    {
      lerp ();
    });
  }

  private void ChooseLerpHandle ()
  {
    var type = Utility.types [from.GetType ()];

    switch (type)
    {
    case PropertyType.Int:
      lerp = () =>
      {
        StartCoroutine (IntLerp ());
      };
      break;
    case PropertyType.Bool:
      lerp = () =>
      {
        StartCoroutine (BoolLerp ());
      };
      break;
    case PropertyType.Float:
      lerp = () =>
      {
        StartCoroutine (FloatLerp ());
      };
      break;
    case PropertyType.Vector2:
      lerp = () =>
      {
        StartCoroutine (Vector2Lerp ());
      };
      break;
    case PropertyType.Vector3:
      lerp = () =>
      {
        StartCoroutine (Vector3Lerp ());
      };
      break;
    case PropertyType.Vector4:
      lerp = () =>
      {
        StartCoroutine (Vector4Lerp ());
      };
      break;
    case PropertyType.Color:
      lerp = () =>
      {
        StartCoroutine (ColorLerp ());
      };
      break;
    }
  }

  private IEnumerator FloatLerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (float)from;
    var end = (float)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Mathf.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter(target, Mathf.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator IntLerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (int)from;
    var end = (int)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Mathf.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter(target, Mathf.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator BoolLerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);
    
    var property = memberType == MemberTypes.Property;

    if (property)
      propSetter (target, new object [] { from });
    else
      fieldSetter(target, from);

    yield return new WaitForSeconds (duration);

    if (property)
      propSetter (target, new object [] { to });
    else
      fieldSetter(target, to);

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator Vector2Lerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (Vector2)from;
    var end = (Vector2)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Vector2.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter (target, Vector2.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator Vector3Lerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (Vector3)from;
    var end = (Vector3)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Vector3.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter (target, Vector3.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator Vector4Lerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (Vector4)from;
    var end = (Vector4)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Vector4.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter (target, Vector4.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }

    if (sendEventOnFinish)
      InvokeMessage (this, finishEventName);
  }

  private IEnumerator ColorLerp ()
  {
    if (sendEventOnStart)
      InvokeMessage (this, startEventName);

    var t = 0.0f;
    var speed = 1.0f / duration;
    var start = (Color)from;
    var end = (Color)to;
    var property = memberType == MemberTypes.Property;

    while (t < 1.0f)
    {
      t += Time.deltaTime * speed;
      if (property)
        propSetter (target, new object [] { Color.Lerp (start, end, t * curve.Evaluate (t)) });
      else
        fieldSetter (target, Color.Lerp (start, end, t * curve.Evaluate (t)));
      yield return null;
    }


    if (sendEventOnFinish)
    {
      InvokeMessage (this, finishEventName);
    }
  }

  #region ISerializationCallbackReceiver implementation

  private void SerializeValue (System.ValueType val, ref string valSerialized)
  {
    if (val == null)
    {
      valSerialized = "n";
      return;
    }

    var type = val.GetType ();

    if (type == typeof(int))
    {
      valSerialized = "i" + val.ToString ();
    }
    else if (type == typeof(bool))
    {
      valSerialized = "b" + val.ToString ();
    }
    else if (type == typeof(float))
    {
      valSerialized = "f" + val.ToString ();
    }
    else if (type == typeof(Color))
    {
      Color c = (Color)val;
      valSerialized = "c" + c.r + "|" +c.g + "|" + c.b + "|" + c.a;
    }
    else if (type == typeof(Vector3))
    {
      Vector3 v = (Vector3)val;
      valSerialized = "v" + v.x + "|" +v.y + "|" + v.z;
    }
  }

  private void DeserializeValue (ref System.ValueType val, string valSerialized)
  {
    if (valSerialized.Length == 0)
      return;
    char type = valSerialized[0];
    if (type == 'n')
    {
      val = null;
    }
    else if (type == 'i')
    {
      val = int.Parse (valSerialized.Substring (1));
    }
    else if (type == 'b')
    {
      val = bool.Parse (valSerialized.Substring (1));
    }
    else if (type == 'f')
    {
      val = float.Parse (valSerialized.Substring (1));
    }
    else if (type == 'c')
    {
      string[] v = valSerialized.Substring(1).Split('|');
      val = new Color (float.Parse (v [0]), float.Parse (v [1]), float.Parse (v [2]), float.Parse (v [3]));
    }
    else if (type == 'v')
    {
      string[] v = valSerialized.Substring(1).Split('|');
      val = new Vector3(float.Parse(v[0]), float.Parse(v[1]), float.Parse(v[2]));
    }
  }

  public void OnBeforeSerialize()
  {
    SerializeValue (from, ref memberValueFrom);
    SerializeValue (to, ref memberValueTo);
  }

  public void OnAfterDeserialize()
  {
    DeserializeValue (ref from, memberValueFrom);
    DeserializeValue (ref to, memberValueTo);
  }

  #endregion
}
