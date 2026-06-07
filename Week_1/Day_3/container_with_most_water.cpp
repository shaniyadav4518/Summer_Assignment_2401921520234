class Solution {
public:
    int maxArea(vector<int>& height) {
    int  n=height.size();
        long long    left=0;
     long long right=n-1;
        long long  MaxArea=0;
        long long   Area;
        int m;
        while(left<right){
            long long  m=min(height[left],height[right]);
            Area=m*(right-left);
            MaxArea=max(MaxArea,Area);
            if(m==height[left]){
                left++;
            }
            else{
                right--;
            }
        }
        return MaxArea;
        
    }
};