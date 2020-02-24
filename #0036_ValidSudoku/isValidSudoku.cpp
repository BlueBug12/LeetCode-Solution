class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool>row{0,0,0,0,0,0,0,0,0};
        vector<bool>column{0,0,0,0,0,0,0,0,0};
        vector<bool>grid{0,0,0,0,0,0,0,0,0};
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]!='.'){
                    int n=board[i][j]-'1';
                    if(row[n]==1){return 0;}
                    else{row[n]=1;}
                }
                if(board[j][i]!='.'){
                    int n=board[j][i]-'1';
                    if(column[n]==1){return 0;}
                    else{column[n]=1;}
                }
                if(board[3*(i/3)+j/3][3*(i%3)+j%3]!='.'){
                    int n=board[3*(i/3)+j/3][3*(i%3)+j%3]-'1';
                    if(grid[n]==1){return 0;}
                    else{grid[n]=1;}
                }
            }
            row.assign(9,0);
            column.assign(9,0);
            grid.assign(9,0);
        }
        return 1;

    }
};
