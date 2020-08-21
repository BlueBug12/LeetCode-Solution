class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1,0);
        ans.front()=1;
        for(int i=1;i<rowIndex+1;++i){
            for(int j=i;j>=1;--j){
                ans.at(j)+=ans.at(j-1);
            }
        }
        return ans;
    }
};
