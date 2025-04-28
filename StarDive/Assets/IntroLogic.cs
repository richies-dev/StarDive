using UnityEngine;
using System.Collections;

public class IntroLogic : MonoBehaviour {

    public static bool ShowingIntro = true;
    public fadingTexture blackFade;
    public GUIText storyText;
    private int storyIndex = 0;
    private bool doneTyping 
    {
        get 
        {
            if(hasTyped && !ItemDescriptionText.Animating)
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
        
    }
    public GUIText tapToContinue;
    private bool hasTyped = false;
    public AudioSource audsrc;
    public AudioClip continueSound;
    public AtmosphereSoundController ambientSounds;
    private float startTimer = 2f;
    public float scaleFontSize;
    public AudioClip typeSound;
    public bool overridePlayerPref = false;
    private int fontSize
    {
        get
        {
            return Mathf.RoundToInt((Screen.width + Screen.height) * scaleFontSize / 1000);
        }
    }
    void Start() 
    {
        if (PlayerPrefs.GetInt("Intro", 1) == 1 ||overridePlayerPref)
        {
            ShowingIntro = true;
        }
        else
        {
            ShowingIntro = false;        
        }
        tapToContinue.pixelOffset = new Vector2(Screen.width - 20,20);
        tapToContinue.fontSize = fontSize;
    }
    void Update()
    {
        if (startTimer > 0)
        {
            startTimer -= Time.deltaTime;
            return;
        }
        if(hasTyped == false)
        {
            switch(storyIndex)
            {

                case 0:
                    StartCoroutine(ItemDescriptionText.AnimateText("So it begins...", .02f, storyText,audsrc,typeSound));
                    break;
                case 1:
                    StartCoroutine(ItemDescriptionText.AnimateText("The Asteroids are here, there's no time to waste.", .02f, storyText, audsrc, typeSound));
                    break;
                case 2:
                    StartCoroutine(ItemDescriptionText.AnimateText("The Space Intel's main mission has failed.\nTheir space ship has lost all contact with us.", .02f, storyText, audsrc, typeSound));
                    break;
                case 3:
                    StartCoroutine(ItemDescriptionText.AnimateTextSlowAtEnd("We must strive forward and try our best.\nThat is our only duty...\n\nThat is our only hope.", .02f, storyText, .3f, 63, 65, true, audsrc, typeSound));
                    break;
                case 4:
                   StartCoroutine(ItemDescriptionText.AnimateText("We must succeed.", .04f, storyText, audsrc, typeSound));
                   break;
                    
            }

            hasTyped = true;
        
        }

        if(doneTyping)
        {
            tapToContinue.gameObject.SetActive(true);
        }
        else 
        {
            tapToContinue.gameObject.SetActive(false);
        }

        if(Input.anyKeyDown && doneTyping)
        {
            if(storyIndex < 4)
            {
                storyIndex++;
                hasTyped = false;
            }
            else
            {
                PlayerPrefs.SetInt("Intro", 0);
                PlayerPrefs.Save();
                ShowingIntro = false;
                ambientSounds.start = true;
            }
            audsrc.PlayOneShot(continueSound);
        }
        if (ShowingIntro == false)
        {
            StartMenuGUI.mainMenu = StartMenuGUI.Menu.Main;
            blackFade.FadeOut = true;
            blackFade.StartFade = true;
            this.gameObject.SetActive(false);
        }
    }
}
