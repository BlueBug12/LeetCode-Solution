class Solution {
public:
    void validIp(string& s,int index,string& result, int len){
        if(len==4&&index==s.size()){
            ans.push_back(result);
            return;
        }
        if(index>=s.size()||len>=4||(s.size()-index-1)/3>4-len)
            return;
        if(result.size()!=0)
            result.push_back('.');

        result.push_back(s[index]);
        validIp(s,index+1,result,len+1);
        result.pop_back();

        if(s[index]!='0'&&index+2<=s.size()){
            result=result+s.substr(index,2);
            validIp(s,index+2,result,len+1);
            result.pop_back();
            result.pop_back();

            if(index+3<=s.size()&&stoi(s.substr(index,3))<=255){
                result=result+s.substr(index,3);
                validIp(s,index+3,result,len+1);
                result.pop_back();
                result.pop_back();
                result.pop_back();
            }
        }
        if(result.size()!=0)
            result.pop_back();
    }
    vector<string> restoreIpAddresses(string s) {
        string temp;
        validIp(s,0,temp,0);
        return ans;
    }
private:
    vector<string>ans;
};
