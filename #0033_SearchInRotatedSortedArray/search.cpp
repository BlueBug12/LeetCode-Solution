class Solution {
public:
    int find_pivot(int left,int right){
        if(left+1==right){
            return n.at(left)>n.at(right)?right:left;
        }
        int center=(left+right)/2;

        if(n.at(center)<n.at(left)){return find_pivot(left,center);}
        else if(n.at(center)>n.at(right)){return find_pivot(center,right);}
        else{return 0;}
    }

    int binary_search(int left,int right){
        if(left>right){return -1;}
        int center=(left+right)/2;
        if(n.at(center)==t){return center;}
        else{
            if(n.at(center)>t){return binary_search(left,center-1);}
            else{return binary_search(center+1,right);}
        }
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==0){return -1;}
        n=nums;
        t=target;
        pivot=find_pivot(0,n.size()-1);
        if(pivot==0){return binary_search(0,n.size()-1);}
        if(target>n.at(0)){return binary_search(0,pivot-1);}
        else if(target<n.at(0)){return binary_search(pivot,n.size()-1);}
        else{return 0;}
    }
private:
    vector<int>n;
    int pivot;
    int t;
};
