using UnityEngine;
public class AddRound : MonoBehaviour {

    public bool HasStarted = false;
    void OnEnable()
    {
        if (HasStarted)
        {
            SavedData.current.round++;
        }
        else
        {
            HasStarted = true;
            return;
        }

    }
}
