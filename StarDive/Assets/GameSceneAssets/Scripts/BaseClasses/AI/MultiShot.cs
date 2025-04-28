using UnityEngine;
using System.Collections;

public class MultiShot : MonoBehaviour {
    public GameObject[] Children;
    public Vector3[] StartPosition;
    void OnDisable()
    {

        for (int i = 0; i < Children.Length; i++ )
        {
            Children[i].SetActive(true);

            Children[i].transform.localPosition = StartPosition[i];
        }

    }
	void Update () 
    {

        if(CheckIfInactive())
        {
            this.gameObject.SetActive(false);
        }
    }

    bool CheckIfInactive() 
    {
        bool x = true;
        for (int i = 0; i < Children.Length; i++)
        {

            if (Children[i].activeSelf == true)
            {
                x = false;
                break;
            }

        }
        return x;
    
    }


}

