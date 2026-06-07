class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,maxprofit=0,minprice=prices[0];
        for(i=0;i<prices.size();i++){
            maxprofit=max(maxprofit,prices[i]-minprice);
            minprice=min(minprice,prices[i]);
        }
        return maxprofit;
        
    }
};