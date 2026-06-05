class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
        string longprefix = "";

        for(int i = 0; i < strs[0].size(); i++) {

            char check = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                if(i >= strs[j].size() || strs[j][i] != check) {
                    return longprefix;
                }
            }

            longprefix += check;
        }

        return longprefix;
    }
};
    