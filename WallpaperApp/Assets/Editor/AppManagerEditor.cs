using UnityEngine;
using UnityEditor;
using Wallpaper;

[CustomEditor(typeof(AppManager))]
public class AppManagerEditor : Editor
{
    private AppManager m_Target;

    private AppManager Target { 
        get {
            if (m_Target == null)
                m_Target = (AppManager)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        if (!Application.isPlaying)
            return;

        GUILayout.Space(10);

        if (GUILayout.Button("Start as Application")) {
            Target.ShowScreen(AppManager.Page.Home);
        }
        if (GUILayout.Button("Start as Wallpaper")) {
            Target.StartAsWallpaperService();
        }
    }
}
