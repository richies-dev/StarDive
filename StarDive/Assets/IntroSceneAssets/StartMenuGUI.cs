using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System;

public class StartMenuGUI : MonoBehaviour {

    public GameObject MainMenuParent;
    public GameObject CreditsParent;
    public GameObject OptionsParent;

    public GUITexture playButtonTexture;
    public GUITexture optionsButtonTexture;
    public GUITexture creditsButtonTexture;

    public GUITexture creditsContainer;
    public GUITexture creditsBackButton;

    public GUITexture optionsCheckBox1;
    public GUITexture optionsCheckBox2;
    public GUITexture optionsCheckBox3;
    public GUITexture optionsCheckBox4;
    public GUITexture optionsContainer;
    public GUITexture optionsBackButton;
    //public GUITexture optionsResetButton;


    public GUIText CreditText;


    public GUIText optionText1;
    public GUIText optionText2;
    public GUIText optionText3;
    public GUIText optionText4;

    public Texture checkBoxUnchecked;
    public Texture checkBoxChecked;

    public enum Menu 
    {
        Options,
        Credits,
        Main,
        NotShowing
    }

    public bool HitPlay = false;
    public fadingTexture blackFade;
    
    public AudioSource audsrc;
    public AudioClip changeMenuSound;
    public AudioClip playSound;
    public AudioClip toggleSound;

    public static Menu mainMenu = Menu.NotShowing;

    private Menu LastMenu; 
    
    private float buttonTimer = .5f;

    private bool ButtonTimer()
    {
        if (buttonTimer > 0)
        {
            buttonTimer -= Time.deltaTime;
            return false;
        }
        else
        {
            return true;
        }
    }

