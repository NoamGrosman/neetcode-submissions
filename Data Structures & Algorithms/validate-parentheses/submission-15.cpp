class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') par.push(ch);
            else if (par.empty()) return false;
            else {
                if ((ch == ')' && par.top() == '(') || (ch == ']' && par.top() == '[') || (ch == '}' && par.top() == '{')) {
                    par.pop();
                } else return par.empty();
            }
        }
        return par.empty();
    }
};
