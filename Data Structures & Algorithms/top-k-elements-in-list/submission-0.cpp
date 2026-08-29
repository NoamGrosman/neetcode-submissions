class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res; // Key -> the number, Value -> number of times it showed up in the array.
        for (int it : nums) {
            res[it]++;
        }

        vector<pair<int,int>> result;
        for (const auto& it : res) {
            result.push_back({it.second, it.first});
        }
        sort(result.rbegin(), result.rend());

        vector<int> sol;
        for (int i = 0; i < k; i++) {
            sol.push_back(result[i].second);
        }
        return sol;
    }
};
