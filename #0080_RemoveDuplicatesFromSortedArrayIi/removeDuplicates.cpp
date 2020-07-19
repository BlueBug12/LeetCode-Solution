class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int counter=1;
        for(auto iter=nums.begin()+1;iter!=nums.end();){
            if(*(iter-1)!=*iter){
                counter=1;
            }
            else if(++counter>2){
                nums.erase(iter--);
            }
            ++iter;
        }
        return nums.size();
    }
};
