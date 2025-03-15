class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int length = nums.size();
        vector<int> count(101, 0);
        for (int value : nums) {
            count[value]++;
        }
        for (int j = 1; j < 101; j++) {
            count[j] += count[j - 1];
        }
        vector<int> result(length);
        for (int k = 0; k < length; k++) {
            if (nums[k] == 0)
                result[k] = 0;
            else
                result[k] = count[nums[k] - 1];
        }
        return result;
    }
};
