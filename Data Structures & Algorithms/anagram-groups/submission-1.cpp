class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        vector<vector<string>> result;
        for (auto it : strs) {
            string s = it; // Defining a dummy string to be equal to the given string for strs
            sort(s.begin(), s.end()); // Sorting that dummy string
            um[s].push_back(it); // Inside the map, the Key (first value) should hold the sorted copy of s, and the second value should hold the  actual string, so for [act, cat, tac], the map should look like: um.first = act, um.second = act, cat, tac.
        }
        for (auto& i : um) {
            result.push_back(i.second);
        }
        return result;
    }
};


// For the naive solution i can sort every string inside the vector of strings, and just check if the strings themselves are equal.
// For each original string s in strs: 
//      key = sorted copy of s
// do something with map[key] and s.