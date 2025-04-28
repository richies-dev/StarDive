using UnityEngine;
using System.Collections;

public class AtmosphereSoundController : MonoBehaviour {
    public AudioClip[] Sounds;
    public AudioSource src;
    private AudioClip lastclip;
    private static AtmosphereSoundController instance;
    public bool start = true;
    void FadeTo (float to, float speed)
    {        

        if (Mathf.Abs(src.volume - to) >= .1f)
        {
            if (src.volume < to)
            {
                src.volume += speed * Time.deltaTime;
            }
            else
            {
                src.volume -= speed * Time.deltaTime;
            }
        }
        else 
        {
            return;
        }
    }
    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(this.gameObject);
    }
    void SwitchSound()
    {

        if(Sounds.Length == 1)
        {
            src.clip = Sounds[0];
            lastclip = Sounds[0];
            src.Play();
            return;
        }
        
        int randNum = Random.Range(0,Sounds.Length);
        if (lastclip != Sounds[randNum])
        {
            src.clip = Sounds[randNum];
            lastclip = Sounds[randNum];
            src.Play();
        }
    }
	
	// Update is called once per frame
	void Update () {
        if (start)
        {
            if (src.volume < .3f)
            {
                FadeTo(.7f, 1);
            }
        }
	    if(!src.isPlaying)
        {
            SwitchSound();
        }
        
	}
}
