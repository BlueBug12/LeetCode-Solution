class Solution {
public:
    void sortColors(vector<int>& nums) {
        int color[3]={-1,-1,-1};
        int index;
        for(int i=0;i<nums.size();++i){
            index=i;

            for(int j =2;j>nums.at(index);--j){
                if(color[j]!=-1){//color[j] exist, need to swap
                    if(color[nums.at(index)]==-1)
                        color[nums.at(index)]=color[j];
                    swap(nums.at(color[j]),nums.at(index));
                    index=color[j]++;
                }
            }
            if(color[nums.at(index)]==-1){
                color[nums.at(index)]=index;
            }

        }
    }
};
