using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public enum GameState
{

    IsDead, IsPlaying, IsPaused, IsInShop 

};

public class ActivityController : MonoBehaviour
{
    #region Variables
    public GameObject Shop;
	public GameObject PlayerOBJ;
    public GameObject ObjectPools;
    public GameObject Round;
    public GameObject Round2;
	public GameObject ShowPlayerHealthTextObject;
	public GameObject ShowPlayerHealthIconObject;
    public GameObject GameOverTextController;
	public static bool MakingGameOverLayerAppear = false;
	public static bool NewRound;
	public static bool ShowPlayersHealthLeft;
	public bool TappedToContinue;
	public Color ShowPlayerHealthLeftTextColor;
	public float EnablePlayerTimerShop = 1;
	public float EnablePlayerTimerEndGame = 1;
    public static GameState ThisGamestate;
    public static bool Paused = false;

    public static float StartScreenWidth
    {
        get;
        protected set;
    }

    public static float StartScreenHeight
    {
        get;
        protected set;
    }

    public NewEnemyNotification NewEnemyNotificationSystem = new NewEnemyNotification();
    public Notification notificationSystem;

    public fadingTexture blackFade;


    #endregion Variables
    public void Awake()
    {
        StartScreenHeight = Screen.height;
        StartScreenWidth = Screen.width;
    }
    public void Start()
    {
        blackFade.FadeOut = true;
        blackFade.StartFade = true;

        NewEnemyNotificationSystem.NotificationSystem = notificationSystem;
    }

    public static void ChangePositionOfGameObject(GameObject gameObject, Vector3 position)
    {
        gameObject.transform.localPosition = position;
    }

	void OnNewRound()
    {
        Round2.transform.position = Vector3.Lerp(Round2.transform.position, Round.transform.position + new Vector3(-2, 0, 0),Time.deltaTime * 5);
        if(SavedData.current.round != -1 && SavedData.current.round <= 50)
        {
            Round.GetComponent<TextMesh>().text = ("Round " + SavedData.current.round);

            Round2.GetComponent<TextMesh>().text = ("Round " + SavedData.current.round);
        }
        else 
        {
            if(SavedData.current.round == -1)
            {
                Round.GetComponent<TextMesh>().text = ("Test Drive");
                Round2.GetComponent<TextMesh>().text = ("Test Drive");
            }
            else 
            {
                Round.GetComponent<TextMesh>().text = ("Random Round #" + (SavedData.current.round - 50) + "\nRound " + SavedData.current.round);

                Round2.GetComponent<TextMesh>().text = ("Random Round #" + (SavedData.current.round - 50) + "\nRound " + SavedData.current.round);
            }
        }
		
		if(NewRound && NewEnemyNotification.AboutToShowNotification == false && NewEnemyNotification.ShowingNewEnemyNotification == false)
		{
            
			Round.transform.position = Vector3.Lerp(Round.transform.position,new Vector3(0,1,-5),Time.deltaTime * 4);
            
			if(Vector3.Distance(Round.transform.position,new Vector3(0,1,-5)) < .02f)
			{
							
				NewRound = false;
							
			}
            			
		}
		
		if(NewRound == false)
		{
						
			if(Round.transform.position.x != 30)
			{
				
				Round.transform.position = Vector3.Lerp(Round.transform.position,new Vector3(-30,1,-5),Time.deltaTime * 3);
				
				if(Vector3.Distance(Round.transform.position,new Vector3(-20,1,-5)) < .2f)
				{
					
					Round.transform.position = new Vector3(30,1,-5);
                    Round2.transform.position = new Vector3(30, 1, -5);
					
				}
				
			}
			
		}

	}
	
