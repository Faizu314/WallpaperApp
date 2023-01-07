using UnityEngine;
using UnityEngine.SceneManagement;

namespace Wallpaper.Controllers {

    [AddComponentMenu("Wallpaper/Controllers/Wallpaper Preview Controller")]
    public class WallpaperPreviewController : MonoBehaviour {

        [SerializeField] private Canvas m_Canvas;
        [SerializeField] private LayerMask m_PrevCamCullingMaskOverride;

        private Camera m_PrevCamera;
        private LayerMask m_PrevCamCullingMask;

        private void Awake() {
            m_PrevCamera = Camera.main;
            m_PrevCamCullingMask = m_PrevCamera.cullingMask;
            m_PrevCamera.cullingMask = m_PrevCamCullingMaskOverride;
            m_Canvas.worldCamera = m_PrevCamera;
        }

        public void EndPreview() {
            m_PrevCamera.cullingMask = m_PrevCamCullingMask;
            m_Canvas.worldCamera = null;

            SceneManager.UnloadSceneAsync(gameObject.scene);
        }

    }
}