class Solution {
public:

    string encode(vector<string>& strs) {
        // In a vector of strings, i need to convert the given vector to
        // a single string -> send it over as a single string, and write
        // a function that decodes it back into a vector of strings.
        string encoded_string = "";
        for (const string& s : strs) {
            encoded_string += to_string(s.size()) + '#' + s;
        }
        return encoded_string; 
    }

    vector<string> decode(string s) {
        // This function receives a single long string and transforms it
        // back into a vector of strings.
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + len;
            res.push_back(s.substr(i, len));
            i = j;
        }
        return res;
    }
};
