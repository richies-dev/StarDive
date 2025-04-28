using UnityEngine;
using System.Collections;

public class AnimateFrames : MonoBehaviour {

	public float TimeUntilNextFrame = 1f;

	public float OffsetValue;

	public float OffsetLimit;

	public float AddToOffsetValue;

	public Material SheetToAnimate;

    public bool animeX = true;

		
	void OnEnable(){
        if(SheetToAnimate == null)
        {
		    SheetToAnimate = GetComponent<Renderer> ().material;
        }
		StartCoroutine (Animate());	

	}
	IEnumerator Animate()
	{
        if(animeX == true){
            if(GetComponent<AnimateFrames>().enabled == true){

		        if (OffsetValue >= OffsetLimit) 
		        {
			        OffsetValue = 0;                
		        }


		        if(OffsetValue < OffsetLimit)
		        {
			        OffsetValue += AddToOffsetValue;
		        }


		        yield return new WaitForSeconds(TimeUntilNextFrame);

		        StartCoroutine (Animate());
            }
        }
        else 
        {
            if (GetComponent<AnimateFrames>().enabled == true)
            {

                if (OffsetValue < OffsetLimit)
                {
                    OffsetValue += AddToOffsetValue;
                }

                SheetToAnimate.mainTextureOffset = new Vector2(0, OffsetValue);
                if (OffsetValue >= OffsetLimit)
                {
                    OffsetValue = 0;
                }



                yield return new WaitForSeconds(TimeUntilNextFrame);

                StartCoroutine(Animate());
            }
        }

        SheetToAnimate.mainTextureOffset = new Vector2(OffsetValue, 0);
    }


}
