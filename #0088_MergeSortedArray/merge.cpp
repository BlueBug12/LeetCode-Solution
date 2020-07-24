class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index1=m-1;
        int index2=n-1;
        int merge_index=m+n-1;
        while(index2>=0){
            if(index1>=0&&nums1.at(index1)>nums2.at(index2))
                nums1.at(merge_index)=nums1.at(index1--);
            else
                nums1.at(merge_index)=nums2.at(index2--);
            --merge_index;
        }
    }
};
