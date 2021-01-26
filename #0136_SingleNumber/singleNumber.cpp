class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (size_t i = 0; i<nums.size(); i++){
            ans ^=nums.at(i);
        }
        return ans;
    }
};
