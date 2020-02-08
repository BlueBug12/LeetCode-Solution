class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int left;
        int right;
        int ans=nums[0]+nums[1]+nums[nums.size()-1];
        int diff=INT_MAX;
        int temp;
        for(int i=0;i<nums.size();++i){
            left=i+1;
            right=nums.size()-1;
            while(left<right){
                temp=nums[i]+nums[left]+nums[right];
                if(abs(ans-target)>abs(temp-target)){
                    ans=temp;
                }
                if(temp>target){--right;}
                else if(temp<target){++left;}
                else{return target;}
            }
            if(diff<abs(ans-target)){return ans;}
            else{diff=abs(ans-target);}
        }
        return ans;
    }
};
