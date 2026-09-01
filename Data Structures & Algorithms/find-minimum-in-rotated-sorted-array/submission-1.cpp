class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size() - 1;
        int res = nums[0];
        while (l <= r) {
            if (nums[l] < nums[r]) { // Normal sorted array -> return nums[0]
                res = min(res, nums[l]);
                break;
            }
            
            int m = l + (r - l) / 2;
            res = min(res, nums[m]);
            
            if (nums[m] >= nums[l]) { // Array is shifted -> binary-search
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return res;
    }
};

// If nums[0] < nums[nums.size() - 1] -> the array is fully sorted and we can
// do a normal binary search

// If nums[0] > nums[nums.size() - 1] -> the array is shifted and we need to 
// think of a variation of a binary search