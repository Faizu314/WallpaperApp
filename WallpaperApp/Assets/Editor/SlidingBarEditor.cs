using UnityEngine;
using UnityEditor;
using Wallpaper.UI;

[CustomEditor(typeof(SlidingBar))]
public class SlidingBarEditor : Editor {

    private SlidingBar m_Target;

    private SlidingBar Target {
        get {
            if (m_Target == null)
                m_Target = (SlidingBar)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        GUILayout.Space(10);

        if (!Application.isPlaying) {
            if (GUILayout.Button("Setup Panel"))
                Target.Editor_SetupPanel();

            GUILayout.Label("Enter Play Mode to demo animation.");

            if (GUILayout.Button("Open")) {
                Target.Editor_SetupPanel();
                Target.Editor_Open();
            }
            if (GUILayout.Button("Close")) {
                Target.Editor_SetupPanel();
                Target.Editor_Close();
            }
        }
        else {
            if (GUILayout.Button("Demo Open")) {
                Target.Open();
            }
            if (GUILayout.Button("Demo Close")) {
                Target.Close();
            }
        }
    }
}
