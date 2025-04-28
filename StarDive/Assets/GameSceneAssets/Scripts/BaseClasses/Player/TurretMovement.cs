using UnityEngine;
using System.Collections;

public class TurretMovement : MonoBehaviour {
    
    private float AngleOfPlayerAndMousePositions;

    public static bool DoneRotating = false;

    private Vector2 mousePositionOnClick;

    public static Vector3 mousePositionToWorldCoords;

    public static Vector3 PlayerRotation;

    public float RotationSpeed = 20;

    public static bool Hold = false;

    public float TapTimer = .4f;


	void Update()
    {

        TouchingScreenMethod();

    }

	void FixedUpdate () 
    {

        RotationMethod();

	}

    void RotationMethod()
    {

        if ((Camera.main.ScreenToWorldPoint(new Vector3(mousePositionOnClick.x, mousePositionOnClick.y, Mathf.Abs(Camera.main.gameObject.transform.position.z)))).y >= transform.position.y)
        {

            mousePositionToWorldCoords = Camera.main.ScreenToWorldPoint(new Vector3(mousePositionOnClick.x, mousePositionOnClick.y, Mathf.Abs(Camera.main.gameObject.transform.position.z)));

        }
        
        AngleOfPlayerAndMousePositions = Mathf.Clamp(Mathf.Atan2((mousePositionToWorldCoords.y - transform.position.y), (mousePositionToWorldCoords.x - transform.position.x)) * Mathf.Rad2Deg, 0, 180);

        if (AngleOfPlayerAndMousePositions < 0)
        {

            AngleOfPlayerAndMousePositions += 360;

        }


        PlayerRotation = new Vector3(0, 0, AngleOfPlayerAndMousePositions);

        if (DoneRotating == false)
        {

            transform.eulerAngles = Vector3.Lerp(transform.eulerAngles, PlayerRotation, Time.deltaTime * RotationSpeed);

            if (Mathf.Abs(transform.eulerAngles.z - PlayerRotation.z) < 1)
            {

                DoneRotating = true;

            }

        }

        if (Mathf.Abs(transform.eulerAngles.z - PlayerRotation.z) > 1)
        {

            DoneRotating = false;

        }

        
    }

    void TouchingScreenMethod()
    {

        if (ActivityController.ThisGamestate != GameState.IsInShop && ActivityController.ThisGamestate != GameState.IsDead)
        {

            if (Input.GetMouseButton(0))
            {

                if (TapTimer > 0)
                {

                    TapTimer -= Time.deltaTime;

                    Hold = false;

                }

                if (TapTimer <= 0)
                {

                    Hold = true;

                    if (Mathf.Abs(transform.eulerAngles.z - PlayerRotation.z) > 1)
                    {

                        transform.eulerAngles = PlayerRotation;

                    }

                }
        
                mousePositionOnClick = Input.mousePosition;

            }
            else
            {

                TapTimer = .4f;

                Hold = false;

            }

        }
        else 
        {

            Hold = false;

            TapTimer = .4f;

        }
                      
    }

}
