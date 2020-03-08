class Solution {
public:
    bool canJump(vector<int>& nums) {
        int safe=0;
        for(int i=0;i<nums.size()-1;++i){
            --safe;
            if(nums.at(i)==0&&safe<=0){
                return 0;
            }
            else{
                safe=max(safe,nums.at(i));
            }
        }
        return 1;
    }
};
