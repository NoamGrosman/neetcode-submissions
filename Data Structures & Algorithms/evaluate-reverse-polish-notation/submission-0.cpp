class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for (const string& s : tokens) {
            if (s == "+") {
                int a = res.top(); res.pop();
                int b = res.top(); res.pop();
                res.push(b + a);
            }
            else if (s == "-") {
                int a = res.top(); res.pop();
                int b = res.top(); res.pop();
                res.push(b - a);
            }
            else if (s == "*") {
                int a = res.top(); res.pop();
                int b = res.top(); res.pop();
                res.push(b * a);
            }
            else if (s == "/") {
                int a = res.top(); res.pop();
                int b = res.top(); res.pop();
                res.push(b / a);
            } else {
                res.push(stoi(s));
            }
        }
        return res.top();
    }
};
