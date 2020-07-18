class Solution {
public:
    bool find_word(const int pos, const int i, const int j,vector<vector<char>>& board, const string &word){
        if(pos==word.size())
            return true;
        if(i<0||i>=board.size()||j<0||j>=board.at(0).size()||word.at(pos)!=board[i][j])
            return false;

        board[i][j]=' ';
        if(find_word(pos+1,i-1,j,board,word))
            return true;

        if(find_word(pos+1,i+1,j,board,word))
            return true;

        if(find_word(pos+1,i,j-1,board,word))
            return true;

        if(find_word(pos+1,i,j+1,board,word))
            return true;

        board[i][j]=word.at(pos);
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(!word.size())
            return true;
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board.at(0).size();++j){
                if(find_word(0,i,j,board,word))
                    return true;
            }
        }
        return false;
    }
};
