using UnityEngine;
public class FullScreenGuiTexture : MonoBehaviour {
	void Start() {
        GetComponent<GUITexture>().pixelInset = new Rect(0,0,Screen.width,Screen.height);
	}
}
