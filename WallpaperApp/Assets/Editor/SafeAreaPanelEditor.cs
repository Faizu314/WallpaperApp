using UnityEngine;
using UnityEditor;
using Wallpaper.UI;

[CustomEditor(typeof(SafeAreaPanel))]
public class SafeAreaPanelEditor : Editor {
    private SafeAreaPanel m_Target;

    private SafeAreaPanel Target {
        get {
            if (m_Target == null)
                m_Target = (SafeAreaPanel)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        GUILayout.Space(10);

        if (GUILayout.Button("Recalculate Safe Area")) {
            Target.CalculateSafeArea();
        }

    }
}
