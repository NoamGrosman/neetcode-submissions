class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (um.find(diff) != um.end()) {
            // If whenever we use the find function, we DONT reach the end -> that means we found the number somewhere in the middle,
            // More specifically, it is inside the map, and it's exactly the number we were looking for, at the place where diff is -> um[diff].
                return {um[diff], i};
            }
            // If we reached the end, that means the map does not contain diff, and we need to make sure we remember that for nums[i], 
            // We havent found diff yet, so we log nums[i] into the map to rememeber it.
            um[nums[i]] = i;
        }
        return {};
    }
};

// Example:
// nums = [2,7,11,15], target = 9.
// 1. i = 0; nums[i] = 2; diff = 9-2 = 7; map before = {}; found? = no; action = insert 2->0.
// 2. i = 1; nums[i] = 7; diff = 7; map before = {2->0}; found? = yes; action = return {0,1}.