class Solution {
public:
    bool Isalphanumeric(char s) {
        if ((s >= '0' && s <= '9') ||
            (tolower(s) >= 'a' && tolower(s) <= 'z')) {
            return true;
        } else
            return false;
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            if (!Isalphanumeric(s[start])) {
                start++;
                continue;
            }
            if (!Isalphanumeric(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};