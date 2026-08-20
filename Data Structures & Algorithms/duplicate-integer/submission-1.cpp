class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // naive solution: Go over the array using a 'for' loop, with each iteration marking arr[i] and comparing it to every other element in
        // the array. Time Complexity: n + n-1 + n-2 + n-3 + ... + 1 = O(n^2).
        if (nums.size() == 1 || nums.size() == 0) return false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size() - 1; j++) {
                if (nums[i] == nums[j + 1]) return true;
            }
        }
        return false;
    }
};