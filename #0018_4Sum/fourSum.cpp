class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int left,right,sum;
        vector<vector<int>>ans;
        if(nums.size()<4){return ans;}
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-3;++i){
            if(i>0&&nums[i-1]==nums[i]){continue;}//avoid duplication

            for(int j=i+1;j<nums.size()-2&& nums[i]+nums[j]+nums[j+1]+nums[j+2]<=target;++j){
                if(j>i+1&&nums[j-1]==nums[j]){continue;}//avoid duplication
                left=j+1;
                right=nums.size()-1;
                while(left<right){
                    sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum>target){--right;}
                    else if(sum<target){++left;}
                    else if(left!=j+1&&nums[left]==nums[left-1]){++left;}//avoid duplication
                    else if(right!=nums.size()-1&&nums[right]==nums[right+1]){--right;}//avoid duplication
                    else{
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        ++left;--right;
                    }
                }

            }
        }
        return ans;
    }
};
