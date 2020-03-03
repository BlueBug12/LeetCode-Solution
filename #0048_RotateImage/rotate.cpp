class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()==0){return ;}
        int range=matrix.at(0).size();
        for(int i=0;i<range/2;++i){
            for(int j=0+i;j<range-1-i;++j){
                swap(matrix[i][j],matrix[range-j-1][i]);
                swap(matrix[range-j-1][i],matrix[range-i-1][range-j-1]);
                swap(matrix[range-i-1][range-j-1],matrix[j][range-i-1]);
            }
        }
    }
};
