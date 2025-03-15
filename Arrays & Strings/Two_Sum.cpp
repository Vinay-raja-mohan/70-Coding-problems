class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            int diff = target - nums[i];
            if (hashMap.find(diff) != hashMap.end()) {
                return {i, hashMap[diff]};
            }
            hashMap[nums[i]] = i;
        }
        return {};
    }
};
