class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            string s = to_string(x);
            size_t j = s.size()-1;
            for(size_t i =0;i<s.size()/2;++i){
                if(s.at(i)!=s.at(j-i))
                    return false;
            }
            return true;
        }
    }
};
