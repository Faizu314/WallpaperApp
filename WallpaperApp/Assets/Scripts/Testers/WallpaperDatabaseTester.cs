using UnityEngine;
using Wallpaper.Data;

namespace Wallpaper.Testers {

    public class WallpaperDatabaseTester : MonoBehaviour {

        [SerializeField] private WallpaperDatabase m_Database;

        private byte[] m_Data;

        private void Start() {
            GenerateRandomData(600 * 4 * 600 * 4);

            Wallpaper wallpaper = new() {
                Version = Application.version,
                Author = "Phezu",
                Name = "Phezu's Wallpaper",
                Images = new() {
                    new() {
                        Data = m_Data,
                        Width = 600,
                        Height = 600,
                        Scale = Vector2.one,
                        Position = Vector2.zero
                    }
                }
            };

            m_Database.Save(wallpaper);
            var loaded = m_Database.Load("Phezu's Wallpaper");
            Debug.Log(loaded.Images[0].Position);
            Debug.Log(loaded.Images[0].Scale);
        }

        private void GenerateRandomData(int length) {
            m_Data = new byte[length];

            for (int i = 0; i < length; i++)
                m_Data[i] = (byte)Random.Range(0, 255);
        }
    }
}