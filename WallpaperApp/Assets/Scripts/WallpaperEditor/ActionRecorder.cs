using System.Collections.Generic;
using Wallpaper.Utils;

namespace Wallpaper.Editor {

    public class ActionRecorder {

        private DropoutStack<WallpaperEditorActionBase> m_UndoActions;
        private Stack<WallpaperEditorActionBase> m_RedoActions = new();


        public ActionRecorder(int actionsCount) {
            m_UndoActions = new(actionsCount);
        }

        public void Record(WallpaperEditorActionBase action) {
            m_UndoActions.Push(action);
            m_RedoActions.Clear();
        }

        public void Undo() {
            if (m_UndoActions.Count == 0)
                return;

            var action = m_UndoActions.Pop();
            action.Undo();
            m_RedoActions.Push(action);
        }

        public void Redo() {
            if (m_RedoActions.Count == 0) 
                return;

            var action = m_RedoActions.Pop();
            action.Execute();
            m_UndoActions.Push(action);
        }

    }
}