    private bool CanPressButton 
    {
        get 
        {
            if(ButtonTimer() && !HitPlay)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
    }

    public float scaleFontSize;

    private int fontSize
    {
        get
        {
            return Mathf.RoundToInt((Screen.width + Screen.height) * scaleFontSize / 1000);
        }
    }

    public SoundController sounds;

    void SizeMainMenuElements() 
    {
        playButtonTexture.pixelInset = new Rect(Screen.width / 2 - Screen.height / 2, Screen.height / 2, Screen.height, Screen.height / 3);

        optionsButtonTexture.pixelInset = new Rect(Screen.width / 2, Screen.height / 2 - Screen.height / 3, Screen.height / 2, Screen.height / 3);

        creditsButtonTexture.pixelInset = new Rect(Screen.width / 2 - Screen.height / 2, Screen.height / 2 - Screen.height / 3, Screen.height / 2, Screen.height / 3);
    }

    void SizeOptionsElements()
    {

        optionsContainer.pixelInset = new Rect(Screen.width / 2 - Screen.height / 2, Screen.height / 2 - Screen.height / 1.5f / 2, Screen.height, Screen.height / 1.5f);

        optionsBackButton.pixelInset = new Rect(optionsContainer.pixelInset.xMax - ((Screen.height / 2)/2), Screen.height / 2 - Screen.height / 3, (Screen.height / 2)/2, (Screen.height / 3)/2);

        optionsCheckBox1.pixelInset = new Rect(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 - Screen.height / 3 / 4 * .4f, optionsContainer.pixelInset.yMin + Screen.height / 3 / 2 + Screen.height / 3 / 4 * .4f, Screen.height / 3 / 4, Screen.height / 3 / 4);

        optionsCheckBox2.pixelInset = new Rect(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 - Screen.height / 3 / 4 * .4f, optionsContainer.pixelInset.yMin + Screen.height / 3 / 2 + Screen.height / 3 / 4 * 1.8f, Screen.height / 3 / 4, Screen.height / 3 / 4);

        optionsCheckBox3.pixelInset = new Rect(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 - Screen.height / 3 / 4 * .4f, optionsContainer.pixelInset.yMin + Screen.height / 3 / 2 + Screen.height / 3 / 4 * 3.2f, Screen.height / 3 / 4, Screen.height / 3 / 4);

        optionsCheckBox4.pixelInset = new Rect(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 - Screen.height / 3 / 4 * .4f, optionsContainer.pixelInset.yMin + Screen.height / 3 / 2 + Screen.height / 3 / 4 * 4.6f, Screen.height / 3 / 4, Screen.height / 3 / 4);

        optionText1.fontSize = fontSize;
        optionText2.fontSize = fontSize;
        optionText3.fontSize = fontSize;
        optionText4.fontSize = fontSize;

        optionText1.pixelOffset = new Vector2(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 * 1.625f, 
            optionsCheckBox1.pixelInset.y + optionsCheckBox1.pixelInset.height / 2 );

        optionText2.pixelOffset = new Vector2(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 * 1.625f, 
            optionsCheckBox2.pixelInset.y + optionsCheckBox2.pixelInset.height / 2 );

        optionText3.pixelOffset = new Vector2(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 * 1.625f, 
            optionsCheckBox3.pixelInset.y + optionsCheckBox3.pixelInset.height / 2 );

        optionText4.pixelOffset = new Vector2(optionsContainer.pixelInset.xMax - Screen.height / 3 / 4 * 1.625f, 
            optionsCheckBox4.pixelInset.y + optionsCheckBox4.pixelInset.height / 2 );

        //optionsResetButton.pixelInset = new Rect(optionsContainer.pixelInset.xMin, Screen.height / 2 - Screen.height / 3, (Screen.height / 2), (Screen.height / 3) / 2);

    }

    void SizeCreditsElements()
    {
        creditsContainer.pixelInset = new Rect(Screen.width / 2 - Screen.height / 2, Screen.height / 2 - Screen.height / 1.5f / 2, Screen.height, Screen.height / 1.5f);
        creditsBackButton.pixelInset = new Rect(optionsContainer.pixelInset.xMax - ((Screen.height / 2) / 2), Screen.height / 2 - Screen.height / 3, (Screen.height / 2) / 2, (Screen.height / 3) / 2);
        CreditText.fontSize = Mathf.RoundToInt(creditsContainer.pixelInset.width / 24f);
        CreditText.pixelOffset = new Vector2(Screen.width / 2, creditsContainer.pixelInset.y + creditsContainer.pixelInset.height / 2 + (CreditText.lineSpacing * CreditText.fontSize));
    }

    void Start() 
    {
        SizeMainMenuElements();
        SizeOptionsElements();
        SizeCreditsElements();
        CheckBoxesUpdate();
    }

    void OnMenuChange() 
    {
        if (LastMenu != Menu.NotShowing && mainMenu != Menu.NotShowing)
        {
            audsrc.PlayOneShot(changeMenuSound);
        }
        if (mainMenu == Menu.Main)
        {
            MainMenuParent.SetActive(true);
            OptionsParent.SetActive(false);
            CreditsParent.SetActive(false);
            return;
        }
        else if (mainMenu == Menu.Options)
        {
            OptionsParent.SetActive(true);
            CreditsParent.SetActive(false);
            MainMenuParent.SetActive(false);
            return;
        }
        else if (mainMenu == Menu.Credits)
        {
            CreditsParent.SetActive(true);
            OptionsParent.SetActive(false);
            MainMenuParent.SetActive(false);
            return;
        }
        else if (mainMenu == Menu.NotShowing)
        {
            CreditsParent.SetActive(false);
            OptionsParent.SetActive(false);
            MainMenuParent.SetActive(false);
        }
    }

    void Update()
    {

        ButtonTimer();
        
        if(HitPlay)
        {
            if(blackFade.StartFade == false)
            {

                SceneManager.LoadScene(1);

            }
        }
        
        if(LastMenu != mainMenu)
        {
            OnMenuChange();

            LastMenu = mainMenu;
        
        }
        if (mainMenu == Menu.NotShowing)
        {
            mainMenu = IntroLogic.ShowingIntro ? Menu.NotShowing : Menu.Main;
            buttonTimer = 2f;
        }
        if(mainMenu == Menu.Main)
        {
            MainMenuShowing();
            return;
        }
        else if (mainMenu == Menu.Options)
        {
            OptionsShowing();
            return;
        }
        else if (mainMenu == Menu.Credits)
        {
            CreditsShowing();
        }

    }
    
    void MainMenuShowing() 
    {
        if(Input.GetMouseButton(0))
        {
            if (playButtonTexture.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                audsrc.PlayOneShot(playSound);
                blackFade.FadeOut = false;
                blackFade.StartFade = true;
                buttonTimer = .5f;
                HitPlay = true;
                return;
            }
            else if (optionsButtonTexture.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                buttonTimer = .5f;
                mainMenu = Menu.Options;
                return;
            }
            else if (creditsButtonTexture.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                buttonTimer = .5f;
                mainMenu = Menu.Credits;
                return;
            }
        }
    }

    void CheckBoxesUpdate() 
    {
        if (PlayerPrefs.GetInt("PostProcessing", 1) == 1)
        {
            optionsCheckBox1.texture = checkBoxChecked;
        }
        else
        {
            optionsCheckBox1.texture = checkBoxUnchecked;
        }
 
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        {
            optionsCheckBox2.texture = checkBoxChecked;
        }
        else
        {
            optionsCheckBox2.texture = checkBoxUnchecked;
        }
 
        if (PlayerPrefs.GetInt("Music", 1) == 1)
        {
            optionsCheckBox3.texture = checkBoxChecked;
        }
        else
        {
            optionsCheckBox3.texture = checkBoxUnchecked;
        }

        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            optionsCheckBox4.texture = checkBoxChecked;
        }
        else
        {
            optionsCheckBox4.texture = checkBoxUnchecked;
        }
    
    }

