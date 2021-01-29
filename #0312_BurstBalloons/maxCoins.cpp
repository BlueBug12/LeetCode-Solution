class Solution {
public:
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);

        int n = nums.size()-1;

        int** dp  = new int* [n];
        for(int i=0;i<n;++i)
            dp[i] = new int [n]();

        for(int i=2;i<=n;++i){
            for(int j=0;j<=n-i;++j){
                int t= j+i-1;
                int temp_m = nums.at(j)*nums.at(t+1);
                for(int k=j;k<j+i-1;++k){
                    dp[j][t] = max(dp[j][t],dp[j][k]+dp[k+1][t]+nums.at(k+1)*temp_m);
                }
            }
        }
        int ans = dp[0][n-1];
        for(int i=0;i<n;++i)
            delete[] dp[i];

        delete[] dp;
        return ans;
    }
};
