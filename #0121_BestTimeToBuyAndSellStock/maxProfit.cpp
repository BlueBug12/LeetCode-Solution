class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int min_cost = INT_MAX;

        for(int i=0;i<prices.size();++i){
            if(prices.at(i)<min_cost){
                min_cost = prices.at(i);
            }
            else{
                profit = max(prices.at(i)-min_cost,profit);
            }
        }
        return profit;
    }
};
