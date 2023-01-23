using System.Collections.Generic;
using Wallpaper.ImageHandling;
using static Wallpaper.ImageHandling.ImageCropper;

namespace Wallpaper.Editor {

    public class CropAction : WallpaperEditorActionBase {

        private readonly ImagesHandler m_ImageCropper;
        private readonly List<CropData[]> m_Data;

        public CropAction(ImagesHandler imageCropper, List<CropData[]> data) {
            m_ImageCropper = imageCropper;
            m_Data = data;
        }

        public override void Execute() {
            for (int i = 0; i < m_Data.Count; i++)
                if (m_Data[i] != null)
                    m_ImageCropper[i].SetCurrentState(m_Data[i][1]);
        }

        public override void Undo() {
            for (int i = 0; i < m_Data.Count; i++)
                if (m_Data[i] != null)
                    m_ImageCropper[i].SetCurrentState(m_Data[i][0]);
        }
    }
}