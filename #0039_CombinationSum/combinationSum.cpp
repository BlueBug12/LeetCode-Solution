class Solution {

public:
    void combinationSum(int sum,int start,vector<int>& candidates,vector<int>&v){

        for(int i=start;i<candidates.size();++i){
            if(sum+candidates.at(i)==t){
                vector<int>sub=v;
                sub.push_back(candidates.at(i));
                ans.push_back(move(sub));
                return ;
            }
            else if(sum+candidates.at(i)<t){
                v.push_back(candidates.at(i));
                combinationSum(sum+candidates.at(i),i,candidates,v);
                v.pop_back();
            }
            else{
                return ;
            }

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        t=target;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        combinationSum(0,0,candidates,v);
        return ans;
    }

private:
    vector<vector<int>>ans;
    int t;
};
