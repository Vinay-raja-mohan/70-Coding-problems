class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0)
                nums[index] = -nums[index];
        }
        vector<int> result;
        for(int i = 0; i < len; i++) {
            if(nums[i] > 0)
                result.push_back(i + 1);
        }
        return result;
    }
};
