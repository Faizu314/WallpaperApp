using UnityEngine;
using UnityEngine.UI;
using Wallpaper.UI;

namespace Wallpaper.Home {

    public class HomePageController : BaseController {

        private IAndroidCommander AndroidCommander => Refs.Instance.AndroidCommander;

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

        // do not remember why home page would would look out for this callback.
        private void OnImageReceivedFromAndroid(byte[] imageData, int imageWidth, int imageHeight) {
            AppManager.Instance.ShowScreen(AppManager.Page.Collection);

            ApplicationEvents.InvokeOnAndroidImageReceived(imageData, imageWidth, imageHeight);
        }
    }
}