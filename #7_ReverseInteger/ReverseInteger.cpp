class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        int index=s.size();
       
        for(int i=s.size()-1;i>=0;--i){
            if(s.at(i)!='0'){index=i+1;break;}
        }
        
        s=s.substr(0,index);
        std::reverse(s.begin(),s.end());
        long int res;
        if(s.at(s.size()-1)=='-'){
            res=stol(s.substr(0,s.size()-1));
            if(res>pow(2,31))return 0;
            return -1*res;}
        else{
            res=stol(s);
            if(res>(pow(2,31)-1))return 0;
            return res;}
        
        
    }
};