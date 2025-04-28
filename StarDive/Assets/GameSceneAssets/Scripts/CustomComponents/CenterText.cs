using UnityEngine;

public class CenterText : MonoBehaviour {

    public float ypos = 0;
    public float scaleFontSize;

    private int fontSize
    {
        get
        {
            return Mathf.RoundToInt((Screen.width + Screen.height) * scaleFontSize / 1000);
        }
    }
    public GUIText TextObject;

	void Start () {

        TextObject.fontSize = fontSize;

        TextObject.pixelOffset = new Vector2(Screen.width / 2,Screen.height / 2 + ypos);

	}

}
