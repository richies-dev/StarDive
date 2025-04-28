using UnityEngine;
using System.Collections;

public class EndGameText : MonoBehaviour {
    public GameObject GameOverText;
    public GameObject RoundText;
    public GameObject TapToRetryText;

    public Vector3 GameOverTextEndPos = new Vector3();
    public Vector3 RoundTextEndPos = new Vector3();
    public Vector3 TapToRetryTextEndPos = new Vector3();

    public Vector3 GameOverTextStartPos = new Vector3();
    public Vector3 RoundTextStartPos = new Vector3();
    public Vector3 TapToRetryTextStartPos = new Vector3();

    public float timeTakenDuringLerp = 1f;
 
    private float _timeStartedLerping;

    public bool _isLerping = false;

    public float percentageComplete;

    public float timeSinceStarted;

    public bool hasstarted = false;

    public Color textcolor = new Color(0,0,0,1);

    private int locround;

    void Start(){

        GameOverTextStartPos = GameOverText.transform.position;
        RoundTextStartPos = RoundText.transform.position;
        TapToRetryTextStartPos = TapToRetryText.transform.position;

    }

    public bool ResetLerp(){

        _isLerping = false;

        hasstarted = false;

        if (textcolor.a > 0)
        {

            textcolor.a -= Time.deltaTime;

            return true;

        }

        if (textcolor.a <= 0)
        {
            
            ActivityController.ThisGamestate = GameState.IsPlaying;

            timeSinceStarted = 0;

            percentageComplete = 0;

            GameOverText.transform.position = GameOverTextStartPos;

            RoundText.transform.position = RoundTextStartPos;

            TapToRetryText.transform.position = TapToRetryTextStartPos;
            
            return false;

        }

        return true;

    }

	void FixedUpdate () {

        GameOverText.GetComponent<TextMesh>().color = textcolor;

        TapToRetryText.GetComponent<TextMesh>().color = textcolor;

        RoundText.GetComponent<TextMesh>().color = textcolor;


        if (textcolor.a <= 0)
        {

            if (ActivityController.ThisGamestate != GameState.IsDead)
            {

                locround = SavedData.current.round;

            }

        }

        RoundText.GetComponent<TextMesh>().text = ("You Made it To Round " + (locround) + "!"); 

        if (_isLerping)
        {

            if(textcolor.a < 1)
            {

                textcolor.a += Time.deltaTime;

            }

            if(hasstarted == false)
            {

                _timeStartedLerping = Time.time;

                hasstarted = true;

            }

            timeSinceStarted = Time.time - _timeStartedLerping;

            percentageComplete = timeSinceStarted / timeTakenDuringLerp;

            GameOverText.transform.position = Vector3.Lerp(GameOverText.transform.position, GameOverTextEndPos, percentageComplete);

            RoundText.transform.position = Vector3.Lerp(RoundText.transform.position, RoundTextEndPos, percentageComplete);

            TapToRetryText.transform.position = Vector3.Lerp(TapToRetryText.transform.position, TapToRetryTextEndPos, percentageComplete);

        }

        if (percentageComplete >= 1.0f)
        {

            _isLerping = false;

        }

	}

}
