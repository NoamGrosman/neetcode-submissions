class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int num : nums) {
            res ^= num;
        }
        return res;
    }
};

// 0 XOR A = A
// 1 XOR A = ~A
// A XOR A = 0
