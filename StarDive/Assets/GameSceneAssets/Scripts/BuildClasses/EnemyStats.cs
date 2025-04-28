[System.Serializable]
public class EnemyStats
{

    public float EnemySpeed;
    public float EnemyRotationSpeed;
    public float ZRotationOfEnemy;
    public int HealthOfEnemy;

    public EnemyStats(float enemySpeed, float enemyRotationSpeed, float zRotationOfEnemy, int healthOfEnemy)
    {

        EnemySpeed = enemySpeed;
        EnemyRotationSpeed = enemyRotationSpeed;
        ZRotationOfEnemy = zRotationOfEnemy;
        HealthOfEnemy = healthOfEnemy;

    }

}