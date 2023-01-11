﻿using UnityEngine;
using UnityEngine.UI;
using Wallpaper.Utils;

namespace Wallpaper.UI {

    [AddComponentMenu("Wallpaper/UI/Wallpaper Icon")]
    public class CollectionWallpaperIcon : MonoBehaviour {

        [SerializeField] private Image m_PreviewImage;
        [SerializeField] private Button m_Button;

        private Wallpaper m_Wallpaper;

        private void Awake() {
            m_Button.onClick.AddListener(() => ApplicationEvents.InvokeOnWallpaperEdit(m_Wallpaper));
        }

        public void Initialize(Wallpaper wallpaper) {
            m_Wallpaper = wallpaper;
            m_PreviewImage.sprite = Util.ImageToSprite(Util.ToTexture2D(wallpaper.BackgroundImage, wallpaper.ImageWidth, wallpaper.ImageHeight));
        }
    }
}