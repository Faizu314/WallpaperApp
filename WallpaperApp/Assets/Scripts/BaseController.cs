using UnityEngine;

namespace Wallpaper {

    public abstract class BaseController : MonoBehaviour {

        /// <summary>
        /// Called at the start of the application even if controller is inactive.
        /// </summary>
        public virtual void OnApplicationStart() { }

        protected void OnEnable() {
            OnSceneLoaded();
        }
        protected void OnDisable() {
            OnSceneUnLoaded();
        }

        protected abstract void OnSceneLoaded();
        protected abstract void OnSceneUnLoaded();
    }
}