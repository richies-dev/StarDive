using UnityEngine;
using System.Collections;

public class PlayerStatsGUI : MonoBehaviour {

	public GUIText Money;

    public GUIText MoneyAmt;

	public GUIText Ammo;

	public int fontsize;

	public bool SetScale = false;

    public float scaleSize = 30;

    public float ScoreFontSizeModifier = 0;


	void Start()
    {

        fontsize = Mathf.RoundToInt((Screen.width + Screen.height) / scaleSize); 
        
        Money.fontSize = fontsize;

        Money.pixelOffset = new Vector2(30, Screen.height * .9f - fontsize * .5f);

        Money.text = ("Money : ");
        
        Ammo.fontSize = fontsize;
        
        Ammo.pixelOffset = new Vector2(30, Screen.height * .9f - fontsize * 1.5f);

        MoneyAmt.fontSize = fontsize + (int)ScoreFontSizeModifier;

        MoneyAmt.pixelOffset = new Vector2(Money.GetScreenRect().width + 30, Screen.height * .9f - fontsize * .5f);
	}

	void Update () {
        
        
        
        MoneyAmt.text =(" " + SavedData.current.PlayerStats.Money);

        if(SavedData.current.GunSelected == 0)
        {
            Ammo.text = ("Starter Ammo <color=lime>∞</color>");
            return;
        }
        else if (SavedData.current.GunSelected == 1)
        {

            if (SavedData.current.AdvancedTurret.Ammo > 10)
            {
                Ammo.text = ("Normal Ammo <color=lime>" + SavedData.current.AdvancedTurret.Ammo + "</color>");
            } 
            else if (SavedData.current.AdvancedTurret.Ammo <= 10)
            {

                if (SavedData.current.AdvancedTurret.Ammo > 5 )
                {
                    Ammo.text = ("Normal Ammo <color=yellow>" + SavedData.current.AdvancedTurret.Ammo + "</color>");
                }
                else 
                {
                    Ammo.text = ("Normal Ammo <color=red>" + SavedData.current.AdvancedTurret.Ammo + "</color>");
                }

            }

            return;
        }
        else if (SavedData.current.GunSelected == 2)
        {
            if (SavedData.current.LegendaryTurret.Ammo > 10)
            {
                Ammo.text = ("Legendary Ammo <color=lime>" + SavedData.current.LegendaryTurret.Ammo + "</color>");
            }
            else if (SavedData.current.LegendaryTurret.Ammo <= 10)
            {

                if (SavedData.current.LegendaryTurret.Ammo > 5)
                {
                    Ammo.text = ("Legendary Ammo <color=yellow>" + SavedData.current.LegendaryTurret.Ammo + "</color>");
                }
                else
                {
                    Ammo.text = ("Legendary Ammo <color=red>" + SavedData.current.LegendaryTurret.Ammo + "</color>");
                }

            }
            return;
        }
        else if (SavedData.current.GunSelected == 3)
        {
            if (SavedData.current.MissileLauncher.Ammo > 10)
            {
                Ammo.text = ("Missile Ammo <color=lime>" + SavedData.current.MissileLauncher.Ammo + "</color>");
            }
            else if (SavedData.current.MissileLauncher.Ammo <= 10)
            {

                if (SavedData.current.MissileLauncher.Ammo > 5)
                {
                    Ammo.text = ("Missile Ammo <color=yellow>" + SavedData.current.MissileLauncher.Ammo + "</color>");
                }
                else
                {
                    Ammo.text = ("Missile Ammo <color=red>" + SavedData.current.MissileLauncher.Ammo + "</color>");
                }

            }
            return;
        }

	}
    



}
