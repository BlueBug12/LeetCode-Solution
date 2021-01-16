class Solution {
public:
    int rob(vector<int>::iterator begin,vector<int>::iterator end){
        int* max_money = new int[2]();
        for(;begin!=end;++begin){
            swap(max_money[0],max_money[1]);
            max_money[1] = max(*begin+max_money[1],max_money[0]);
        }
        int result = max(max_money[0],max_money[1]);
        delete [] max_money;
        return result;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums.at(0);
        return(max(rob(nums.begin(),prev(nums.end())),rob(++nums.begin(),nums.end())));
    }
};
