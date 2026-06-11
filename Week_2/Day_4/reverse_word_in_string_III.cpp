class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n = s.size();
        int i = 0;

        while (i < n) {
            int start = i;

            while (i < n && s[i] != ' ')
                i++;

            for (int j = i - 1; j >= start; j--)
                ans += s[j];

            if (i < n)
                ans += ' ';

            i++;
        }

        return ans;
    }
};