using UnityEngine;
using UnityEngine.UI;
using Wallpaper.UI;
using Phezu.Util;

namespace Wallpaper.Controllers {

    public class HomePageController : BaseController {

        [SerializeField]
        [RequireInterface(typeof(IAndroidCommander))]
        private Object m_AndroidCommander;
        private IAndroidCommander AndroidCommander => (IAndroidCommander)m_AndroidCommander;

        [SerializeField] private CollectionSceneController m_CollectionSceneController;

        [SerializeField] private Button m_MenuButton;
        [SerializeField] private SlidingBar m_MenuBar;
        [SerializeField] private Button m_CreateButton;

        [SerializeField] private Button m_ToCollectionsButton;

        [SerializeField] private Button m_BackButton;

        public override void OnApplicationStart() {
            base.OnApplicationStart();

            m_MenuButton.onClick.RemoveAllListeners();
            m_MenuButton.onClick.AddListener(() => m_MenuBar.Open());

            m_ToCollectionsButton.onClick.RemoveAllListeners();
            m_ToCollectionsButton.onClick.AddListener(() => AppManager.Instance.ShowScreen(AppManager.Page.Collection));

            m_BackButton.onClick.RemoveAllListeners();
            m_BackButton.onClick.AddListener(() => AndroidCommander.OnBackButtonPressed());

            m_CreateButton.onClick.RemoveAllListeners();
            m_CreateButton.onClick.AddListener(() => AndroidCommander.OpenAndroidGallery());
        }

        protected override void OnSceneLoaded() {
            ApplicationEvents.OnAndroidImageReceived += OnImageReceivedFromAndroid;
        }
        protected override void OnSceneUnLoaded() {
            ApplicationEvents.OnAndroidImageReceived -= OnImageReceivedFromAndroid;
            m_MenuBar.Close();
        }

        private void OnImageReceivedFromAndroid(byte[] imageData, int imageWidth, int imageHeight) {
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);

            m_CollectionSceneController.CreateWallpaper(imageData, imageWidth, imageHeight);
        }
    }
}