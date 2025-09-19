class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = INT_MAX;
        int temp = 0;
        for (auto days : prices) {
            if (days < buy) {
                buy = days;
            }
            temp = days - buy;
            if (profit < temp) profit = temp;
        }
        return profit;
    }
};