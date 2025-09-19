class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for (auto days : prices) {
            if (days < buy) {
                buy = days;
            } else {
                if ((days - buy)> profit) profit = days - buy;
                }
        }
        return profit;
    }
};