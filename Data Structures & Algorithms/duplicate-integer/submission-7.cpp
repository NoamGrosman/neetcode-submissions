class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check(nums.begin(), nums.end());
        return (check.size() != nums.size());
    }
};