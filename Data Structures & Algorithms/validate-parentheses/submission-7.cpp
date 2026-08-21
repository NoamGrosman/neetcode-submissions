class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                paren.push(ch);
            }
            else if (paren.empty()) return false;
            else {
                if ((ch == ')' && paren.top() == '(') || (ch == ']' && paren.top() == '[') || (ch == '}' && paren.top() == '{')) {
                    paren.pop();
                }
                else if (paren.empty() == false) {
                    return false;
                }
            }
        }
            return paren.empty();
    }
};

