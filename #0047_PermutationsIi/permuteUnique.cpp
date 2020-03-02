

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        do {
           ans.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return ans;
    }
};
/*Solution 2
class Solution {
public:
    void permuteUnique(int start,vector<int>&nums){
        if(start==nums.size()-1){ans.push_back(nums);return ;}
        set<int>s;
        for(int i=start;i<nums.size();++i){

            if(s.find(nums.at(i))==s.end()){
                s.insert(nums.at(i));
                swap(nums.at(i),nums.at(start));
                permuteUnique(start+1,nums);
                swap(nums.at(i),nums.at(start));
            }

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        permuteUnique(0,nums);
        return ans;
    }
private:
    vector<vector<int>>ans;
};
*/
