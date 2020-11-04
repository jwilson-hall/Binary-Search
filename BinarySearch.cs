namespace BinarySearch
{
    class BinarySearch
    {
        public static int binarySearch(int[] sortedList,int target)
        {
            if (sortedList.Length == 0) return -1;
            int left = 0;
            int right = sortedList.Length - 1;
            while (left<=right)
            {
                int midpoint = left + (right - left) / 2;
                if (sortedList[midpoint] == target)
                {
                    return midpoint;
                }
                else if (sortedList[midpoint] > target)
                {
                    right = midpoint - 1;
                }
                else
                {
                    left = midpoint + 1;
                }
            }
            return -1;
        }
    }
}
