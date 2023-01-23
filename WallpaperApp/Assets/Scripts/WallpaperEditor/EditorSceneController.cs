using UnityEngine;
using Wallpaper.Utils;
using Phezu.Util;
using UnityEngine.UI;

namespace Wallpaper.Editor {

    [AddComponentMenu("Wallpaper/Wallpaper Editor/Wallpaper Editor Controller")]
    public class EditorSceneController : BaseController {

        [SerializeField][RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidCommander;
        private IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidCommander;

        [SerializeField] private WallpaperEditor m_Editor;
        [SerializeField] private GameObject m_PromptPanel;
        [SerializeField] private Button m_PromptPanelYesButton;
        [SerializeField] private Button m_PromptPanelNoButton;

        public override void OnApplicationStart() {
            base.OnApplicationStart();

            m_PromptPanelYesButton.onClick.AddListener(() => AndroidCommander.OpenAndroidGallery());

            m_PromptPanelNoButton.onClick.AddListener(() => m_PromptPanel.SetActive(false));

            m_Editor.Initialize(this);
        }

        protected override void OnSceneLoaded() {
            ApplicationEvents.OnAndroidImageReceived += OnAndroidImageReceived;

            m_Editor.OpenEditor();
        }

        protected override void OnSceneUnLoaded() {
            ApplicationEvents.OnAndroidImageReceived -= OnAndroidImageReceived;

            m_Editor.CloseEditor();
        }

        public void PromptForAndroidImage() {
            m_PromptPanel.SetActive(true);
        }

        public void OnAndroidImageReceived(byte[] imageData, int width, int height) {
            m_PromptPanel.SetActive(false);

            WallpaperImage image = Util.ToWallpaperImage(imageData, width, height);

            m_Editor.OnNewImageSelected(image);
        }


    }
}