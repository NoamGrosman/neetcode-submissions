class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            while ((left < right) && (numbers[left] + numbers[right] > target)) {
                right--;
            }
            while ((left < right) && (numbers[left] + numbers[right] < target)) {
                left++;
            }
            if (numbers[left] + numbers[right] == target) {
                return {left+1,right+1};
            }
        }
        return {left+1,right+1};
    }
};

// We know that it is sorted in a non-decreasing order, and indexes start 
// from 1 (not 0).