class Solution {
public:

    inline bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()||!matrix.at(0).size()){return false;}
        int col=matrix.at(0).size();
        int left=0;
        int right=matrix.size()*col-1;
        int middle;
        while(left<=right){
            middle=(right+left)/2;
            if(target==matrix[middle/col][middle%col])
                return true;
            else if(target<matrix[middle/col][middle%col])
                right=middle-1;
            else
                left=middle+1;
        }
        return false;
    }
};