	void ShowPlayersHealth(){

		

		
		
		if(ShowPlayersHealthLeft)
		{

            ShowPlayerHealthTextObject.GetComponent<TextMesh>().text = ("X " + SavedData.current.PlayerStats.Health);

			if(ShowPlayerHealthLeftTextColor.a < 1)
			{
				
				ShowPlayerHealthLeftTextColor.a += Time.deltaTime;

                ShowPlayerHealthIconObject.GetComponent<Renderer>().material.color = ShowPlayerHealthLeftTextColor;

                ShowPlayerHealthTextObject.GetComponent<TextMesh>().color = ShowPlayerHealthLeftTextColor;
				
			}
			if(ShowPlayerHealthLeftTextColor.a >= 1)
			{
				
				ShowPlayersHealthLeft = false;
				
			}
			
		}

		if(ShowPlayersHealthLeft == false)
		{
			
			if(ShowPlayerHealthLeftTextColor.a > 0)
			{

                ShowPlayerHealthLeftTextColor.a -= Time.deltaTime; 
                
                ShowPlayerHealthIconObject.GetComponent<Renderer>().material.color = ShowPlayerHealthLeftTextColor;

                ShowPlayerHealthTextObject.GetComponent<TextMesh>().color = ShowPlayerHealthLeftTextColor;
				
			}
			
		}

	}
	
	void OnGameOver(){


		if(MakingGameOverLayerAppear)
		{

				GameOverTextController.GetComponent<EndGameText>()._isLerping = true;

				MakingGameOverLayerAppear = false;

                ThisGamestate = GameState.IsDead;

                SavedData.current = new SavedData(false);

                SaveLoad.Save();

		}

		if(ThisGamestate == GameState.IsDead)
        {

            if (GameOverTextController.GetComponent<EndGameText>().percentageComplete > .15f)
            {
                if(TappedToContinue == false)
                {
		            if(Input.anyKeyDown)
		            {

                        blackFade.FadeOut = false;
                        blackFade.StartFade = true;
                        TappedToContinue = true;
                
		            }
                }
            }
        }

        if (TappedToContinue == true)
        {

           if(blackFade.StartFade == false)
           {
               SceneManager.LoadScene(0);
               ThisGamestate = GameState.IsInShop;
           } 
           GameOverTextController.GetComponent<EndGameText>().ResetLerp();

        }

    }
				
	void ShopActivityTriggers(){

		if(Shop.activeSelf == true)
		{

			EnablePlayerTimerShop = 1;

            ThisGamestate = GameState.IsInShop;
			
		}

        if (ThisGamestate == GameState.IsDead || Shop.activeSelf == true)
        {

            if (ParalaxLayer.speedModifier < 3)
            {

                ParalaxLayer.speedModifier += Time.deltaTime;

            }

        }

		if(Shop.activeSelf == false)
		{
            if (ThisGamestate != GameState.IsDead)
            {

                if (ParalaxLayer.speedModifier > 1)
                {

                    ParalaxLayer.speedModifier -= Time.deltaTime;

                }

            }

			if(EnablePlayerTimerShop > 0){
				
				EnablePlayerTimerShop -= Time.deltaTime;
				
			}
			
			if(EnablePlayerTimerShop <= 0)
			{

                if (ThisGamestate != GameState.IsDead)
                {

                    ThisGamestate = GameState.IsPlaying;
                
                }
			
            }
			
		}

	}
	
	void Update(){

		ShopActivityTriggers ();

		OnGameOver ();
        
		ShowPlayersHealth ();

        if(ThisGamestate == GameState.IsPlaying && NewEnemyNotification.AboutToShowNotification == true)
        {
            NewEnemyNotificationSystem.ShowNewNotification();
        }


        if(ItemDescriptionText.Animating == false && NewEnemyNotification.ShowingNewEnemyNotification && NewEnemyNotificationSystem.NotificationSystem.ShowingTapToContinue)
        {
            if(Input.anyKey)
            {
                NewEnemyNotificationSystem.EndNotification();
            }
        }

	}

    void FixedUpdate()
    {

        OnNewRound();

    }

}












