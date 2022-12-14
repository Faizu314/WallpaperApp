using UnityEngine;
using UnityEngine.SceneManagement;
using Wallpaper;

public class WallpaperPreviewer : MonoBehaviour {
    [SerializeField] private LayerMask m_WallpaperPreviewCullingMask;

    private Camera m_Camera;
    private LayerMask m_PreviousCullingMask;

    private void Start() {
        m_Camera = Camera.main;
        m_PreviousCullingMask = m_Camera.cullingMask;
        m_Camera.cullingMask = m_WallpaperPreviewCullingMask;
    }

    public void EndPreview() {
        m_Camera.cullingMask = m_PreviousCullingMask;

        SceneManager.UnloadSceneAsync(gameObject.scene);
    }

}
