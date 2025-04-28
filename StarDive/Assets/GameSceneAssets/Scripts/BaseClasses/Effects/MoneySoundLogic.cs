using UnityEngine;
using System.Collections;

public class MoneySoundLogic : MonoBehaviour {

    public AudioClip BoughtItem;

    private int LastMoney;

    public AudioSource AudSrc;

	void Start () {
        LastMoney = SavedData.current.PlayerStats.Money;
	}
	void Update () 
    {
        if(ActivityController.ThisGamestate != GameState.IsDead)
        {
    
            if(LastMoney != SavedData.current.PlayerStats.Money)
            {
                if(LastMoney > SavedData.current.PlayerStats.Money)
                {
                    AudSrc.PlayOneShot(BoughtItem);
                }
                else 
                {
                
                }
                LastMoney = SavedData.current.PlayerStats.Money;
            }

        }
        else
        {
            LastMoney = SavedData.current.PlayerStats.Money;        
        }
	
	}

}
