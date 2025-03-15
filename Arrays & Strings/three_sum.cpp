class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> result;
        
        for (int i = 0; i < size; i++) {
            if (nums[i] > 0) break;
            if (i != 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1;
            int right = size - 1;
            
            while (left < right) {
                if (nums[left] + nums[right] == -nums[i]) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                } 
                else if (nums[left] + nums[right] > -nums[i]) right--;
                else left++;
            }
        }
        
        return result;
    }
};

