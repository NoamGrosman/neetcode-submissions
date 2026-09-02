class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int res = 0;

        while (l < r) {
            int maxArea = min(heights[l], heights[r]) * (r - l);
            res = max(maxArea, res);

            if (heights[l] <= heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return res;
    }
};


// For each heights[i], the maxArea will be its height * heights.size() - i.