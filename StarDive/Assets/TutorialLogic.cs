using UnityEngine;
using System.Collections;

public class TutorialLogic : MonoBehaviour {

    public Notification NotificationSystem;

    public Texture[] HelpTextures;

    public bool Show = false;

    public ShopGUI shop;

    public GameObject[] MoneyGuiText;

    public GameObject[] LivesGUITexture;

    public int scaleFontSize;
    
    private int fontsize
    {
        get
        {
            return Mathf.RoundToInt((ActivityController.StartScreenWidth + ActivityController.StartScreenHeight) * scaleFontSize / 1000); 
        }
    }

    private bool ShownTapToShoot = false;

    private float timer = 1;

    public int NotificationIndex = 0;

    bool Timer() 
    {
        bool x = false;

        if (timer > 0)
        {
            timer -= Time.deltaTime;

        }
        else
        {
            if(ItemDescriptionText.Animating == false)
            {
                x = true;
            }
        }

        return x;
    }
    void Start() 
    {
        if (SavedData.current.ShowTutorial == false)
        {
            this.enabled = false;
        }
    }
	void Update () {

        if (NotificationSystem != null)
        {
            if (SavedData.current.ShowTutorial == true)
            {
                if(Enemy.EnemyStaticSpeed == 0)
                {
                    if(ShownTapToShoot == false)
                    {

                        NotificationSystem.Text.anchor = TextAnchor.MiddleRight;

                        NotificationSystem.SubText.anchor = TextAnchor.MiddleRight;

                        NotificationSystem.NewNotification(null, "Tap To Shoot; Hold for Automatic", true, null, fontsize, new Vector2(ActivityController.StartScreenWidth - ActivityController.StartScreenWidth / 20, ActivityController.StartScreenHeight / 2 * 1.7f), false, false,0, true, (int)(fontsize / 1.5f), "Aim At the Rock and hit it to progress", new Vector2(ActivityController.StartScreenWidth - ActivityController.StartScreenWidth / 20, ActivityController.StartScreenHeight / 2 * 1.7f - fontsize * 1.3f));
                        

                        ShownTapToShoot = true;
                    }                   

                }
                if(NotificationIndex == 2)
                {
                    shop.ChangeItemImagePosition(4, new Vector3(0, 0, 0));
                    shop.ChangeItemTextPosition(4, new Vector3(0, 0, 1));

                    shop.ChangeItemImagePosition(2, new Vector3(0, 0, 0));
                    shop.ChangeItemTextPosition(2, new Vector3(0, 0, 1));
                   
                }
                if (NotificationIndex == 1 && SavedData.current.round == 0)
                {

                    NotificationSystem.KillNotification();

                    timer = 1f;
                    SaveLoad.Save();
                    NotificationIndex++;

                }
                if (NotificationIndex == 2 && NotificationSystem.showingNotification() == false && Timer())
                {
                    NotificationSystem.Text.anchor = TextAnchor.MiddleCenter;
                    NotificationSystem.SubText.anchor = TextAnchor.MiddleCenter;
                    NotificationSystem.NewNotification(null, "You May have noticed your Money has increased by 1", true, null, fontsize, new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f), true, true, 2, true, (int)(fontsize / 1.5f), "You Get Paid By the Government for destroying Asteroids", new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f - fontsize * 1.3f));

                    NotificationIndex++;
                    timer = 1f;
                    Enemy.EnemyStaticSpeed = 1;
                }
                if (NotificationIndex == 3 && NotificationSystem.showingNotification() == false && Timer())
                {
                    ActivityController.ChangePositionOfGameObject(MoneyGuiText[0], new Vector3(0, 0, 0));

                    ActivityController.ChangePositionOfGameObject(MoneyGuiText[1], new Vector3(0, 0, 0));

                    LivesGUITexture[0].transform.localPosition = new Vector3(0, 0, 3);
                    LivesGUITexture[1].transform.localPosition = new Vector3(0, 0, 3);
                    LivesGUITexture[2].transform.localPosition = new Vector3(0, 0, 3);

                    NotificationSystem.SubText.anchor = TextAnchor.UpperCenter;

                    NotificationSystem.NewNotification(null, "Every Time Your ship gets hit by an asteroid,\nYou will lose a life.", true, null, fontsize, new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f), true, true, 2, true, (int)(fontsize / 1.5f), "\nYou have three lives total.\nIf you have no lifes left, it's game over.", new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f - fontsize * 1.3f));

                    NotificationIndex++;
                    
