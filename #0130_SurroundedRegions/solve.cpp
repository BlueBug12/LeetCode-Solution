class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()<=2||board.at(0).size()<=2)
            return ;
        vector<vector<char>>table;
        for(size_t i=0;i<board.size();++i){
            table.push_back(board.at(i));
            for(size_t j=0;j<board.at(i).size();++j){
                board.at(i).at(j) = 'X';
            }
        }
        board.at(0).back() = table.at(0).back();
        board.at(0).front() = table.at(0).front();
        board.back().back() = table.back().back();
        board.back().front() = table.back().front();

        //first row and last row
        for(size_t i=1;i<board.at(0).size()-1;++i){
            DFS(table,board,0,i);
            DFS(table,board,board.size()-1,i);
        }
        //other borders
        for(size_t i = 1;i<board.size()-1;++i){
            DFS(table,board,i,0);
            DFS(table,board,i,board.at(i).size()-1);
        }
    }
    void DFS(vector<vector<char>>& board,vector<vector<char>>& ans,int i,int j){
        if(board.at(i).at(j)=='X'||ans.at(i).at(j)=='O')
            return ;
        ans.at(i).at(j)='O';
        if(i-1>0)
            DFS(board,ans,i-1,j);
        if(i+1<board.size()-1)
            DFS(board,ans,i+1,j);
        if(j-1>0)
            DFS(board,ans,i,j-1);
        if(j+1<board.at(i).size()-1)
            DFS(board,ans,i,j+1);
    }
};
