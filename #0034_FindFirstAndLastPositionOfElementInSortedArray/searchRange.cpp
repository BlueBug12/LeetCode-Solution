//Solution1
class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target){
        vector<int>::iterator lower,upper;
        lower = lower_bound (v.begin(), v.end(), target);
        if(lower==v.end()|| *lower!=target){
            return {-1,-1};
        }
        upper = upper_bound (v.begin(), v.end(), target);
        return {lower-v.begin(),upper-v.begin()-1};
    }
};

/*Solution 2
class Solution {
public:
    void binary_search(int left,int right){
        if(left>right){ans.assign(2,-1);return ;}
        int center=(right+left)/2;
        if(n.at(center)>t){binary_search(left,center-1);}
        else if(n.at(center)<t){binary_search(center+1,right);}
        else{
            right=center;
            left=center;
            while(++right<n.size()&&n.at(right)==t);
            while(--left>=0&&n.at(left)==t);
            cout<<right<<' '<<left;
            ans={++left,--right};
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        n=nums;
        t=target;
        binary_search(0,n.size()-1);
        return ans;
    }
private:
    vector<int>n;
    vector<int>ans;
    int t;
};
*/
