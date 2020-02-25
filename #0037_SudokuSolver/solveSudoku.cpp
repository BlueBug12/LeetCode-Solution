class Solution {
public:
    set<int> possible_value(int row,int column,vector<vector<char>>&sudoku){
        set<int>s={1,2,3,4,5,6,7,8,9};
        for(int i=0;i<9;++i){
            if(sudoku[row][i]!='.')
                s.erase(sudoku[row][i]-'0');
            if(sudoku[i][column]!='.')
                s.erase(sudoku[i][column]-'0');
            if(sudoku[3*(row/3)+i/3][3*(column/3)+i%3]!='.')
                s.erase(sudoku[3*(row/3)+i/3][3*(column/3)+i%3]-'0');
        }
        return move(s);
    }
    void solveSudoku(vector<vector<char>>& board) {
        stack<set<int>>records;
        stack<vector<int>>ans;
        set<int>s;
        vector<int>v;
        bool re=0;
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.'){
                    if(!re)
                        s=possible_value(i,j,board);
                    if(!s.empty()){
                        ans.push({i,j});
                        board[i][j]=char(*s.begin()+'0');
                        s.erase(s.begin());
                        records.push(move(s));//try to move
                        re=0;
                    }
                    else{
                        re=1;
                        do{
                            v=ans.top();ans.pop();
                            board[v[0]][v[1]]='.';
                            s=records.top();records.pop();
                        }while(s.empty());

                        i=v[0];
                        j=v[1]-1;

                    }
                }
            }
        }
    }
};
/*faster solution by 050806_770524
class Solution {
public:
    int getSquareIdx(int i, int j) {
        return (i / 3) * 3 + j / 3;
    }
    bool solveSudoku(int i, int j, vector<vector<char>>& board) {
        if(j >= 9)
            return solveSudoku(i + 1, 0, board);
        if(i == 9)
            return true;
        if(board[i][j] != '.')
            return solveSudoku(i, j + 1, board);
        else {
            for(int val = 1; val <= 9; ++val) {
                if(!row[i].test(val) && !col[j].test(val) && !square[getSquareIdx(i, j)].test(val)) {
                    row[i].set(val), col[j].set(val), square[getSquareIdx(i, j)].set(val);
                    board[i][j] = (char)(val + '0');
                    if(solveSudoku(i, j + 1, board))
                        return true;
                    board[i][j] = '.';
                    row[i].reset(val), col[j].reset(val), square[getSquareIdx(i, j)].reset(val);
                }
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++i) {
            for(int j = 0; j < 9; ++j) {
                if(board[i][j] != '.') {
                    int val = board[i][j] - '0';
                    row[i].set(val);
                    col[j].set(val);
                    square[getSquareIdx(i, j)].set(val);
                }
            }
        }
        solveSudoku(0, 0, board);
    }
private:
    bitset<10> row[10];
    bitset<10> col[10];
    bitset<10> square[10];
};
*/
