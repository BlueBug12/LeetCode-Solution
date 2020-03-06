class Solution {
public:
     int maxSubArray(vector<int>& nums) {
        int max_so_far=nums[0];
        int curr = nums[0];
        for(int  x =1;x<nums.size();x++){
            curr = max(nums[x], curr+nums[x]);
            max_so_far=max(max_so_far,curr);
        }
        return max_so_far;
    }
};
