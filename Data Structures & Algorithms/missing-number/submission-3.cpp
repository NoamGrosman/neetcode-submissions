class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++) {
            if (num_set.find(i) == num_set.end()) return i;
        }
        return -1;
    }
};

// Time O(n)
// Space O(n)
