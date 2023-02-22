using System.Collections.Generic;
using UnityEngine;

namespace Wallpaper {

    [CreateAssetMenu(fileName = "WallpaperEffects", menuName = "Wallpaper/EffectsRepository")]
    public class EffectsRepository : ScriptableObject {

        public List<GameObject> Effects;

        public GameObject this[int index] => Effects[index];
    }
}