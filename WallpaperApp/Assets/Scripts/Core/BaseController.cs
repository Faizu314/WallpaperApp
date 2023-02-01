using UnityEngine;

namespace Wallpaper {

    public abstract class BaseController : MonoBehaviour {

        /// <summary>
        /// Called at the start of the application even if controller is inactive.
        /// </summary>
        public virtual void OnApplicationStart() { }
        public virtual void OnAndroidBackPressed() { }

        protected void OnEnable() {
            OnSceneLoaded();
        }
        protected void OnDisable() {
            OnSceneUnLoaded();
        }

        protected virtual void OnSceneLoaded() { }
        protected virtual void OnSceneUnLoaded() { }
    }
}