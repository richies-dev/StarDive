using UnityEngine;
using System.Collections;

public class FadingMaterial : MonoBehaviour {
public bool StartFade = false;
public float TimeToFade;
public Material TextureToFade;
public float alpha = 1;
public float FadeInFrom = 1;
public bool FadeOut = false;

    void Start()
    {
        
        TextureToFade = GetComponent<Renderer>().material;

    }
	void Update () {


        if (StartFade)
        {
            
            if (FadeOut == false)
            {

                if (alpha < FadeInFrom)
                {

                    alpha += 1 * Time.deltaTime;

                    TextureToFade.color = new Color(TextureToFade.color.r, TextureToFade.color.g, TextureToFade.color.b, alpha);
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

                    TextureToFade.color = new Color(TextureToFade.color.r, TextureToFade.color.g, TextureToFade.color.b, alpha);
                }
                else 
                {

                    StartFade = false;

                }

            }

        }

	}


}
