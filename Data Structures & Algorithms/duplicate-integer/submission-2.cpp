class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // naive solution: Go over the array using a 'for' loop, with each iteration marking arr[i] and comparing it to every other element in
        // the array. Time Complexity: n + n-1 + n-2 + n-3 + ... + 1 = O(n^2).
        // if (nums.size() == 1 || nums.size() == 0) return false;
        // for (int i = 0; i < nums.size(); i++) {
        //     for (int j = i; j < nums.size() - 1; j++) {
        //         if (nums[i] == nums[j + 1]) return true;
        //     }
        // }
        // return false;

        // optimizing the solution: If we sort the array we can use binary search to minimize the complexity.
        // Say we have the array [1,2,3,4,5,6,7,8,9,9,10], instead of going over the entire array, we can look at nums[i] and compare it to the
        // the following num[i+1], if they are not equal, we increment i until we reach the last number.
        // Time Complexity: O(nlog(n)) for the sorting, and then O(n) for going over the array once.
        sort(nums.begin(), nums.end());
        if (nums.size() == 1 || nums.size() == 0) return false;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) return true;
        }
        return false;
    }
};