class Solution {
public:
    void find_set(vector<int>&v,const vector<int>& nums,int index){
        ans.push_back(v);
        for(int i=index+1;i<nums.size();++i){
            v.push_back(nums.at(i));
            find_set(v,nums,i);
            v.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        find_set(temp,nums,-1);
        return ans;
    }
private:
    vector<vector<int>>ans;
};
