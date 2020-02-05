class Solution {
public:
    string intToRoman(int num) {
        vector<string>symbol{"I","V","X","L","C","D","M"};
        string n=to_string(num);
        string ans;
        for(int i=0;i<n.size();++i){
            if((n[i]-'0')%5==4){
                ans+=symbol[(n.size()-i-1)*2];
                ans+=symbol[(n.size()-i)*2-1+(n[i]-'0')/5];
            }
            else{
                if((n[i]-'0')/5==1){ans+=symbol[(n.size()-i)*2-1];}
                for(int j=0;j<(n[i]-'0')%5;++j){
                    ans+=symbol[(n.size()-i-1)*2];
                }
            }
        }
        return ans;
    }
};
