class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int cont_max = nums.at(0);
        int cont_min = nums.at(0);
        int ans = nums.at(0);

        for(size_t i = 1;i<nums.size();++i){
            int temp_max = max({cont_max*nums.at(i),cont_min*nums.at(i),nums.at(i)});
            int temp_min = min({cont_max*nums.at(i),cont_min*nums.at(i),nums.at(i)});
            cont_max = temp_max;
            cont_min = temp_min;
            ans = max(cont_max,ans);
        }
        return ans;
    }
};
