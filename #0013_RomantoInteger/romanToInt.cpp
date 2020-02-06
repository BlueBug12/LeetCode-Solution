class Solution {
public:
    int transform(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
    int romanToInt(string s) {

        int ans=transform(s[s.size()-1]);
        for(int i=s.size()-2;i>=0;--i){
            if(transform(s[i])<transform(s[i+1])){
                ans-=transform(s[i]);
            }
            else{
                ans+=transform(s[i]);
            }
        }
        return ans;
    }
};
