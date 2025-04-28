using UnityEngine;
using System.Collections;

public class HealthStats : MonoBehaviour {
	public GameObject HeartOne;
	public GameObject HeartTwo;
	public GameObject HeartThree;
    public int lastHealth;
	void Start()
	{
		HeartOne.GetComponent<GUITexture>().pixelInset = new Rect(30,Screen.height * .9f,Screen.width / 25,Screen.width / 25);

		HeartTwo.GetComponent<GUITexture>().pixelInset = new Rect(30 + Screen.width / 20,Screen.height * .9f,Screen.width / 25,Screen.width / 25);

        HeartThree.GetComponent<GUITexture>().pixelInset = new Rect(30 + (Screen.width / 20) * 2, Screen.height * .9f, Screen.width / 25, Screen.width / 25);

        UpdateHealth();
	}
    void Update() 
    {
        if (SavedData.current.PlayerStats.Health != lastHealth)
        {
            UpdateHealth();
            lastHealth = SavedData.current.PlayerStats.Health;
        }
    }
	void UpdateHealth(){
		if(SavedData.current.PlayerStats.Health == 0)
		{
			HeartOne.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);
			HeartTwo.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);
			HeartThree.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);
		}
		if(SavedData.current.PlayerStats.Health == 1)
		{
			HeartOne.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
			HeartTwo.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);
			HeartThree.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);

		}
		if(SavedData.current.PlayerStats.Health == 2)
		{
			HeartOne.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
			HeartTwo.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
			HeartThree.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,.1f);

		}
		if(SavedData.current.PlayerStats.Health == 3)
		{
			HeartOne.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
			HeartTwo.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
			HeartThree.GetComponent<GUITexture>().color = new Color(HeartOne.GetComponent<GUITexture>().color.r,HeartOne.GetComponent<GUITexture>().color.g,HeartOne.GetComponent<GUITexture>().color.b,1f);
		}


	}
}
