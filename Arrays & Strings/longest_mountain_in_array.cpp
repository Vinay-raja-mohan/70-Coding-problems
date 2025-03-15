class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int arrSize = arr.size();
        if (arrSize < 3)
            return 0;
        
        int result = 0;
        
        for (int current = 1; current < arrSize - 1; current++) {
            if (arr[current] > arr[current - 1] && arr[current] > arr[current + 1]) {
                int leftIndex = current;
                while (leftIndex > 0 && arr[leftIndex] > arr[leftIndex - 1])
                    leftIndex--;
                
                int rightIndex = current;
                while (rightIndex < arrSize - 1 && arr[rightIndex] > arr[rightIndex + 1])
                    rightIndex++;
                
                result = max(result, rightIndex - leftIndex + 1);
            }
        }
        
        if (result < 3)
            return 0;
        
        return result;
    }
};

