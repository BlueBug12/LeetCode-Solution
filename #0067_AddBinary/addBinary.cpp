class Solution {
public:
    string addBinary(string a, string b) {
        string* result;
        string* shorter;
        int offset;
        if(a.size()>b.size()){
            result=&a;
            shorter=&b;
            offset=a.size()-b.size();
        }
        else{
            result=&b;
            shorter=&a;
            offset=b.size()-a.size();
        }

        int carry=0;
        int temp;
        for(int i=result->size()-1;i>=0;--i){
            if(i-offset<0)
                temp=result->at(i)-'0'+carry;
            else
                temp=result->at(i)+shorter->at(i-offset)-'0'-'0'+carry;
            carry=temp/2;
            temp%=2;
            result->at(i)=temp+'0';
            //stop propagate
            if(!carry&&i-offset<=0){break;}
        }

        if(carry)
            result->insert(result->begin(),1+'0');

        return *result;
    }
};
