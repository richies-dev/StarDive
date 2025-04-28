using UnityEngine;
using System.Collections;

public class fadingTexture : MonoBehaviour
{
    public bool StartFade = false;
    public float TimeToFade;
    public GUITexture TextureToFade;
    public float alpha = 1;
    public float FadeInFrom = 1;
    public bool FadeOut = false;

    void Start()
    {

        TextureToFade = GetComponent<GUITexture>();
        TextureToFade.pixelInset = new Rect(0,0,Screen.width,Screen.height);

    }
    void Update()
    {


        if (StartFade)
        {

            if (FadeOut == false)
            {

                if (alpha < FadeInFrom)
                {

                    alpha += 1 * Time.deltaTime;

                }
                else
                {

                    StartFade = false;

                }
            }
            else
            {

                if (alpha > 0)
                {

                    alpha -= 1 * Time.deltaTime;

                }
                else
                {

                    StartFade = false;

                }

            }

            TextureToFade.color = new Color(TextureToFade.color.r, TextureToFade.color.g, TextureToFade.color.b, alpha);

        }

    }


}
