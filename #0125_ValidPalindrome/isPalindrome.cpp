class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0,j=s.size()-1;i<j;++i,--j){
            while( i<j && !isalnum(s.at(i))){
                ++i;
            }
            while( j>i && !isalnum(s.at(j))){
                --j;
            }

            if(tolower(s.at(i))!=tolower(s.at(j)))
                return false;
        }
        return true;

    }
};