                    timer = 1f;
                    
                }
                //the reason this works is because if the first is false, it wont check the rest, therefor it wont run the Timer() method.
                if (NotificationIndex == 4 && NotificationSystem.showingNotification() == false && Timer())
                {
                    ActivityController.ChangePositionOfGameObject(LivesGUITexture[0], new Vector3(0, 0, 0));
                    ActivityController.ChangePositionOfGameObject(LivesGUITexture[1], new Vector3(0, 0, 0));
                    ActivityController.ChangePositionOfGameObject(LivesGUITexture[2], new Vector3(0, 0, 0));
                    shop.ChangeItemImagePosition(9, new Vector3(0, 0, 3));

                    NotificationSystem.NewNotification(null, "Tap the 'Next Round' Button \nto Start The Next Round", true, null, fontsize, new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f), true, true, 2, true, (int)(fontsize / 1.5f), "This is all That I, the ex captain, knows about the ship.\nThe Rest You need to find out by yourself.\n\nGood Luck!", new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 2f - fontsize * 2f));
                   
                    NotificationIndex++;
                    timer = 1f;

                }
                if (NotificationIndex >= 5 && NotificationSystem.showingNotification() == false && Timer())
                {
                    SavedData.current.ShowTutorial = false;
                    SaveLoad.Save();
                    SavedData.current.PlayerStats.Money = 0;
                    ActivityController.Paused = false;
                }
                if(Show && Timer())
                {

                 // float size = ActivityController.StartScreenHeight / 7;

                   // float padding = size / 6;

                    ActivityController.ChangePositionOfGameObject(MoneyGuiText[0], new Vector3(0,0,3));

                    ActivityController.ChangePositionOfGameObject(MoneyGuiText[1], new Vector3(0, 0, 3));

                    shop.ChangeItemImagePosition(4, new Vector3(0, 0, 2));
                    shop.ChangeItemTextPosition(4, new Vector3(0, 0, 3));

                    shop.ChangeItemImagePosition(2, new Vector3(0, 0, 2));
                    shop.ChangeItemTextPosition(2, new Vector3(0, 0, 3));

                    #region New Notification

                    NotificationSystem.Text.anchor = TextAnchor.MiddleCenter;
                    NotificationSystem.SubText.anchor = TextAnchor.MiddleCenter;

                    NotificationIndex++;
                        NotificationSystem.NewNotification
                        (                    
                            HelpTextures, 
                            "Use Money to Buy Upgrades, Ammo,\nand new Turrets In the Shop!",
 
                            true,
                            new Rect[] 
                            { 
                                //new Rect(
                                ///*x*/shop.Items[2].GuiTextureStored.pixelInset.x - size - padding,
                                ///*y*/shop.Items[2].GuiTextureStored.pixelInset.y + shop.Items[2].GuiTextureStored.pixelInset.height + padding,
                                ///*w*/size,
                                ///*h*/size
                                //), 
                                //new Rect(
                                ///*x*/shop.Items[4].GuiTextureStored.pixelInset.x + shop.Items[4].GuiTextureStored.pixelInset.width + padding,
                                ///*y*/shop.Items[4].GuiTextureStored.pixelInset.y + shop.Items[4].GuiTextureStored.pixelInset.height + padding,
                                ///*w*/size,
                                ///*h*/size
                                //), 
                                //new Rect(
                                ///*x*/MoneyGuiText[0].GetComponent<GUIText>().GetScreenRect().xMax + padding,
                                ///*y*/MoneyGuiText[0].GetComponent<GUIText>().GetScreenRect().yMin + MoneyGuiText[0].GetComponent<GUIText>().GetScreenRect().height / 2 - size / 2,
                                ///*w*/size,
                                ///*h*/size
                                //) 
                            },
                            fontsize, 
                            new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 3 * 1.8f),
                            //new Vector2(MoneyGuiText[0].GetComponent<GUIText>().GetScreenRect().xMax + size * 1.2f, MoneyGuiText[0].GetComponent<GUIText>().GetScreenRect().y),
                            true,
                            true

                        );

                    #endregion New Notification

                    Show = false;

                }
                if (NotificationSystem.ShowingTapToContinue)
                {
                    if (Input.anyKey)
                    {
                        if(NotificationIndex == 1)
                        {                        
                            shop.StartNextRound();
                        }
                        
                        NotificationSystem.HideTapToContinue();
                        //ActivityController.Paused = false;
                        NotificationSystem.KillNotification();
                        NotificationSystem.BlackFade.FadeOut = true;
                        NotificationSystem.BlackFade.StartFade = true;
                    }
                }
            }
        }
	}

}
