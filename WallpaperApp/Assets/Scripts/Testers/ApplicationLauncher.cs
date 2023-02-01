using UnityEngine;
using Wallpaper;

public class ApplicationLauncher : MonoBehaviour {

    public AppManager.Page PageToOpen;

    private void Start() {
        AppManager.Instance.ShowScreen(PageToOpen);
    }


}