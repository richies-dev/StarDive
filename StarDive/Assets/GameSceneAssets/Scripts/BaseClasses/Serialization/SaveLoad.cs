using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System;
using System.Runtime.Serialization;
using System.Reflection;
public class SaveLoad: MonoBehaviour{

	private static SaveLoad instance;


	void Start()
    {

		SaveLoad.SetEnvironmentVariables ();

		SavedData.current = new SavedData (true);

		SaveLoad.Load ();

		foreach (SavedData g in SaveLoad.savedGames) {
		    //makes sure the game isnt making a new save				
            SavedData.current = g;
								
		}

		
	}
	void Awake(){

		DontDestroyOnLoad(this.gameObject);
		
		if (instance != null && instance != this)
		{
			Destroy(this.gameObject);
			return;
		}
		else
		{
			instance = this;
		}
			
		
	}
	
	private static void SetEnvironmentVariables()
    {
		
		Environment.ExpandEnvironmentVariables("MONO_REFLECTION_SERIALIZER");

	}
	public static List<SavedData> savedGames = new List<SavedData>();
	
	//it's static so we can call it from anywhere
	public static void Save() 
    {
		SaveLoad.savedGames.Add(SavedData.current);
		BinaryFormatter bf = new BinaryFormatter();
		//Application.persistentDataPath is a string, so if you wanted you can put that into debug.log if you want to know where save games are located
		FileStream file = File.Create(Application.persistentDataPath + "/SDsave.game"); //you can call it anything you want
		bf.Serialize(file, SaveLoad.savedGames);
		file.Close();
	}   
	public static void Load() 
    {
		if(File.Exists(Application.persistentDataPath + "/SDsave.game")) 
        {
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/SDsave.game", FileMode.Open);
			SaveLoad.savedGames = (List<SavedData>)bf.Deserialize(file);
			file.Close();
			
		}
	}	
}
