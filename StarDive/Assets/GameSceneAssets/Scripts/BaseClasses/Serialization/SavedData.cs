[System.Serializable]
public class SavedData{

	public static SavedData current;
	//ints


	public Stats PlayerStats;

	public int round;

    public bool? ShowTutorial;

	public int GunSelected;

    public bool[] ItemBought;

    public GunStats StarterTurret;
    public GunStats AdvancedTurret;
    public GunStats LegendaryTurret;
    public GunStats MissileLauncher;

   // public bool? ShowTutorial;

    public bool[] ShowedRock;
    public bool[] ShowRockOnlyOnce;

	public SavedData (bool? ShowTut) 
    {

        ShowedRock = new bool[9]{false,false,false,false,false,false,false,false,false};

        ShowRockOnlyOnce = new bool[3] { false, false, false};

        ShowTutorial = ShowTut;

        StarterTurret = new GunStats(1000000, 0, 0, 0, 0, 1.2f);

        AdvancedTurret = new GunStats(0, 0, 0, 0, 0, 2f);

        LegendaryTurret = new GunStats(0, 0, 0, 0, 0, 3.5f);

        MissileLauncher = new GunStats(0, 0, 0, 0, 0, 1f);
        
    
        
		round = 0;

		GunSelected = 0;

		PlayerStats = new Stats(0,0,3);

        ItemBought = new bool[] { true, false, false, false };

	}
}
