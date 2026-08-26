class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int diff = 0 - nums[i] - nums[j];
                int left = j + 1, right = nums.size() - 1;
                while (left <= right) {
                    int mid = (right + left) / 2;
                    if (nums[mid] == diff) res.insert({nums[i], nums[j], nums[mid]});
                    if (nums[mid] < diff) {
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                } 
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
