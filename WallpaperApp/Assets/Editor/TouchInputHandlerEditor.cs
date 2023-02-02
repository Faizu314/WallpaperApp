using UnityEngine;
using UnityEditor;
using Wallpaper.Input;
using Wallpaper;

[CustomEditor(typeof(TouchInputHandler))]
public class TouchInputHandlerEditor : Editor {
    private TouchInputHandler m_Target;

    private TouchInputHandler Target {
        get {
            if (m_Target == null)
                m_Target = (TouchInputHandler)target;

            return m_Target;
        }
    }

    public override void OnInspectorGUI() {
        base.OnInspectorGUI();

        if (!Application.isPlaying)
            return;

        GUILayout.Space(10);

        if (GUILayout.Button("Simulate Android Zoom")) {
            ApplicationEvents.InvokeOnSecondTouchDown();
            Target.InvokeOnTouchPinchBegin(Target.ZoomPivotToSimulate, Target.ZoomMagnitudeToSimulate);
            Target.InvokeOnTouchPinch(Target.ZoomPivotToSimulate, Target.ZoomMagnitudeToSimulate);
            ApplicationEvents.InvokeOnSecondTouchUp();
        }
    }
}
