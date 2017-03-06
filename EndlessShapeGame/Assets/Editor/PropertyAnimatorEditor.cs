using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;

static public class PUtils
{
  static public void FloatField (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (float))
      val = 0.0f;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.FloatField(name, (float)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void FloatField (string name, ref float val)
  {
    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.FloatField(name, val);
    EditorGUILayout.EndHorizontal();
  }

  static public void BoolField (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (bool))
      val = false;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.Toggle(name, (bool)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void BoolField (string name, ref bool val)
  {
    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.Toggle(name, val);
    EditorGUILayout.EndHorizontal();
  }

  static public void IntField (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (int))
      val = 0;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.IntField(name, (int)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void EnumField (string name, ref System.Enum val)
  {
    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.EnumPopup(name, val);
    EditorGUILayout.EndHorizontal();
  }

  static public void Vector2Field (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (Vector2))
      val = Vector2.zero;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.Vector2Field(name, (Vector2)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void Vector3Field (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (Vector3))
      val = Vector3.zero;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.Vector3Field(name, (Vector3)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void Vector4Field (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (Vector4))
      val = Vector4.zero;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.Vector4Field(name, (Vector4)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void ColorField (string name, ref System.ValueType val)
  {
    if (val == null || val.GetType () != typeof (Color))
      val = Color.white;

    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.ColorField(name, (Color)val);
    EditorGUILayout.EndHorizontal();
  }

  static public void CurveField (string name, ref AnimationCurve val)
  {
    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.CurveField(name, val);
    EditorGUILayout.EndHorizontal();
  }

  static public void TextField (string name, ref string val)
  {
    EditorGUILayout.BeginHorizontal();
    val = EditorGUILayout.TextField(name, val);
    EditorGUILayout.EndHorizontal();
  }
}

[CustomEditor(typeof(PropertyAnimator))]
public class PropertyAnimatorEditor : Editor 
{
  public override void OnInspectorGUI()
  {
    PropertyAnimator myTarget = (PropertyAnimator)target;

    List <string> variableNames = new List<string> ();
    List <string> componentNames = new List<string> ();
    List <object> variableValues = new List<object> ();
    List <MemberInfo> members = new List <MemberInfo> ();
//    Dictionary <object, PropertyInfo> properties = new Dictionary<object, PropertyInfo> ();

    foreach (var v in myTarget.GetComponents <Component> ())
    {
      const BindingFlags flags = /*BindingFlags.NonPublic | */BindingFlags.Public | 
        BindingFlags.Instance;
      var type = v.GetType ();
      foreach (var field in type.GetFields ())
      {
        if (Utility.types.ContainsKey (field.FieldType))
        {
          variableNames.Add (field.Name);
          componentNames.Add (v.GetType ().Name);
          variableValues.Add (field.GetValue (v));
          members.Add (field);

//          Debug.Log ("FIELD " + field.FieldType + " " + field.Name + " " + field.GetValue (v));
        }
      }
      foreach (PropertyInfo prop in type.GetProperties (flags))
      {
        if (prop.CanWrite && Utility.types.ContainsKey (prop.PropertyType))
        {
          variableNames.Add (prop.Name);
          componentNames.Add (v.GetType ().Name);
          variableValues.Add (prop.GetValue (v, null));
          members.Add (prop);

//          Debug.Log ("PROP " + prop.PropertyType + " " + prop.Name + " " + prop.GetValue (v, null));
        }
      }
    }

    string[] names = new string[variableNames.Count];
    for (int i = 0; i < names.Length; ++i)
    {
      names [i] = componentNames [i] + "." + variableNames [i];
    }

    PUtils.TextField ("Event Listener", ref myTarget.eventListener);

    var selectedIndex = myTarget.selectIndex = EditorGUILayout.Popup (myTarget.selectIndex, names);

    if (myTarget.prevSelectIndex != myTarget.selectIndex)
    {
      myTarget.from = null;
      myTarget.to = null;

      myTarget.memberType = members [selectedIndex].MemberType;
      myTarget.memberName = variableNames [selectedIndex];
      myTarget.componentName = componentNames [selectedIndex];

      myTarget.prevSelectIndex = selectedIndex;
    }

//    Debug.Log (variableValues [selectedIndex].GetType ());

    if (variableValues [selectedIndex].GetType () == typeof(float))
    {
      PUtils.FloatField ("Start Value", ref myTarget.from);
      PUtils.FloatField ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(bool))
    {
      PUtils.BoolField ("Start Value", ref myTarget.from);
      PUtils.BoolField ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(int))
    {
      PUtils.IntField ("Start Value", ref myTarget.from);
      PUtils.IntField ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(Vector2))
    {
      PUtils.Vector2Field ("Start Value", ref myTarget.from);
      PUtils.Vector2Field ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(Vector3))
    {
      PUtils.Vector3Field ("Start Value", ref myTarget.from);
      PUtils.Vector3Field ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(Vector4))
    {
      PUtils.Vector4Field ("Start Value", ref myTarget.from);
      PUtils.Vector4Field ("End Value", ref myTarget.to);
    }
    else if (variableValues [selectedIndex].GetType () == typeof(Color))
    {
      PUtils.ColorField ("Start Value", ref myTarget.from);
      PUtils.ColorField ("End Value", ref myTarget.to);
    }

    PUtils.BoolField ("Default Start Value", ref myTarget.defaultStartValue);
    PUtils.FloatField ("Duration", ref myTarget.duration);
    PUtils.CurveField ("Animation Curve", ref myTarget.curve);

    PUtils.BoolField ("Send Event On Start", ref myTarget.sendEventOnStart);
    if (myTarget.sendEventOnStart)
      PUtils.TextField ("Start Event", ref myTarget.startEventName);

    PUtils.BoolField ("Send Event On Finish", ref myTarget.sendEventOnFinish);
    if (myTarget.sendEventOnFinish)
      PUtils.TextField ("Finish Event", ref myTarget.finishEventName);
    //    myTarget.experience = EditorGUILayout.IntField("Experience", myTarget.experience);
    //    EditorGUILayout.LabelField("Level", myTarget.Level.ToString());
  }
}