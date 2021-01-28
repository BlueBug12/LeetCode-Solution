class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int* dp = new int[prices.size()+2]();
        for(int i=1;i<prices.size();++i){
            for(int j=0;j<i;++j){
                dp[i+2] = max(dp[i+2],dp[j]+prices.at(i)-prices.at(j));
            }
            dp[i+2] = max(dp[i+2],dp[i+1]);
        }
        int ans = dp[prices.size()+1];
        delete [] dp;
        return ans;
    }
};
