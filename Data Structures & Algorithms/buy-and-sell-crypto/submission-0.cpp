class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int l = 0, r = 1;
        while(r < prices.size()){
            if(prices[l] > prices[r]){
                l = r;
                r += 1;
            }
            else{
                profit = max(profit, prices[r] - prices[l]);
                r += 1;
            }
        }
        return profit;
    }
};
