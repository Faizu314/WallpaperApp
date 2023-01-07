using UnityEngine;
using UnityEditor;
using Wallpaper.Testers;

[CustomEditor(typeof(AndroidMockup))]
public class AndroidMockupEditor : Editor {
    private AndroidMockup m_Target;

    private AndroidMockup Target {
        get {
            if (m_Target == null)
                m_Target = (AndroidMockup)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        if (!Application.isPlaying)
            return;

        GUILayout.Space(10);

        if (GUILayout.Button("Receive Mockup Image From Android")) {
            Target.SendOnImageReceivedEvent();
        }
    }
}
