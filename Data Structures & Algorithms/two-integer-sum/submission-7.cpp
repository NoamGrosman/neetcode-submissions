class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int x = target - nums[i];
            for (int j = nums.size() - 1; j > i; j--) {
                if (x == nums[j]) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
