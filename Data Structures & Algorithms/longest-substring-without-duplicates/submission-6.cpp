class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int max_length = 0;
        unordered_set<char> sub;
        while (right < s.size()) {
            while (sub.find(s[right]) != sub.end()) {
                sub.erase(s[left]);
                left++;
            }
            sub.insert(s[right]);
            right++;
            max_length = max((int)sub.size(), max_length);
        }
        return max_length;
    }
};

