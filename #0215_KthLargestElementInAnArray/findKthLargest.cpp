class Solution {
public:
    void maxHeapify(vector<int>&nums, int i, int n){
        while(i<n){
            int l_node = i*2 + 1;
            int r_node = i*2 + 2;
            int largest = i;
            if(l_node<n&&nums.at(l_node)>nums.at(largest))
                largest = l_node;
            if(r_node<n&&nums.at(r_node)>nums.at(largest))
                largest = r_node;
            if(largest!=i){
                swap(nums.at(i),nums.at(largest));
                i = largest;
            }else
                break;
        }
    }
    int pop(vector<int>&nums,int tail){
        swap(nums.at(0),nums.at(tail));
        maxHeapify(nums,0,tail);
        return nums.at(tail);
    }
    int findKthLargest(vector<int>& nums, int k) {
        for(int i =nums.size()/2-1;i>=0;--i)
            maxHeapify(nums,i,nums.size());

        int ans;
        for(int i=0;i<k;++i)
            ans = pop(nums,nums.size()-1-i);

        return ans;
    }
};
