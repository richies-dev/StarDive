using UnityEngine;

public class enemyTier8AI : enemyTier3AI {
    public float speedMin;
    public float speedMax;
    public override void OnEnable()
    {
        base.OnEnable();
        EnemysStats.EnemySpeed = Random.Range(speedMin,speedMax);
    }
}
