using UnityEngine;
using System.Collections;

public class Notification : MonoBehaviour {
   
    public GUITexture[] Textures;
    
    public GUIText Text;

    public GUIText SubText;
    
    public GUIText TapToContinue;

    public bool kill = false;

    public bool ShowingTapToContinue = false;

    public fadingTexture BlackFade;

    public AudioSource audsrc;

    public AudioClip continuesound;

    public void ShowImages() 
    {
        for (int i = 0; i < Textures.Length; i++)
        {
            Textures[i].enabled = true;
        }
    }
    public void SetRectOfImage(int IndexNumber,Rect NewPosition) 
    {
        Textures[IndexNumber].pixelInset = NewPosition;
    }
    public void ShowSpecificImage(int indexNumber) 
    {
        Textures[indexNumber].enabled = true;    
    }
    public void ShowText() 
    {
        Text.enabled = true;
    }
    public void ShowAll()
    {
        ShowText();
        ShowImages();
        
    }
    public void SetImagesToNull() 
    {
        for (int i = 0; i < Textures.Length; i++ )
        {
            Textures[i].texture = null;
        }
    }
    public void HideImages() 
    {
        for (int i = 0; i < Textures.Length; i++)
        {
            Textures[i].enabled = false;
        }
    }
    public void HideText() 
    {
        Text.enabled = false;
    }
    public void HideAll() 
    {
        HideText();
        HideImages();
    }
    public void ChangeImage(int indexNumber, Texture newTexture) 
    {

        Textures[indexNumber].texture = newTexture;

    }
    public void ChangeText(string text, GUIText x) 
    {
        StopCoroutine("ItemDescriptionText.AnimateTextOut");
        StartCoroutine(ItemDescriptionText.AnimateText(text,.01f,x));

    }
    public void EraseText(GUIText x) 
    {
        
        StartCoroutine(ItemDescriptionText.AnimateTextOut(.01f, x));
        StopCoroutine("ItemDescriptionText.AnimateText");
        StopCoroutine("ItemDescriptionText.AnimateTextSlowAtEnd");
    
    }
    public void ChangeTutorialTextDimensions(int size,Vector2 position, GUIText x) 
    {

        x.pixelOffset = position;
        x.fontSize = size;
        
    }
   public  bool showingNotification() 
    {
        bool x = true;

            if (Text.text == "" && SubText.text == "" && ItemDescriptionText.Animating == false)
            {
                x = false;
            }        


        return x;
    }


    public void NewNotification(/*3 textures to change or less*/Texture[] NewTextures, string newText, bool Show, Rect[] TextureRects,int textSize,Vector2 textPosition, bool PauseGame = false, bool Background = false,float timeToWaitUntilTap = 2 , bool ShowSubText = false, int SubTextSize = 0, string SubTextString = "",Vector2 SubTextPosition = default(Vector2)) 
    {
        TapToContinue.fontSize = Mathf.RoundToInt((ActivityController.StartScreenWidth + ActivityController.StartScreenHeight) * 20 / 1000);
        TapToContinue.pixelOffset = new Vector2(10, 10);
        HideTapToContinue();
        if(Show)
        {


            SetImagesToNull();

            ChangeText(newText,Text);

            ChangeTutorialTextDimensions(textSize,textPosition,Text);

            if (ShowSubText)
            {
                ChangeText(SubTextString, SubText);

                ChangeTutorialTextDimensions(SubTextSize, SubTextPosition, SubText);
            }
            if(NewTextures != null && TextureRects != null)
            {
                for (int i = 0; i < NewTextures.Length; i++)
                {

                    ChangeImage(i, NewTextures[i]);

                }
                for (int i = 0; i < TextureRects.Length; i++ )
                {

                    SetRectOfImage(i,TextureRects[i]);
            
                }

            }
            ShowAll();


        }
        else 
        {

            SetImagesToNull();

            ChangeText(newText,Text);

            for (int i = 0; i < NewTextures.Length; i++)
            {

                ChangeImage(i, NewTextures[i]);

            }


        }
        if(PauseGame)
        {
           StartCoroutine(ShowTapToContinue(timeToWaitUntilTap));
        }
        if(Background)
        {
            BlackFade.FadeOut = false;
            BlackFade.StartFade = true;
        }



    }

    public void KillNotification() 
    {


        EraseText(Text);

        EraseText(SubText);

        HideImages();
    
    }
    
    public IEnumerator ShowTapToContinue(float timeToWait) 
    {
        ActivityController.Paused = true;
        while(ItemDescriptionText.Animating)
        {
            yield return new WaitForSeconds(.5f);
        }
        TapToContinue.enabled = true;
        ShowingTapToContinue = true;
    }

    public void HideTapToContinue() 
    {
        ShowingTapToContinue = false;
        TapToContinue.enabled = false;
        audsrc.PlayOneShot(continuesound);
    }



}



