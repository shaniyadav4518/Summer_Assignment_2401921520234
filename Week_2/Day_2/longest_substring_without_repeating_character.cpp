class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int left=0;
        int right=0;
       
        int maxlen=0;
        while(right<s.length()){
            if(st.count(s[right])){
                st.erase(s[left]);
                
                left++;
            }
            else{
                st.insert(s[right]);
            
            
            int len=right-left+1;
           maxlen=max(maxlen, len);
            right++;

        }
        }
        return maxlen;


        
    }
};