class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int res = 0;

        while (left < right) {
            int maxArea = min(heights[left], heights[right]) * (right - left);
            res = max(res, maxArea);

            if (heights[left] <= heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return res;
    }
};
