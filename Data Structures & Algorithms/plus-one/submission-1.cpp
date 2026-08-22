class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        long long sum = 0;
        vector<int> vec;
        while (len > 0) {
            for (int i = 0; i < digits.size(); i++) {
                sum += digits[i] * pow(10, len - 1);
                len--;
            }
            sum++;
            cout << sum << endl;
            string s = to_string(sum);
            for (char c : s) {
                vec.push_back(c - '0');
            } 
        }
        return vec;
    }
};
