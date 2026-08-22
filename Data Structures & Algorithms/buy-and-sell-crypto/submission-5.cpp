class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, sell = 0;
        int profit = sell - buy;
        for (int i = 0; i < prices.size(); i++) {
            buy = prices[i];
            for (int j = i; j < prices.size(); j++) {
                sell = prices[j];
                int curr_profit = sell - buy;
                if (curr_profit > profit) {
                    profit = curr_profit;
                }
            }
        }
        return profit;
    }
};


