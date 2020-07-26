class Solution {
public:
    void subset(vector<int>& sub,vector<int>&nums,int index,vector<vector<int>>& ans){
        ans.push_back(sub);
        for(int i=index+1;i<nums.size();++i){
            if(i>index+1&&nums.at(i-1)==nums.at(i))
                continue;
            sub.push_back(nums.at(i));
            subset(sub,nums,i,ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>sub;
        vector<vector<int>>ans;
        subset(sub,nums,-1,ans);
        return ans;
    }
};
