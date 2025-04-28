using UnityEngine;
using System.Collections;

public class ItemDescriptionText : MonoBehaviour {

    void Awake() 
    {
        x = 0;
        y = 0;
        z = 0;
        w = 0;
        h = 0;
    }
    void Start()
    {
        x = 0;
        y = 0;
        z = 0;
        w = 0;
        h = 0;
    }
    public static bool Animating
    {

        get 
        {
            if(x + y + z + w + h == 0)
            {
                return false;
            }
            else 
            {
                return true;
            }
        
        }

    }


    public static byte x = 0, y = 0, z = 0, w = 0, h = 0;

    public static IEnumerator AnimateText(string Question,float TimeBetweenLetters,TextMesh mesh)
    {
        x++;
        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            while (y != 0 || h != 0)
            {
                yield return new WaitForSeconds(.5f);
            }
            int i = 0;

            mesh.text = "";
            while (i < Question.Length)
            {
                mesh.text += Question[i];
                i++;
                yield return new WaitForSeconds(TimeBetweenLetters);
            }
        }
        else 
        {
            mesh.text = Question;
        }
        x--;

    }
    
    public static IEnumerator AnimateTextOut(float TimeBetweenLetters, TextMesh mesh)
    {
        y++;
        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            while (x != 0 || z != 0)
            {
                yield return new WaitForSeconds(.5f);
            }
            while (mesh.text.Length > 0)
            {
                mesh.text = mesh.text.Remove(mesh.text.Length - 1);
                yield return new WaitForSeconds(TimeBetweenLetters);
            }
        }
        else 
        {
            mesh.text = "";
        }
        y--;
    }

    public static IEnumerator AnimateText(string Question, float TimeBetweenLetters, GUIText mesh, AudioSource audsrc = null, AudioClip clip = null)
    {
        z++;
        int i = 0;

        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            while (y != 0 || h != 0)
            {
                yield return new WaitForSeconds(.5f);
            }
            mesh.text = "";
            while (i < Question.Length)
            {
                mesh.text += Question[i];
                if (audsrc != null)
                {
                    audsrc.PlayOneShot(clip);
                }
                i++;
                yield return new WaitForSeconds(TimeBetweenLetters);
            }
        }
        else 
        {
            mesh.text = Question;
        }
        z--;

    }
    public static IEnumerator AnimateTextSlowAtEnd(string Question, float TimeBetweenLetters, GUIText mesh,float SlowDownRate, int StartAtCharX, int EndAtCharY,bool BackToOriginalSpeedAtEndOfCharY = false,AudioSource audsrc = null, AudioClip clip = null)
    {
        w++;

        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            while (y != 0 || h != 0)
            {
                yield return new WaitForSeconds(.5f);
            }
            int i = 0;
            float timeBetweenLetters = TimeBetweenLetters;
            mesh.text = "";
            while (i < Question.Length)
            {
                if (i >= StartAtCharX && i < EndAtCharY)
                {
                    TimeBetweenLetters += SlowDownRate;
                }
                if (i >= EndAtCharY)
                {
                    TimeBetweenLetters = timeBetweenLetters;
                }
                mesh.text += Question[i];
                if (audsrc != null)
                {
                    audsrc.PlayOneShot(clip);
                }
                i++;
                yield return new WaitForSeconds(TimeBetweenLetters);
            }
        }
        else 
        {
            mesh.text = Question;
        }
        w--;

    }


    public static IEnumerator AnimateTextOut(float TimeBetweenLetters, GUIText mesh)
    {
        h++;
        if (PlayerPrefs.GetInt("Animations", 1) == 1)
        {
            while (x != 0 || z != 0)
            {
                yield return new WaitForSeconds(.5f);
            }
            while (mesh.text.Length > 0)
            {
                mesh.text = mesh.text.Remove(mesh.text.Length - 1);
                yield return new WaitForSeconds(TimeBetweenLetters);
            }
        }
        else 
        {
            mesh.text = "";
        }
        h--;
    }

  
}
