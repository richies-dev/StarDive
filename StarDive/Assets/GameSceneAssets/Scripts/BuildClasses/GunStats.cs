[System.Serializable]
public class GunStats{
    public int Ammo;
    public int Power;
    public int RateOfFireUpgrade;
    public int MultiShot;
    public int HeatSeeking;
    public float RateOfFire;
    public GunStats(int ammo,int power,int rateoffireUpgrade,int multishot,int heatseeking,float rateoffire)
    {
        Ammo = ammo;
        Power = power;
        RateOfFireUpgrade = rateoffireUpgrade;
        MultiShot = multishot;
        HeatSeeking = heatseeking;
        RateOfFire = rateoffire;
    }
}
