class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string temp=countAndSay(n-1);
        string ans;
        int counter=1;
        for(int i=1;i<temp.size();++i){
            if(temp[i]!=temp[i-1]){
                ans.push_back(char('0'+counter));
                ans.push_back(move(temp[i-1]));
                counter=1;
            }
            else{
                ++counter;
            }
        }
        ans.push_back(char('0'+counter));
        ans.push_back(move(temp[temp.size()-1]));

        return move(ans);
    }
};
