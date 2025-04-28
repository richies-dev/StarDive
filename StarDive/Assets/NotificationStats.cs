using UnityEngine;
[System.Serializable]
public class NotificationStats{
    
    [Multiline]
    public string Description;

    public Texture Image;

    public NotificationStats(string description,Texture image) 
    {

        Description = description;
        Image = image;
    
    }


}
