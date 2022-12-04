using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;

public class FileDataHandler 
{
    string dataDirPath = "";
    string dataFileName = "";

    public FileDataHandler(string dataDirPath, string dataFileName)
    {
        this.dataDirPath = dataDirPath;
        this.dataFileName = dataFileName;
    }

    public GameData Load()
    {
        string fullPath = Path.Combine(dataDirPath, dataFileName);
        GameData LodetData = null;
        if(File.Exists(fullPath))
        {
            try
            {
                string dataToLoat = "";
                

                using(FileStream steam = new FileStream(fullPath, FileMode.Open))
                {
                    using(StreamReader reader= new StreamReader(steam))
                    {
                        dataToLoat = reader.ReadToEnd();
                    }
                }
                LodetData = JsonUtility.FromJson<GameData>(dataToLoat);

            }
            catch ( Exception e)
            {
                Debug.LogError("Error Occurd when trying to load dat from file " + fullPath + "\n" + e);
            }
        }
        return LodetData;
    }

    public void Save(GameData data)
    {
        string fullPath = Path.Combine(dataDirPath, dataFileName);
        try
        {
            Directory.CreateDirectory(Path.GetDirectoryName(fullPath));
            string dataToStore = JsonUtility.ToJson(data, true);

            using(FileStream steam = new FileStream(fullPath, FileMode.Create))
            {
                using(StreamWriter writer= new StreamWriter(steam))
                {
                    writer.Write(dataToStore);
                }
            }
        }
        catch(Exception e)
        {
            Debug.LogError("Error occured when trying to save data to file: " + fullPath +"\n" + e);
        }
    }
}
