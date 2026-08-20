class Solution {
public:
    bool isAnagram(string s, string t) {
        // I will initialize an unordered_map which uses two keys:
        // 1 will be the character itself ('a'/'c'/'e' etc..) and the
        // other will be the number of times it shows up.
        // For each char in the string s, we will increment the number of
        // times it shows up, while for each char in the string t, we will
        // decrement the number of times it shows up.
        // Which ever char that its second key does not equal 0 -> not
        // anagram.
        unordered_map<char, int> um;
        for (char c : s) {
            um[c]++;
        }
        for (char c : t) {
            um[c]--;
        }
        for (auto i : um) {
            if (i.second != 0) return false;
        }
        return true;
    }
};
