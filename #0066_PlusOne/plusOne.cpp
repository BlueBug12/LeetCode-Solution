class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;--i){
            if(digits.at(i)+carry==10){digits.at(i)=0;carry=1;}
            else{digits.at(i)+=carry;return digits;}
        }
        if(carry){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
