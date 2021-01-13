class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool* dp = new bool[s.size()+1]();
        dp[0] = true;
        for(size_t i = 1;i<=s.size();++i){
            for(size_t j = 0;j<i;++j){
                if(dp[j]&& (find(wordDict.begin(),wordDict.end(),s.substr(j,i-j)))!=wordDict.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
