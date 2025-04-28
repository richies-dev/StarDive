using UnityEngine;
using System.Collections;

public class AreYouSureButtons : MonoBehaviour {

    public GameObject AcceptButton;
    
    public GameObject DeclineButton;
    
    public bool AnimateIn = false;
    
    public bool AnimateOut = false;
    
    private bool capableOfClicking = false;

    public bool Animating
    {

        get
        {
            if (AnimateIn == false && AnimateOut == false)
            {
                return false;
            }
            else 
            {
                return true;
            }
        }

    }

    void animateIn() 
    {
     
        AcceptButton.transform.position = Vector3.Lerp(AcceptButton.transform.position, new Vector3(2, AcceptButton.transform.position.y, AcceptButton.transform.position.z), Time.deltaTime * 10);
        
        DeclineButton.transform.position = Vector3.Lerp(DeclineButton.transform.position, new Vector3(-2, DeclineButton.transform.position.y, DeclineButton.transform.position.z), Time.deltaTime * 10);

        if (Mathf.Abs(AcceptButton.transform.position.x - 2) < .2f && Mathf.Abs(DeclineButton.transform.position.x - -2) < .2f)
        {

            capableOfClicking = true;

        }
        if (Mathf.Abs(AcceptButton.transform.position.x - 2) < .01f && Mathf.Abs(DeclineButton.transform.position.x - -2) < .01f)
        {

            AcceptButton.transform.position = new Vector3(2, AcceptButton.transform.position.y, AcceptButton.transform.position.z);

            DeclineButton.transform.position = new Vector3(-2, DeclineButton.transform.position.y, DeclineButton.transform.position.z);

            AnimateIn = false;

        }

    }
    void animateOut()
    {
        
        if (AcceptButton.transform.position.x <= 25 && DeclineButton.transform.position.x >= -25)
        {

            AcceptButton.transform.position += new Vector3(1f, 0, 0) * Time.deltaTime * 40;
            
            DeclineButton.transform.position -= new Vector3(1f, 0, 0) * Time.deltaTime * 40;

        }
        else
        {
            AcceptButton.transform.position = new Vector3(25, AcceptButton.transform.position.y, AcceptButton.transform.position.z);

            DeclineButton.transform.position = new Vector3(-25, DeclineButton.transform.position.y, DeclineButton.transform.position.z);
           
            AnimateOut = false;
        
        }

    }

    void Update() 
    {
    
        if(AnimateIn)
        {
            animateIn();
        }
        if (AnimateOut)
        {
            capableOfClicking = false;
            animateOut();
        }

    }

    public bool? CheckForInput()
    {
        bool? x = null;

        if (capableOfClicking && ItemDescriptionText.Animating == false)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            RaycastHit hit = new RaycastHit();

            if (Input.GetMouseButton(0))
            {

                if (Physics.Raycast(ray, out hit))
                {

                    if (hit.collider.gameObject == AcceptButton)
                    {

                        x = true;

                    }

                    if (hit.collider.gameObject == DeclineButton)
                    {

                        x = false;

                    }

                }

            }
        }


        return x;

    }
	

}
