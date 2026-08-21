class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int r=0;
        int profit=0;
        int mn=INT_MAX;
        while(r<prices.size()){
            mn=min(mn,prices[r]);
            profit=max(profit,prices[r]-mn);
            r++;
        }
        return profit;
    }
};
