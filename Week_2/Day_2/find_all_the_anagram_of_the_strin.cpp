class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int k = p.size();

        if (k > n) {
            return ans;
        }

        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for (int i = 0; i < k; i++) {
            a[p[i] - 'a']++;
            b[s[i] - 'a']++;
        }

        if (a == b) {
            ans.push_back(0);
        }

        for (int i = k; i < n; i++) {
            b[s[i] - 'a']++;
            b[s[i - k] - 'a']--;

            if (a == b) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};