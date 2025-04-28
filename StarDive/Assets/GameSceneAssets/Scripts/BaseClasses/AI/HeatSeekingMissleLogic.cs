using UnityEngine;

public class HeatSeekingMissleLogic : Projectile{

    public Transform Target;
    
    public override void OnEnableBullet()
    {
        base.OnEnableBullet();
        Target = null;

        
    }
    void FindTarget()
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, EquippedWeapon.TurretEquipped.GunType.HeatSeeking);
        if (colliders.Length > 0)
        {
            for (int i = 0; i < colliders.Length; i++)
            {
                if (colliders[i].GetComponent<Enemy>() != null)
                {
                    Target = colliders[i].transform;
                }
                if (colliders[i].GetComponent<enemyTier2AI>() != null)
                {
                    Target = colliders[i].transform;
                }
                if (colliders[i].GetComponent<enemyTier3AI>() != null)
                {
                    Target = colliders[i].transform;
                }
                if (colliders[i].GetComponent<enemyTier4AI>() != null)
                {
                    Target = colliders[i].transform;
                }
                if (colliders[i].GetComponent<ExplodingEnemy>() != null)
                {
                    Target = colliders[i].transform;
                }
            }
        }
    }

    public override void NormalMovement()
    {

        base.NormalMovement();

            if(Target != null)
            {

                Vector3 vectorToTarget = Target.position - transform.position;

                float angle = (Mathf.Atan2(vectorToTarget.y, vectorToTarget.x) * Mathf.Rad2Deg) - 90;

                Quaternion q = Quaternion.AngleAxis(angle, Vector3.forward);

                transform.rotation = Quaternion.Slerp(transform.rotation, q, Time.deltaTime * 15);

            }
        
    }
    
    public override void Update()
    {

        base.Update();
        
        if (Target == null)
        {

            FindTarget();

        }

        if (Target != null)
        {
            if (Target.gameObject.activeInHierarchy == false)
            {

                Target = null;

                return;

            }

            if (Target.GetComponent<Renderer>().enabled == false)
            {

                Target = null;

                return;

            }

        }




    }


}
