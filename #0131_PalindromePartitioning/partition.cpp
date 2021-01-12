class Solution {
public:
    bool isPalindrome(const string& s,int i,int j){
        while(i<j){
            if(s.at(i++)!=s.at(j--))
                return false;
        }
        return true;
   }
    void helper(bool** dp,vector<string>&sub,int split,const string& s,vector<vector<string>>&ans){
        if(split==s.size()){
            ans.push_back(sub);
            return;
        }
        for(size_t i=split;i<s.size();++i){
            if(dp[split][i]){
                sub.push_back(s.substr(split,i-split+1));
                helper(dp,sub,i+1,s,ans);
                sub.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        bool** dp  = new bool*[s.size()];
        for(size_t i = 0;i < s.size();++i){
            dp[i] = new bool[s.size()]();
        }
        for(size_t i = 0;i<s.size();++i){
            for(size_t j = 0;j<=i;++j){
                dp[j][i]=isPalindrome(s,j,i);
            }
        }
        vector<string>temp;
        helper(dp,temp,0,s,ans);
        for(size_t i=0;i<s.size();++i){
            delete[] dp[i];
        }
        delete[] dp;
        return ans;
    }
};
