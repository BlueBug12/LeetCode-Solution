class Solution {
public:

    vector<int> grayCode(int n) {
        vector<int>ans{0};
        for(int i=0;i<n;++i){
            int j=ans.size()-1;
            for(;j>=0;--j){
                ans.push_back(ans.at(j)+pow(2,i));
            }
        }
        return ans;
    }
};
