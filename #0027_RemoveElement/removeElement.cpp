class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for(int i=0;i<nums.size();++i){
            if(nums.at(i)==val){
                nums.erase(nums.begin()+i);
                --i;
            }
        }
        return nums.size();
    }
};


/*Another solution
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto len = 0;
        for (auto i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[len] = move(nums[i]);
                len++;
            }
        }
        nums.erase(nums.begin()+len,nums.end());
        return len;
    }
};
*/
