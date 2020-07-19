class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        int counter=1;
        int number = nums.at(0);
        for(auto iter=nums.begin()+1;iter!=nums.end();){
            if(number!=*iter){
                counter=1;
                number=*iter;
            }
            else if(++counter>2){
                nums.erase(iter--);
            }
            ++iter;
        }
        return nums.size();
    }
};
