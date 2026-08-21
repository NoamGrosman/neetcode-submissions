class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        unordered_map<char, char> closeToOpen = {
            {')' , '('},
            {']' , '['},
            {'}' , '{'}
        };

        for (char ch : s) {
            if (closeToOpen.count(ch)) {
                if (!paren.empty() && paren.top() == closeToOpen[ch]) {
                    paren.pop();
                } else {
                    return false;
                }
            } else {
                paren.push(ch);
            }
        }
        return paren.empty();
    }
};
