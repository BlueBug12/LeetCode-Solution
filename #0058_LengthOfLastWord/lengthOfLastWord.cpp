class Solution {
public:
    int lengthOfLastWord(string s) {
        int counter=0;
        for(int i=s.size()-1;i>=0;--i){
            if(s.at(i)!=' '){
                ++counter;
            }
            if(s.at(i)==' '&&counter!=0){
                return counter;
            }

        }
        return counter;
    }
};

/*Faster solution
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0) return 0;
        int length = 0;
        auto rbegin = s.rbegin();
        while (*rbegin == ' '&& rbegin != s.rend()) rbegin++;
        while (*rbegin != ' '&& rbegin != s.rend()) {
            rbegin++; length++;
        }
        return length;
    }
};*/
