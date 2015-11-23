using UnityEngine;
using System.Collections;

public class FFTVisualize : MonoBehaviour
{

  // Use this for initialization
  public AudioSource audioPlayer;
  public FFTWindow window;
  public int samples = 1024;
  public Vector3 multiplier = new Vector3(1.0f, 1.0f, 1.0f);

	void Start ()
  {
    audioPlayer = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update ()
  {
    float[] spectrum = new float[samples];
    audioPlayer.GetSpectrumData(spectrum, 0, window);
    int i = 1;
    while (i < samples - 1)
    {
      //Debug.DrawLine(new Vector3(i - 1, spectrum[i] + 10, 0), new Vector3(i, spectrum[i + 1] + 10, 0), Color.red);
      //Debug.DrawLine(new Vector3(i - 1, Mathf.Log(spectrum[i - 1]) + 10, 2), new Vector3(i, Mathf.Log(spectrum[i]) + 10, 2), Color.cyan);

      Debug.DrawLine(
        new Vector3 (Mathf.Log(i - 1) * multiplier.x, spectrum[i - 1] - 10 * multiplier.y, 1 * multiplier.z),
        new Vector3(Mathf.Log(i) *multiplier.x, spectrum[i] - 10, 1) * multiplier.y,
        Color.green);
      Debug.DrawLine(
        new Vector3(Mathf.Log(i - 1), Mathf.Log(spectrum[i - 1]), 3),
        new Vector3(Mathf.Log(i), Mathf.Log(spectrum[i]), 3),
        Color.yellow);
      i++;
    }
  }
}
