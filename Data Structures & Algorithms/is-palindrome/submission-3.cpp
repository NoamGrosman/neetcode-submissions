class Solution {
public:
    bool isPalindrome(string s) {
        // I'll hold 2 pointers, one at the end and one at the beginning.
        // If the first is not equal to the last -> false.
        // If it is equal, move both first and last until we get true/false.
        // We know the string is made only with ascii characters
        // Meaning (A-Z), (a-z), (0-9)
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (right > left && !isalnum(s[right])) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
