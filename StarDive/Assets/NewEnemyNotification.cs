
using UnityEngine;

public class NewEnemyNotification {

    public Notification NotificationSystem;

    public static bool ShowingNewEnemyNotification = false;

    public static bool AboutToShowNotification = false;

    public static NotificationStats NotificationInfo;

    private int TextSize 
    {
        get 
        {
            return Mathf.RoundToInt((ActivityController.StartScreenWidth + ActivityController.StartScreenHeight) * 23 / 1000); 
        }
    }
    public void ShowNewNotification() 
    {
        ShowingNewEnemyNotification = true;

        NotificationSystem.SubText.alignment = TextAlignment.Left;
        NotificationSystem.SubText.anchor = TextAnchor.UpperLeft;

        NotificationSystem.NewNotification
        (
            new Texture[]
            {
                NotificationInfo.Image
            },
            "-New Asteroid-",
            true,
            new Rect[]
            {
                new Rect(ActivityController.StartScreenWidth / 2 - (ActivityController.StartScreenHeight / 1.5f) / 2,ActivityController.StartScreenHeight / 2 - (ActivityController.StartScreenHeight / 3)/4,ActivityController.StartScreenHeight / 1.5f,ActivityController.StartScreenHeight / 3)
            },
            TextSize,
            new Vector2(ActivityController.StartScreenWidth / 2, ActivityController.StartScreenHeight / 2 + (ActivityController.StartScreenHeight / 3) + TextSize - (ActivityController.StartScreenHeight / 3) / 4),
            true,
            true,
            0,
            true,
            (int)(TextSize / 1.3f),
            NotificationInfo.Description,
            new Vector2(ActivityController.StartScreenWidth / 2 - (ActivityController.StartScreenHeight / 1.5f) / 2, ActivityController.StartScreenHeight / 2 - TextSize - (ActivityController.StartScreenHeight / 3) / 4)
        );

        AboutToShowNotification = false;
    }

    public void EndNotification()
    {
        ShowingNewEnemyNotification = false;
        NotificationSystem.HideTapToContinue();
        NotificationSystem.KillNotification();
        NotificationSystem.BlackFade.FadeOut = true;
        NotificationSystem.BlackFade.StartFade = true;
        ActivityController.Paused = false;
        TurretShooting.timer = .5f;
    }
    

}
