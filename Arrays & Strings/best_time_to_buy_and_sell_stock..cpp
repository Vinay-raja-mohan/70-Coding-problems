class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
        int maximumProfit = 0;
        
        for (int index = 1; index < prices.size(); index++) {
            if (prices[index] < lowestPrice)
                lowestPrice = prices[index];
            else
                maximumProfit = max(maximumProfit, prices[index] - lowestPrice);
        }
        
        return maximumProfit;
    }
};
