using UnityEngine;
using UnityEngine.UI;
using System.Collections;

[ExecuteInEditMode]
public class VignetteManager : MonoBehaviour 
{
  public Color VignetteColor = Color.black;

  public float IntensityBias = 0.5f;
  public float MinimumIntensity = 0.5f;
  public float MaximumIntensity = 1.0f;
  public float BlendSpeed = 1.0f;

  private float currentValue = 0f;
  private float targetValue = 0f;

  private float colorTime;
  private Color currentColor;
  private Color lastColor;
  private Color targetColor;

  private new Image renderer { get; set; }
  private Material vignette { get; set; }
  private int colorId { get; set; }

  // Use this for initialization
  void Start() 
  {
    renderer = GetComponent <Image> ();

    lastColor = targetColor = currentColor = VignetteColor;
    vignette = renderer.material;
    vignette.SetColor("_Color", currentColor);

    currentValue = targetValue = MinimumIntensity;
    vignette.SetFloat("_Intensity", MinimumIntensity);
  }

  float Bias(float _bias, float _value)
  {
    // Simple bias function y(x) = x^(log(B)/log(0.5))
    return Mathf.Pow(_value, Mathf.Log(_bias) / Mathf.Log(0.5f));
  }

  void Update ()
  {
//    while (true)
    {
      float rate = 1f / BlendSpeed * Time.deltaTime;

      if (currentValue == targetValue)
      {
        targetValue = Random.Range(MinimumIntensity, MaximumIntensity);
      }
      else
      {
        float dir = Mathf.Sign(targetValue - currentValue);
        currentValue += dir * rate;

        if (dir != Mathf.Sign(targetValue - currentValue))
        {
          currentValue = targetValue;
        }

        float intensity = Bias(IntensityBias, currentValue);
        vignette.SetFloat("_Intensity", intensity);
        //UnityEngine.Debug.Log("Current intensity " + intensity.ToString() + " target intensity " + targetValue.ToString());
      }

//      if (colorTime < 0f)
//      {
//        colorTime += rate;
//        currentColor = Color.Lerp(lastColor, targetColor, colorTime);
        vignette.SetColor("_Color", VignetteColor);
//      }
//      yield return new WaitForSeconds(BlendUpdateRate);
    }
  }

  public void SetVignetteColor(Color color)
  {
    lastColor = currentColor;
    targetColor = color;
    colorTime = 0f;
    VignetteColor = color;
  }
}