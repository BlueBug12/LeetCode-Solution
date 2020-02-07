class Solution {
public:

    bool binary_search(vector<int>&list,int left,int right,int target){

        if(left>right){return 0;}
        int pos=(right+left)/2;
        int middle=list[pos];
        if(middle==target){return 1;}
        else if(middle<target){return binary_search(list,pos+1,right,target);}
        else{return binary_search(list,left,pos-1,target);}
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int sum;
        vector<int>set{0,0,0};
        for(int i=0;i<nums.size()&&nums[i]<=0;++i){
            if(i!=0&&nums[i]==nums[i-1]){continue;}
            set[0]=nums[i];
            sum=nums[i];

            for(int j=i+1;j<nums.size();++j){
                if(j!=i+1&&nums[j]==nums[j-1]){continue;}
                set[1]=nums[j];
                sum+=nums[j];

                if(binary_search(nums,j+1,nums.size()-1,-(sum))){
                    set[2]=(-sum);
                    ans.push_back(set);
                    //break;
                }
                sum=set[0];
            }
        }
        return ans;
    }
};

/*
Better solution:

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3) return {};
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int j, k, sum;
        for (int i = 0; i < nums.size()-1 && nums[i] <= 0; i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            j = i+1;
            k = nums.size()-1;
            sum = -1;
            while (j < k){
                sum = nums[i] + nums[j] + nums[k];
                if (sum > 0) --k;
                else if (sum < 0) ++j;
                else if (j < k-1 && nums[k] == nums[k-1]) --k;
                else if (j+1 < k && nums[j] == nums[j+1]) ++j;
                else {
                    result.push_back({nums[i],nums[j],nums[k]});
                    --k;
                    ++j;
                }
            }
       }
        return result;
    }
};
*/
