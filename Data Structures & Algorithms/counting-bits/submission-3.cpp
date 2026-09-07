class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp = {0};
        int offset = 1;
        for (int i = 1; i <= n; i++) {
            if (offset * 2 == i) offset = i;
            dp.push_back(1 + dp[i - offset]);
        }
        return dp;
    }
};
