using UnityEngine;
using System.Collections;

public class RockCrackSound : MonoBehaviour {
    public AudioSource audSrc;
    public AudioClip[] Clips;
    public AudioClip smallExplosion;
    public AudioClip BigExplosion;
    public AudioClip TeleportSound;
    public static RockCrackSound x;
    void Start() 
    {
        
        x = this.GetComponent<RockCrackSound>();
    }
    public static void PlayRandom() 
    {

        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        x.playRandom();
    
    }
    public static void PlaySmallExplosion()
    {
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        x.playSmallExplosion();

    }
    public static void PlayBigExplosion()
    {
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        x.playBigExplosion();

    }
    public static void PlayTeleportSound()
    {
        if (PlayerPrefs.GetInt("Sound", 1) == 1)
        x.playTeleportSound();

    }
    public void playRandom()
    {
        int i = Random.Range(0, Clips.Length);

        audSrc.PlayOneShot(Clips[i]);
        
    }
    public void playSmallExplosion()
    {
        audSrc.PlayOneShot(smallExplosion);
    }
    public void playBigExplosion()
    {
        audSrc.PlayOneShot(BigExplosion);
    }
    public void playTeleportSound()
    {
        audSrc.PlayOneShot(TeleportSound);
    }
}
