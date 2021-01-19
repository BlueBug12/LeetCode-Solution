class Solution {
public:
    int numSquares(int n) {
        vector<int>dp = {0};
        while(dp.size()<=n){
            int m = dp.size();
            int temp = INT_MAX;
            for(int i = 1;i*i<=m;++i){
                temp = min(temp,1+dp[m-i*i]);
            }
            dp.push_back(temp);
        }
        return dp.back();
    }
};
