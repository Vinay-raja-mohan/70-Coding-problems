class Solution {
public:
    int findPositiveStartIdx(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int firstPosIdx = nums.size();
        
        while (start <= end) {
            int midIdx = start + (end - start) / 2;
            if (nums[midIdx] < 0) {
                start = midIdx + 1;
            } else {
                firstPosIdx = midIdx;
                end = midIdx - 1;
            }
        }
        
        return firstPosIdx;
    }

    vector<int> sortedSquares(vector<int>& nums) {
        int length = nums.size();
        int positiveIdx = findPositiveStartIdx(nums);
        int negativeIdx = positiveIdx - 1;
        vector<int> result;
        
        while (positiveIdx < length && negativeIdx >= 0) {
            if (nums[positiveIdx] < abs(nums[negativeIdx])) {
                result.push_back(nums[positiveIdx] * nums[positiveIdx]);
                positiveIdx++;
            } else {
                result.push_back(nums[negativeIdx] * nums[negativeIdx]);
                negativeIdx--;
            }
        }
        
        while (positiveIdx < length) {
            result.push_back(nums[positiveIdx] * nums[positiveIdx]);
            positiveIdx++;
        }
        
        while (negativeIdx >= 0) {
            result.push_back(nums[negativeIdx] * nums[negativeIdx]);
            negativeIdx--;
        }
        
        return result;
    }
};
