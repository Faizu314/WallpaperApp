using UnityEngine;

namespace Wallpaper.Testers {

    public class ApplicationLauncher : MonoBehaviour {

        public AppManager.Page PageToOpen;

        private void Start() {
            AppManager.Instance.ShowScreen(PageToOpen);
        }


    }
}