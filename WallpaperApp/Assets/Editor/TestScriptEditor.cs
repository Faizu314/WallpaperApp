using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(TestScript))]
public class TestScriptEditor : Editor {

    private TestScript m_Target;

    private TestScript Target {
        get {
            if (m_Target == null)
                m_Target = (TestScript)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        GUILayout.Space(10);

        if (GUILayout.Button("Camera Dimensions"))
            Target.GetCameraDimensions();
        if (GUILayout.Button("Transformed LocalPosition"))
            Target.UseTransformedLocalPosition();
        if (GUILayout.Button("Transformed Position"))
            Target.UseTransformedPosition();
        if (GUILayout.Button("Position"))
            Target.UsePosition();
    }

}