class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> res;
        for (char ch : s) {
            res[ch]++;
        }
        for (char ch : t) {
            res[ch]--;
        }
        for (auto it : res) {
            if (it.second != 0) return false;
        }
        return true;
    }
};
