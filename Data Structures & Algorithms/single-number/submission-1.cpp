class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rem = 0;
        for (int i : nums) {
            rem = rem ^ i;
        }
        return rem;
    }
};
