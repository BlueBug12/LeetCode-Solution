<<<<<<< HEAD
//Memory Usage: 23 MB, less than 10.95% of C++ online submissions for Longest Substring Without Repeating Characters.
=======
/*
Runtime: 20 ms, faster than 60.48% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 23 MB, less than 10.95% of C++ online submissions for Longest Substring Without Repeating Characters.
*/
>>>>>>> 7073222e775b075ea5027a6396122717082c0fd9
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string sub;
        int max=0;

        for(int i=0;i<s.size();++i){
            if(sub.find(s.at(i))==string::npos){sub.push_back(s.at(i));}
            else{
                if(sub.size()>max) 
                    max=sub.size();
                sub=sub.substr(sub.find(s.at(i))+1);
                sub.push_back(s.at(i));
            }
        }
        if(sub.size()>max){max=sub.size();}
        return max;
    }
};
