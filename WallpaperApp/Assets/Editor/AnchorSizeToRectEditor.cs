using UnityEditor;
using UnityEngine;
using Wallpaper.UI;

[CustomEditor(typeof(AnchorSizeToRect))]
public class AnchorSizeToRectEditor : Editor {
    private AnchorSizeToRect m_Target;

    private AnchorSizeToRect Target {
        get {
            if (m_Target == null)
                m_Target = (AnchorSizeToRect)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        if (Application.isPlaying)
            return;

        GUILayout.Space(10);

        if (GUILayout.Button("Recalculate")) {
            Target.SetSize();
        }
    }

}
