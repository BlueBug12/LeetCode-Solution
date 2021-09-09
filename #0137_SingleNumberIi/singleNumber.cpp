class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one = 0;
        int two = 0;
        for(int& i : nums){
            one = (one ^ i) & (~two);//first appear in one and not in two
            two = (two ^ i) & (~one);//first appear in two and not in one
        }
        return one;
    }
};
