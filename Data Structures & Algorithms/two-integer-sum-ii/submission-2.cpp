class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> um;
        for (int i = 0; i < numbers.size(); i++) {
            int diff = target - numbers[i];
            if (um.find(diff) != um.end()) {
                return {um[diff] + 1, i + 1};
            }
            um[numbers[i]] = i;
        }
        return {};
    }
};
