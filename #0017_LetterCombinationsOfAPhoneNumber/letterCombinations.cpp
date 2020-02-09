class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits=="")return ans;
        int index;
        for(int i=0;;++i){
            string s;
            index=1;
            for(int j=0;j<digits.size();++j){
                switch(digits[j]){
                    case '2': s+=char('a'+int(i/(index))%3);break;
                    case '3': s+=char('d'+int(i/(index))%3);break;
                    case '4': s+=char('g'+int(i/(index))%3);break;
                    case '5': s+=char('j'+int(i/(index))%3);break;
                    case '6': s+=char('m'+int(i/(index))%3);break;
                    case '7': s+=char('p'+int(i/(index))%4);break;
                    case '8': s+=char('t'+int(i/(index))%3);break;
                    case '9': s+=char('w'+int(i/(index))%4);break;
                }
                if(digits[j]=='7'||digits[j]=='9'){index*=4;}
                else{index*=3;}
            }
            if(i==index){break;}
            ans.push_back(s);
        }
        return ans;
    }
};


//use recursive call may be faster 
