using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class ObjectPool : MonoBehaviour
{

    public NotificationStats InstantiatedStats;

    public Transform Parent;

    public GameObject pooledObject;

    public int pooledAmount = 1;

    public int amountSpawned = 0;

    public List<GameObject> pooledObjects;

    public int SetActiveThisRound = 0;

    void Update()
    {


        if(amountSpawned != pooledAmount)
        {

            while (amountSpawned < pooledAmount)
            {

                GameObject obj = (GameObject)Instantiate(pooledObject);
                obj.transform.parent = Parent;
                obj.SetActive(false);

                pooledObjects.Add(obj);

                amountSpawned++;
                return;
            }
            while (amountSpawned > pooledAmount)
            {

                Destroy(pooledObjects[amountSpawned - 1]);
                pooledObjects.Remove(pooledObjects[amountSpawned - 1]);


                amountSpawned--;
                return;
            }

        }



    }

    public void SetAllInactive()
    {

        for (int i = 0; i < pooledObjects.Count; i++)
        {

            pooledObjects[i].SetActive(false);

        }

    }

    public GameObject ReturnInactiveObject()
    {

        GameObject obj = null;

        for (int i = 0; i < pooledObjects.Count; i++)
        {

            if (pooledObjects[i].activeSelf == false)
            {

                obj = pooledObjects[i];

            }


            if (i >= pooledObjects.Count - 1 && obj == null)
            {

                pooledAmount++;

            }

        }



        return obj;

    }



}