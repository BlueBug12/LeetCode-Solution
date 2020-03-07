class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size()==0){return {};}
        int up=0;
        int down=matrix.size()-1;
        int left=0;
        int right=matrix.at(0).size()-1;

        vector<int>ans;
        while(up<down&&left<right){
            for(int i=left;i<right;++i){
                ans.push_back(move(matrix[up][i]));
            }
            for(int i=up;i<down;++i){
                ans.push_back(move(matrix[i][right]));
            }
            for(int i=right;i>left;--i){
                ans.push_back(move(matrix[down][i]));
            }
            for(int i=down;i>up;--i){
                ans.push_back(move(matrix[i][left]));
            }
            ++up;++left;
            --down;--right;
        }


        if(right==left&&up<down){//horizontal line
            for(int i=up;i<=down;++i){ans.push_back(move(matrix[i][left]));}
        }
        else if(up==down&&left<right){//vertical line
            for(int i=left;i<=right;++i){ans.push_back(move(matrix[up][i]));}
        }
        else if((up==down)&&(right==left)&&(up==right)){ans.push_back(move(matrix[up][right]));}//central dot
        return ans;
    }
};
