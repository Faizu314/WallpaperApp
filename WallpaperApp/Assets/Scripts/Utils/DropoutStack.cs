using System.Collections.Generic;

namespace Wallpaper.Utils {

    public class DropoutStack<T> : LinkedList<T> {

        int m_MaxLength = int.MaxValue;
        public int MaxLength { get { return m_MaxLength; } set { SetMaxLength(value); } }

        public DropoutStack() { }
        public DropoutStack(int maxLength) {
            MaxLength = maxLength;
        }

        public void Push(T item) {
            if (Count > 0 && Count + 1 > MaxLength)
                RemoveLast();

            if (Count + 1 <= MaxLength)
                AddFirst(item);
        }

        public T Pop() {
            T item = First.Value;
            RemoveFirst();
            return item;
        }

        void SetMaxLength(int max) {
            m_MaxLength = max;

            if (Count <= m_MaxLength)
                return;

            int leftover = Count - m_MaxLength;

            for (int i = 0; i < leftover; i++)
                RemoveLast();
        }
    }
}