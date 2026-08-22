class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = 100;
        int best_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min_buy) {
                min_buy = prices[i];
            }
            if (prices[i] - min_buy > best_profit) {
                best_profit = prices[i] - min_buy;
            }
        }
        return best_profit;
    }
};
