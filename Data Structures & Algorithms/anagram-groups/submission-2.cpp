class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        vector<vector<string>> result;
        for (const auto& it : strs) {
            string s = it; // Defining a dummy string to be equal to the given string for strs
            sort(s.begin(), s.end()); // Sorting that dummy string
            um[s].push_back(it); // Inside the map, the Key (first value) should hold the sorted copy of s, and the second value should hold the  actual string.
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

// Time: There are n strings with a length of k. We sort n strings of length k so that gives us: O(N * klog(k)).
// Space: O(N * k).