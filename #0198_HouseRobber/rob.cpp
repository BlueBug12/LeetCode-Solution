class Solution {
public:
    int rob(vector<int>& nums) {

        int max_money[2];
        max_money[0] = 0;//max money in the length of n-2
        max_money[1] = 0;//max money in the length of n-1

        for(size_t i = 0;i<nums.size();++i){
            swap(max_money[0],max_money[1]);
            max_money[1] = max(nums.at(i)+max_money[1],max_money[0]);
        }
        return max(max_money[0],max_money[1]);
    }
};
