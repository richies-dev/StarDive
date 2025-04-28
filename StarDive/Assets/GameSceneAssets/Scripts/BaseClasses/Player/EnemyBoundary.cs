using UnityEngine;
using System.Collections;

public class EnemyBoundary : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D x){

        if(x.gameObject.GetComponent<Enemy>()!= null)
        {
            SavedData.current.PlayerStats.Health--;
        }

	}

}
