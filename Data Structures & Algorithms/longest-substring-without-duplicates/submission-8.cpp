class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sub;
        int left = 0, res = 0;

        for (int i = 0; i < s.size(); i++) {
            while (sub.find(s[i]) != sub.end()) {
                sub.erase(s[left]);
                left++;
            }
            sub.insert(s[i]);
            res = max(res, i - left + 1);
        }
        return res;
    }
};
