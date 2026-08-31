class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int maxLen = 0;
        unordered_set<char> sub;
        while (r < s.size()) {
            while (sub.find(s[r]) != sub.end()) {
                // We found it somewhere
                sub.erase(s[l]);
                l++;
            }
            sub.insert(s[r]);
            r++;
            maxLen = max((int)sub.size(), maxLen);
        }
        return maxLen;
    }
};
