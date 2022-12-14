using UnityEngine;
using Wallpaper;

public class TestAppController : MonoBehaviour
{
    public void OnPreviewWallpaperClick() {
        AppManager.Instance.OnPreviewWallpaperClick(1);
    }
    public void OnSetWallpaperClick() {
        AppManager.Instance.OnSetWallpaperClick(1);
    }
}
