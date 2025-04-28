using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class EnemyController : MonoBehaviour
{

    public ObjectPool[] EnemyObjectPools;

    public float TimeUntilNextEnemy = 1f;

    public float TimeUntilNextEnemyResetValue = 1f;

    public bool SpawnNextEnemyFromPool = false;

    private int locHealth = 0;

    public static bool SpawnEnabled = true;

    public static bool IsSpawning = false;

    public GameObject Shop;

    
    void Start() 
    {
        locHealth = SavedData.current.PlayerStats.Health;
    
    }

    void Update()
    {

        if(IsSpawning == false)
        {
            SpawningForRounds();
        }

        OnHealthChange();
        SpawnEnemys();
    }

    void SpawningForRounds()
    {

        TimeUntilNextEnemy = TimeUntilNextEnemyResetValue;

        if (SavedData.current.round >= 0 && SavedData.current.round < 20)
        {
            TimeUntilNextEnemy = 1.5f;
            TimeUntilNextEnemyResetValue = 1.5f;
        }
        else if (SavedData.current.round >= 20 && SavedData.current.round < 29)
        {
            TimeUntilNextEnemy = 1.3f;
            TimeUntilNextEnemyResetValue = 1.3f;
        }
        else if (SavedData.current.round >= 29 && SavedData.current.round < 31)
        {
            TimeUntilNextEnemy = .5f;
            TimeUntilNextEnemyResetValue = .5f;
        }
        else if (SavedData.current.round >= 31 && SavedData.current.round < 33)
        {
            TimeUntilNextEnemy = 1f;
            TimeUntilNextEnemyResetValue = 1f;
        }
        else if (SavedData.current.round >= 33 && SavedData.current.round < 34)
        {
            TimeUntilNextEnemy = .1f;
            TimeUntilNextEnemyResetValue = .1f;
        }
        else if (SavedData.current.round >= 34 && SavedData.current.round < 36)
        {
            TimeUntilNextEnemy = 1f;
            TimeUntilNextEnemyResetValue = 1f;
        }
        else if (SavedData.current.round >= 36 && SavedData.current.round < 40)
        {
            TimeUntilNextEnemy = .7f;
            TimeUntilNextEnemyResetValue = .7f;
        }
        else if (SavedData.current.round >= 40 && SavedData.current.round < 49)
        {
            TimeUntilNextEnemy = 1f;
            TimeUntilNextEnemyResetValue = 1f;
        }
        else if (SavedData.current.round >= 49 && SavedData.current.round <= 50)
        {
            TimeUntilNextEnemy = .3f;
            TimeUntilNextEnemyResetValue = .3f;
        }
        else if (SavedData.current.round > 50)
        {
            TimeUntilNextEnemy = Random.Range(.4f,1.5f);
            TimeUntilNextEnemyResetValue = Random.Range(.4f, 1.5f);
        }

        switch(SavedData.current.round)
        {

            case 0:


                EnemyObjectPools[0].SetActiveThisRound = 3;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;    
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;



            case 1:

                EnemyObjectPools[0].SetActiveThisRound = 8;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 2:

                if (SavedData.current.ShowedRock[0] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[4].InstantiatedStats;
                    SavedData.current.ShowedRock[0] = true;
                }

                EnemyObjectPools[0].SetActiveThisRound = 15;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 1;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 3:

                if (SavedData.current.ShowedRock[1] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[1].InstantiatedStats;
                    SavedData.current.ShowedRock[1] = true;
                }

                EnemyObjectPools[0].SetActiveThisRound = 2;
                EnemyObjectPools[1].SetActiveThisRound = 1;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 4:

                EnemyObjectPools[0].SetActiveThisRound = 5;
                EnemyObjectPools[1].SetActiveThisRound = 2;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 5:

                if (SavedData.current.ShowedRock[2] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;

                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[5].InstantiatedStats;                
                    
                    SavedData.current.ShowedRock[2] = true;

                }

                EnemyObjectPools[0].SetActiveThisRound = 7;
                EnemyObjectPools[1].SetActiveThisRound = 1;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                //
                if(SavedData.current.ShowRockOnlyOnce[0] == false)
                {
                    EnemyObjectPools[5].SetActiveThisRound = 1;
                    SavedData.current.ShowRockOnlyOnce[0] = true;                
                }
                //
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 6:

                EnemyObjectPools[0].SetActiveThisRound = 10;
                EnemyObjectPools[1].SetActiveThisRound = 2;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 7:

                if (SavedData.current.ShowedRock[3] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[2].InstantiatedStats;
                    SavedData.current.ShowedRock[3] = true;
                }
                EnemyObjectPools[0].SetActiveThisRound = 5;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 1;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 1;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 8:

                
                EnemyObjectPools[0].SetActiveThisRound = 2;
                EnemyObjectPools[1].SetActiveThisRound = 2;
                EnemyObjectPools[2].SetActiveThisRound = 2;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 9:

                if (SavedData.current.ShowedRock[4] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[6].InstantiatedStats;
                    SavedData.current.ShowedRock[4] = true;
                }
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 4;
                EnemyObjectPools[2].SetActiveThisRound = 4;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 1;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 10:


                if (SavedData.current.ShowedRock[5] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[10].InstantiatedStats;
                    SavedData.current.ShowedRock[5] = true;
                }


                EnemyObjectPools[0].SetActiveThisRound = 2;
                EnemyObjectPools[1].SetActiveThisRound = 2;
                EnemyObjectPools[2].SetActiveThisRound = 1;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 1;

                break;

            case 11:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 4;
                EnemyObjectPools[2].SetActiveThisRound = 2;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 12:

                if (SavedData.current.ShowedRock[6] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[3].InstantiatedStats;
                    SavedData.current.ShowedRock[6] = true;
                }
                EnemyObjectPools[0].SetActiveThisRound = 5;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 1;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 13:

                
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 2;
                EnemyObjectPools[3].SetActiveThisRound = 1;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 14:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 4;
                EnemyObjectPools[3].SetActiveThisRound = 1;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 15:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 5;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 16:

                EnemyObjectPools[0].SetActiveThisRound = 3;
                EnemyObjectPools[1].SetActiveThisRound = 1;
                EnemyObjectPools[2].SetActiveThisRound = 4;
                EnemyObjectPools[3].SetActiveThisRound = 1;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 17:

                EnemyObjectPools[0].SetActiveThisRound = 15;
                EnemyObjectPools[1].SetActiveThisRound = 4;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;


                break;

            case 18:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 4;
                EnemyObjectPools[3].SetActiveThisRound = 3;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 19:

                EnemyObjectPools[0].SetActiveThisRound = 10;
                EnemyObjectPools[1].SetActiveThisRound = 5;
                EnemyObjectPools[2].SetActiveThisRound = 8;
                EnemyObjectPools[3].SetActiveThisRound = 4;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 20:


                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 2;
                EnemyObjectPools[3].SetActiveThisRound = 4;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;


                break;

            case 21:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 4;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 22:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 8;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 23:
                //NR
                if (SavedData.current.ShowedRock[7] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[7].InstantiatedStats;
                    SavedData.current.ShowedRock[7] = true;
                }
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 5;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 1;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 24:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 3;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 2;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 25:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 6;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 4;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 26:
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 1;
                EnemyObjectPools[7].SetActiveThisRound = 8;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 27:
                
                EnemyObjectPools[0].SetActiveThisRound = 2;
                EnemyObjectPools[1].SetActiveThisRound = 2;
                EnemyObjectPools[2].SetActiveThisRound = 2;
                EnemyObjectPools[3].SetActiveThisRound = 2;
                EnemyObjectPools[4].SetActiveThisRound = 2;
                if (SavedData.current.ShowRockOnlyOnce[1] == false)
                {
                    EnemyObjectPools[5].SetActiveThisRound = 1;
                    SavedData.current.ShowRockOnlyOnce[1] = true;
                }
                EnemyObjectPools[6].SetActiveThisRound = 1;
                EnemyObjectPools[7].SetActiveThisRound = 2;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 28:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 10;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 10;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 29:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 3;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 30:

                TimeUntilNextEnemy = 0;
                TimeUntilNextEnemyResetValue = 0;

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 5;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;

            case 31:

                if (SavedData.current.ShowedRock[8] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[8].InstantiatedStats;
                    SavedData.current.ShowedRock[8] = true;
                }
                
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 2;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;
                
                break;
            case 32:
                
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 2;
                EnemyObjectPools[8].SetActiveThisRound = 3;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 33:
                EnemyObjectPools[0].SetActiveThisRound = 2;
                EnemyObjectPools[1].SetActiveThisRound = 3;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 34:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 4;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 35:

                EnemyObjectPools[0].SetActiveThisRound = 5;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 4;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 3;

                break;
            case 36:
                

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 5;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 2;
                if (SavedData.current.ShowRockOnlyOnce[2] == false)
                {
                    EnemyObjectPools[5].SetActiveThisRound = 1;
                    SavedData.current.ShowRockOnlyOnce[2] = true;
                }
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 1;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 2;

                break;
            case 37:

                EnemyObjectPools[0].SetActiveThisRound = 10;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 1;
                EnemyObjectPools[7].SetActiveThisRound = 8;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 38:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 2;
                EnemyObjectPools[8].SetActiveThisRound = 2;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 5;

                break;
            case 39:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 5;
                EnemyObjectPools[8].SetActiveThisRound = 2;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 40:
                //NR

                if (SavedData.current.ShowedRock[9] == false)
                {
                    NewEnemyNotification.AboutToShowNotification = true;
                    NewEnemyNotification.NotificationInfo = EnemyObjectPools[9].InstantiatedStats;
                    SavedData.current.ShowedRock[9] = true;
                }

                TimeUntilNextEnemy = 1f;
                TimeUntilNextEnemyResetValue = 1f;
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 1;
                EnemyObjectPools[10].SetActiveThisRound = 2;

                break;
            case 41:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 5;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 5;

                break;
            case 42:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 2;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 43:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 2;
                EnemyObjectPools[10].SetActiveThisRound = 2;

                break;
            case 44:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 2;
                EnemyObjectPools[9].SetActiveThisRound = 2;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 45:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 0;
                EnemyObjectPools[9].SetActiveThisRound = 0;
                EnemyObjectPools[10].SetActiveThisRound = 10;

                break;
            case 46:

                EnemyObjectPools[0].SetActiveThisRound = 1;
                EnemyObjectPools[1].SetActiveThisRound = 1;
                EnemyObjectPools[2].SetActiveThisRound = 1;
                EnemyObjectPools[3].SetActiveThisRound = 1;
                EnemyObjectPools[4].SetActiveThisRound = 1;
                if (SavedData.current.ShowRockOnlyOnce[3] == false)
                {
                    EnemyObjectPools[5].SetActiveThisRound = 1;
                    SavedData.current.ShowRockOnlyOnce[3] = true;
                }
                EnemyObjectPools[6].SetActiveThisRound = 1;
                EnemyObjectPools[7].SetActiveThisRound = 1;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 1;
                EnemyObjectPools[10].SetActiveThisRound = 1;

                break;
            case 47:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 5;
                EnemyObjectPools[9].SetActiveThisRound = 6;
                EnemyObjectPools[10].SetActiveThisRound = 0;

                break;
            case 48:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 0;
                EnemyObjectPools[8].SetActiveThisRound = 5;
                EnemyObjectPools[9].SetActiveThisRound = 6;
                EnemyObjectPools[10].SetActiveThisRound = 2;

                break;
            case 49:
                TimeUntilNextEnemy = .3f;
                TimeUntilNextEnemyResetValue = .3f;
                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 2;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 1;
                EnemyObjectPools[10].SetActiveThisRound = 2;

                break;
            case 50:

                EnemyObjectPools[0].SetActiveThisRound = 0;
                EnemyObjectPools[1].SetActiveThisRound = 0;
                EnemyObjectPools[2].SetActiveThisRound = 0;
                EnemyObjectPools[3].SetActiveThisRound = 0;
                EnemyObjectPools[4].SetActiveThisRound = 0;
                EnemyObjectPools[5].SetActiveThisRound = 0;
                EnemyObjectPools[6].SetActiveThisRound = 0;
                EnemyObjectPools[7].SetActiveThisRound = 5;
                EnemyObjectPools[8].SetActiveThisRound = 1;
                EnemyObjectPools[9].SetActiveThisRound = 1;
                EnemyObjectPools[10].SetActiveThisRound = 3;

                break;
            default:

                if (SavedData.current.round > 50)
                {
                    
                    EnemyObjectPools[0].SetActiveThisRound = Random.Range(0,3);
                    EnemyObjectPools[1].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[2].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[3].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[4].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[5].SetActiveThisRound = 0;
                    EnemyObjectPools[6].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[7].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[8].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[9].SetActiveThisRound = Random.Range(0, 3);
                    EnemyObjectPools[10].SetActiveThisRound = Random.Range(0, 3);
                }
                if (SavedData.current.round < 0)
                {

                    TimeUntilNextEnemy = 1.5f;
                    TimeUntilNextEnemyResetValue = 1.5f;

                    EnemyObjectPools[0].SetActiveThisRound = 1;
                    EnemyObjectPools[1].SetActiveThisRound = 0;
                    EnemyObjectPools[2].SetActiveThisRound = 0;
                    EnemyObjectPools[3].SetActiveThisRound = 0;
                    EnemyObjectPools[4].SetActiveThisRound = 0;
                    EnemyObjectPools[5].SetActiveThisRound = 0;
                    EnemyObjectPools[6].SetActiveThisRound = 0;
                    EnemyObjectPools[7].SetActiveThisRound = 0;
                    EnemyObjectPools[8].SetActiveThisRound = 0;
                    EnemyObjectPools[9].SetActiveThisRound = 0;
                    EnemyObjectPools[10].SetActiveThisRound = 0;

                }

                break;
            
        
        }

        //|0| is tier 1 enemy (single one hit rock)
        //|1| is tier 2 enemy (One hit rock with children)
        //|2| is tier 3 enemy (single Two hit rock)
        //|3| is tier 4 enemy (Two hit rock with children)
        //|4| is tier 5 enemy (One hit Small Exploding Rock)
        //|5| is tier 1 item (One up rock One hit)
        //|6| is tier 6 enemy (Nuke enemy One hit)
        //|7| is tier 7 enemy (Gravity effected rock 4 hits)
        //|8| is tier 8 enemy (strong enemy 8 hits)
        //|9| is tier 9 enemy (tough cookie)
        //|10| is tier 10 enemy (Teleporting Enemy)

        
    }
    void SpawnEnemys() 
    {

        if (IsSpawning && NewEnemyNotification.AboutToShowNotification == false && NewEnemyNotification.ShowingNewEnemyNotification == false)
        {
            if (SpawnEnabled)
            {

                TimeUntilNextEnemy -= Time.deltaTime;

                if (TimeUntilNextEnemy <= 0)
                {

                    TimeUntilNextEnemy = TimeUntilNextEnemyResetValue;

                    SpawnNextEnemyFromPool = true;
                }

            }

            if (AmountSetToSpawnThisRound() <= 0)
            {
                if (CheckIfDoneSpawning())
                {
                    IsSpawning = false;
                    Shop.SetActive(true);
                }
            }
            if (SpawnNextEnemyFromPool)
            {

                if (SpawnNextEnemy() == true)
                {

                    SpawnNextEnemyFromPool = false;

                }

            }

        }

    }
    bool SpawnNextEnemy()
    {

        bool val = false;

        GameObject obj = null;

        int i = Random.Range(0,EnemyObjectPools.Length);

        if(i < EnemyObjectPools.Length)
        {

            if (EnemyObjectPools[i].SetActiveThisRound > 0)
            {

                obj = EnemyObjectPools[i].ReturnInactiveObject();

                if (obj != null)
                {

                    obj.transform.position = new Vector3(Random.Range(-8f, 8f), 11, -1);

                    obj.transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, Random.Range(0f, 180f));

                    obj.SetActive(true);

                    EnemyObjectPools[i].SetActiveThisRound--;

                    val = true;

                }

            }

            if(EnemyObjectPools[i].SetActiveThisRound <= 0)
            {

                i++;

            }
            
        }
        
        return val;

    }
    bool CheckIfDoneSpawning()
    {
        bool val = true;

        List<GameObject> AllpooledObjects = new List<GameObject>();
        
        for (int i = 0; i < EnemyObjectPools.Length; i++ )
        {
            AllpooledObjects.AddRange(EnemyObjectPools[i].pooledObjects);
        }

        for (int i = 0; i < AllpooledObjects.Count; i++)
        {
            if (AllpooledObjects[i].activeInHierarchy)
            {
                val = false;
                break;
            }
        }

        return val;

    }
    int AmountSetToSpawnThisRound() 
    {
        int val = 0;

        for (int i = 0; i < EnemyObjectPools.Length; i++ )
        {
            val += EnemyObjectPools[i].SetActiveThisRound;
        }

        return val;
    
    }
    void SetAllEnemiesInactive()
    {
        for (int i = 0; i < EnemyObjectPools.Length; i++)
        {
            EnemyObjectPools[i].SetAllInactive();
        }
    }
    void OnHealthChange() 
    {

        if (SavedData.current.PlayerStats.Health <= -1)
        {

            ActivityController.MakingGameOverLayerAppear = true;

            SetAllEnemiesInactive();

            IsSpawning = false;

        }
        
        if(locHealth != SavedData.current.PlayerStats.Health)
        {

            if(SavedData.current.PlayerStats.Health > -1)
            {
                
                if (ActivityController.ThisGamestate != GameState.IsDead)
                {


                    if (locHealth > SavedData.current.PlayerStats.Health)
                    {

                        SetAllEnemiesInactive();
                        SavedData.current.round--;
                        Shop.SetActive(true);
                        IsSpawning = false;
               
                    }
                
                    ActivityController.ShowPlayersHealthLeft = true;

                }

            }

            locHealth = SavedData.current.PlayerStats.Health;

        }

    }

}
