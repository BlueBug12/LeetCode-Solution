class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>ans={0};
        int len=1;
        while(ans.size()!=num+1){
            for(size_t i=0;i<len&&ans.size()!=num+1;++i){
                ans.push_back(ans.at(i)+1);
            }
            len*=2;
        }
        return ans;
    }
};
