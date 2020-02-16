class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int temp;
        if(nums.size()==0){return 0;}
        else{temp=nums.at(0);}
        for(int i=1;i<nums.size();++i){
            if(nums.at(i)==temp){
                nums.erase(nums.begin()+i);
                --i;
            }
            else{
                temp=nums.at(i);
            }

        }
        return nums.size();

    }
};
/* much faster solution using unique
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
      return nums.size();
    }
};

*/
