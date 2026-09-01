class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> res;
        for (vector<int> vec : matrix) {
            for (int num : vec) {
                res.push_back(num);
            }
        }
        int l = 0, r = res.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (res[m] == target) return true;
            if (res[m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return false;
    }
};


// I need to flat the matrix into a single vector of numbers - and just 
// do a regular binary-search on it

// How do i flatten a matrix?
// The matrix is ascending (each number is greater than the one before)