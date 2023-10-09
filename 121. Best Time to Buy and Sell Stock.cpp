class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();++i){
            int sell=prices[i];
            ans=max(ans,sell-buy);
            if(prices[i]<buy){
                buy=prices[i];
            }
        }
        return ans;
    }
};
