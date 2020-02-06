class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int range=INT_MAX;
        string ans="";
        if(strs.size()==0){return ans;}

        for(int i=0;;++i){
            if(i>=strs[0].size()){return ans;}
            char c=strs[0][i];
            for(int j=1;j<strs.size();++j){
                if(i>=strs[j].size()||strs[j][i]!=c){
                    return ans;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};
