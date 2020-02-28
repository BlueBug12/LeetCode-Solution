class Solution {
public:
    void combinationSum2(int sum,int start,vector<int>& candidates,vector<int>&v){

        for(int i=start;i<candidates.size();++i){
            if(sum+candidates.at(i)==t){
                vector<int>sub=v;
                sub.push_back(candidates.at(i));
                ans.push_back(move(sub));
                return ;
            }
            else if(sum+candidates.at(i)<t){
                if(i>start&&candidates.at(i)==candidates.at(i-1)){continue;}
                v.push_back(candidates.at(i));
                combinationSum2(sum+candidates.at(i),i+1,candidates,v);
                v.pop_back();
            }
            else{
                return ;
            }

        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        t=target;
        vector<int>v;
        combinationSum2(0,0,candidates,v);
        return ans;
    }
private:
    int t;
    vector<vector<int>>ans;
};
