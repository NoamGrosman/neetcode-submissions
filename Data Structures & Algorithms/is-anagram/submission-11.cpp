class Solution {
public:
    bool isAnagram(string s, string t) {
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


// The usage of an unordered map lets us put each character into the map.
// When putting letters from the string s, we give each character a number, meaning if we see 'a' two times, we give it 2.
// When going over the string t, each time we pass the same letter we saw on string s, we take one from it, meaning if t has two 'a', we end up
// with 'a' -> 0 on the map.
// If in the end, when we go over the map we see any letter without the number 0 attached to it, we know for a fact that one string contained it, 
// and the other didnt.