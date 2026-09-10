class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0;
        int maxLen = 0;
        unordered_set<char> us;
        while(r < s.size()) {
            while (us.find(s[r]) != us.end()) {
                us.erase(s[l]);
                l++;
            }
            us.insert(s[r]);
            r++;
            maxLen = max((int)us.size(), maxLen);
        }
        return maxLen;
    }
};
