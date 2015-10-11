using UnityEngine;
using System.Collections;

public class Utils
{
  
  static public Color RandomColor (Color minColor, Color maxColor)
  {
    return new Color
      (
        Random.Range (minColor.r, maxColor.r),
        Random.Range (minColor.g, maxColor.g),
        Random.Range (minColor.b, maxColor.b),
        Random.Range (minColor.a, maxColor.a)
        );
  }
  
  static public Color RandomColor (bool opaque = false)
  {
    return new Color
      (
        Random.Range (0.0f, 1.0f),
        Random.Range (0.0f, 1.0f),
        Random.Range (0.0f, 1.0f),
        opaque ? 1.0f : Random.Range (0.0f, 1.0f)
        );
  }

  static public Vector2 RandomVector2 (Vector2 minVector, Vector2 maxVector)
  {
    return new Vector2
      (
        Random.Range (minVector.x, maxVector.x),
        Random.Range (minVector.y, maxVector.y)
        );
  }

  static public Color Color255 (float r, float g, float b, float a)
  {
    return new Color
      (
        r / 255.0f,
        g / 255.0f,
        b / 255.0f,
        a / 255.0f
        );
  }
  
  static public Color ClampColor (Color value, Color min, Color max)
  {
    return new Color
      (
        Mathf.Clamp (value.r, min.r, max.r),
        Mathf.Clamp (value.g, min.g, max.g),
        Mathf.Clamp (value.b, min.b, max.b),
        Mathf.Clamp (value.a, min.a, max.a)
        );
  }
  
  static public Vector2 ClampVector2 (Vector2 value, Vector2 min, Vector2 max)
  {
    return new Vector2
      (
        Mathf.Clamp (value.x, min.x, max.x),
        Mathf.Clamp (value.y, min.y, max.y)
        );
  }
  
  static public Vector3 ClampVector3 (Vector3 value, Vector3 min, Vector3 max)
  {
    return new Vector3
      (
        Mathf.Clamp (value.x, min.x, max.x),
        Mathf.Clamp (value.y, min.y, max.y),
        Mathf.Clamp (value.z, min.z, max.z)
        );
  }
  
  static public Vector3 ClampVector4 (Vector4 value, Vector4 min, Vector4 max)
  {
    return new Vector4
      (
        Mathf.Clamp (value.x, min.x, max.x),
        Mathf.Clamp (value.y, min.y, max.y),
        Mathf.Clamp (value.z, min.z, max.z),
        Mathf.Clamp (value.w, min.w, max.w)
        );
  }
  
}