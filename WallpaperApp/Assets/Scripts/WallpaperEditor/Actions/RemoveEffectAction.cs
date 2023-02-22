using Wallpaper.Utils;

namespace Wallpaper.Editor {

    public class RemoveEffectAction : WallpaperEditorActionBase {

        private EffectsHandler m_EffectsHandler;
        private WallpaperEffectBase m_Effect;
        private Wallpaper m_Wallpaper;

        public RemoveEffectAction(EffectsHandler effectsHandler, WallpaperEffectBase effect, Wallpaper wallpaper) {
            m_EffectsHandler = effectsHandler;
            m_Wallpaper = wallpaper;
            m_Effect = effect;
        }

        public override void Execute() {
            m_EffectsHandler.RemoveEffectFromWallpaper(m_Wallpaper);
        }

        public override void Undo() {
            m_EffectsHandler.AddEffectToWallpaper(m_Effect, m_Wallpaper);
        }
    }
}