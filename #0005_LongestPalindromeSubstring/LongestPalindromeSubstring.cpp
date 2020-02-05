class Solution {
public:
    bool equalPalindromeString(string s1){
        string s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2){return 1;}
        else{return 0;}
    }
    string longestPalindrome(string s) {
        if(s.size()==0){return "";}
        string ans;
        ans.push_back(s.at(0));
        map<char,vector<int>>m;
        for(int i=0;i<s.size();++i){
            if(m.find(s.at(i))==m.end()){
                m[s.at(i)]=vector<int>{i};
            }
            else{
                vector<int>&copy=m[s.at(i)];
                for(int j=0;j<copy.size();++j){
                    string sub=s.substr(copy.at(j),i-copy.at(j)+1);
                    if(sub.size()>ans.size()&&equalPalindromeString(sub)){
                        ans=sub;
                        break;
                    }
                }
                m[s.at(i)].push_back(i);
            }
        }
        return ans;
    }
};