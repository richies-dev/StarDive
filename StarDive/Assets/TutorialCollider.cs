using UnityEngine;
using System.Collections;

public class TutorialCollider : MonoBehaviour {
    public void OnTriggerEnter2D(Collider2D other)
    {
        if (other.GetComponent<Enemy>() != null)
        {
            if(SavedData.current.ShowTutorial == true)
            {
                Enemy.EnemyStaticSpeed = 0;
            }
            this.gameObject.SetActive(false);
        }
    }
}