    void ResetAll() 
    {

        PlayerPrefs.DeleteAll();
        SavedData.current = new SavedData(true);
        CheckBoxesUpdate(); 
        sounds.onAudioChange();
        sounds.onMusicChange();
        PlayerPrefs.Save();
        SaveLoad.Save();
    }

    void OptionsShowing() 
    {
        if (Input.GetMouseButton(0))
        {
            if (optionsBackButton.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                mainMenu = Menu.Main;
                buttonTimer = .5f;
                return;
            }
           // else if (optionsResetButton.pixelInset.Contains(Input.mousePosition) && CanPressButton)
           // {
            //    ResetAll();
             //   audsrc.PlayOneShot(toggleSound); 
              //  buttonTimer = .5f;
            //}
            else if (optionsCheckBox1.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                audsrc.PlayOneShot(toggleSound);
                print("post ps");
                if (PlayerPrefs.GetInt("PostProcessing", 1) == 1)
                {
                    PlayerPrefs.SetInt("PostProcessing",0);
                }
                else
                {
                    PlayerPrefs.SetInt("PostProcessing", 1);
                }
                
                CheckBoxesUpdate();
                buttonTimer = .5f;
                PlayerPrefs.Save();
            }
            else if (optionsCheckBox2.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                print("sound");
                if (PlayerPrefs.GetInt("Sound",1) == 1)
                {
                    PlayerPrefs.SetInt("Sound", 0);
                }
                else
                {
                    PlayerPrefs.SetInt("Sound", 1);
                }

                sounds.onAudioChange();
                audsrc.PlayOneShot(toggleSound);
                CheckBoxesUpdate();
                buttonTimer = .5f;
                PlayerPrefs.Save();
            }
            else if (optionsCheckBox3.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                print("music");
                if (PlayerPrefs.GetInt("Music", 1) == 1)
                {
                    PlayerPrefs.SetInt("Music", 0);
                }
                else
                {
                    PlayerPrefs.SetInt("Music", 1);
                }

                sounds.onMusicChange();
                audsrc.PlayOneShot(toggleSound); 
                CheckBoxesUpdate();
                buttonTimer = .5f;
                PlayerPrefs.Save();
            }
            else if (optionsCheckBox4.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                print("anime");
                if (PlayerPrefs.GetInt("Animations", 1) == 1)
                {
                    PlayerPrefs.SetInt("Animations", 0);
                }
                else
                {
                    PlayerPrefs.SetInt("Animations", 1);
                }

                audsrc.PlayOneShot(toggleSound);
                CheckBoxesUpdate();
                buttonTimer = .5f;
                PlayerPrefs.Save();
            }
        }
    }

    void CreditsShowing() 
    {
        if (Input.GetMouseButton(0))
        {
            if (creditsBackButton.pixelInset.Contains(Input.mousePosition) && CanPressButton)
            {
                mainMenu = Menu.Main;
                buttonTimer = .5f;
                return;
            }
        }
    }

    

}
