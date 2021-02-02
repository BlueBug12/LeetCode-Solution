class Solution {
public:
    int integerBreak(int n) {
        int* dp = new int[n+1]();
        dp[1] = 1;
        for(int i=2;i<n;++i){
            for(int j=1;j<=i/2;++j){
                dp[i]=max({dp[j]*dp[i-j],i,dp[i]});
            }
        }
        for(int j=1;j<=n/2;++j)
            dp[n]=max({dp[j]*dp[n-j],dp[n]});
        int ans = dp[n];
        delete[] dp;
        return ans;
    }
};
