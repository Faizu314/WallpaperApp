using UnityEngine;
using UnityEngine.UI;

namespace Wallpaper.Editor {

    [RequireComponent(typeof(Button))]
    public class EffectSelectButton : MonoBehaviour {

        [SerializeField] private EffectPreviewer m_EffectPreviewer;
        [SerializeField] private EditorSceneController m_Controller;

        private void Awake() {
            GetComponent<Button>().onClick
                .AddListener(() => m_Controller.AddEffect(m_EffectPreviewer.ActiveEffect));            
        }
    }
}