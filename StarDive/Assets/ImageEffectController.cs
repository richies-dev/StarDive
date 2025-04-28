using UnityEngine;
using System.Collections;
using UnityStandardAssets.ImageEffects;
public class ImageEffectController : MonoBehaviour {

    
    public BloomOptimized bloom;
    
    void Start() 
    {

        if (PlayerPrefs.GetInt("PostProcessing", 1) == 1)
        {
            bloom.enabled = true;
        }
        else
        {            
            bloom.enabled = false;
        }
    
    }
}
