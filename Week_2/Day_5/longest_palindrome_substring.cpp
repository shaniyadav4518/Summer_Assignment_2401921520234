class Solution {
public:
    string longestPalindrome(string s) {
        
         int i;
         int start=0;
         int maxlength=1;
        
       
      
       
        for(int i  =0;i<s.size();i++){
              int left=i;
        int right=i;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                
                 int length=right-left+1;
                if(length>maxlength){
                    start=left;
                    maxlength=length;
                }
                 left--;
                right++;
               


            }
        }
        
    
             
            for( i=0;i<s.size();i++){
                int left=i;
            int right=i+1;
           
            while(left>=0 && right<s.size() && s[left]==s[right]){
                int length=right-left+1;
                if(length>maxlength){
                    start=left;
                    maxlength=length;
                }
                left--;
                right++;

            }

            }
    
            
            
            
            


        
        return s.substr(start,maxlength);

        
    }
};