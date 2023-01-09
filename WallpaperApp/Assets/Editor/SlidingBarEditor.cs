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

        if (GUILayout.Button("Setup Panel")) {
            Target.SetupPanel();
        }

        if (!Application.isPlaying) {
            GUILayout.Label("Enter play mode to demo opening and closing.");
            return;
        }

        if (GUILayout.Button("Demo Open")) {
            Target.Open();
        }
        if (GUILayout.Button("Demo Close")) {
            Target.Close();
        }
    }
}
