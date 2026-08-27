class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um;
        int left = 0, res = 0;

        for (int i = 0; i < s.size(); i++) {
            if (um.find(s[i]) != um.end()) {
                left = max(um[s[i]] + 1, left);
            }
            um[s[i]] = i;
            res = max(res, i - left + 1);
        }
        return res;
    }
};
