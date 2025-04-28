using UnityEngine;
using System.Collections;

public class SoundController : MonoBehaviour {
    public AudioSource[] audsrc;
    public AudioSource ambientSounds;
	// Use this for initialization
	void Awake () 
    {
        ambientSounds = GameObject.Find("AtmosphereSounds").GetComponent<AudioSource>();
        onAudioChange();
        onMusicChange();
	}
    public void onMusicChange()
    {
        if (PlayerPrefs.GetInt("Music", 1) == 1)
        {
            ambientSounds.enabled = true;
        }
        else 
        {
            ambientSounds.enabled = false;
        }

    }
    public void onAudioChange()
    {
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        {
            for (int i = 0; i < audsrc.Length; i++)
            {
                audsrc[i].enabled = true;
            }
        }
        else
        {
            for (int i = 0; i < audsrc.Length; i++)
            {
                audsrc[i].enabled = false;
            }
        }

    }

}
