class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        for(int i =0;i<nums.size();++i){
            dp[i] = 1;
        }
        int ans = 1;
        for(int i =1 ;i<nums.size();++i){
            for(int j =0;j<i;++j){
                if(nums.at(j)<nums.at(i)){
                    dp[i] = max(dp[j]+1,dp[i]);
                }
            }
            ans = max(dp[i],ans);
        }
        return ans;
    }
};
