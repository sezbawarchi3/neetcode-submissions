class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0], maxProfit = 0;
        for(int n : prices){
            if(bestbuy < n){
                maxProfit = max(maxProfit, n - bestbuy);
            }
            bestbuy = min(bestbuy, n);
        }
        return maxProfit;
    }
};
