using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DataPersistenceManager : MonoBehaviour
{

    [SerializeField] string fileName;





    private GameData gameData;
    FileDataHandler fileDataHandler;


    public static DataPersistenceManager instance {get; private set;}
    List<IDataPerisitans> dataPersistenceOvjects;

    private void Awake()
    {
        if(instance !=null)
        {
            Debug.LogError("Found more than one Data persistence Manager in the scene");
        }
        instance = this;
    }

    private void Start()
    {   
        this.fileDataHandler = new FileDataHandler(Application.persistentDataPath, fileName);
        this.dataPersistenceOvjects = FindAllDataPersistenceObjects();
        LoadGame();
    }

    private void Update() 
    {
        if(LevelMagiger.allLeffelsCompleed == true) SaveGame();
    }
    

    public void NewGame()
    {
        this.gameData = new GameData();
    }

    public void LoadGame()
    {
        this.gameData =fileDataHandler.Load();

        if (this.gameData == null)
        {
            Debug.Log("No data was found. Initailizing data to defalts.");
            NewGame();
        }

        foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
        {
            dataPerisitansObj.LoadData(gameData);
        }
    }
    
    public void SaveGame()
    {   
        
        foreach (IDataPerisitans dataPerisitansObj in dataPersistenceOvjects)
        {
            dataPerisitansObj.SaveData(ref gameData);
        }
        
        fileDataHandler.Save(gameData);
    }

    List<IDataPerisitans> FindAllDataPersistenceObjects()
    {
        IEnumerable<IDataPerisitans> dataPersistenceObjects = FindObjectsOfType<MonoBehaviour>().OfType<IDataPerisitans>();
        return new List<IDataPerisitans>(dataPersistenceObjects);
    }

   
}
