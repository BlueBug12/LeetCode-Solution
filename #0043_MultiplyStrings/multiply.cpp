class Solution {
public:
    string multiply(string num1, string num2) {
        if((num1.size()==1&&num1[0]=='0')||(num2.size()==1&&num2[0]=='0')){return "0";}
        string ans;
        int index=-1;
        short int temp_sum;
        short int carry=0;

        for(int i=num1.size()-1;i>=0;--i){
            index=ans.size()-num1.size()+i;
            temp_sum=0;
            for(int j=num2.size()-1;j>=0;--j){
                temp_sum=(num1.at(i)-'0')*(num2.at(j)-'0')+carry;
                if(index<0){
                    ans.insert(0,1,temp_sum%10+'0');
                    cout<<temp_sum<<endl;
                }
                else{
                    temp_sum+=ans.at(index)-'0';
                    ans.at(index)=temp_sum%10+'0';
                    --index;
                }
                carry=temp_sum/10;
            }
                while(carry!=0){
                ans.insert(0,1,carry%10+'0');
                carry/=10;
            }

        }
        return ans;
    }
};

/*Another concise solution
class Solution {
public:
    string multiply(string num1, string num2) {

        string res(num1.size() + num2.size(), '0');

        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {
                int prod =  (num1[i] - '0') * (num2[j] - '0') +  (res[i + j + 1] - '0');
                res[i+j+1] = (prod % 10) + '0';
                res[i+j] = ((prod /10) + (res[i + j] - '0')) + '0';
            }
      }
      //remove the trailing zeros
      int it = res.find_first_not_of("0");
      return ( it < 0  ? "0" : res.substr(it) );
    }
};
*/
