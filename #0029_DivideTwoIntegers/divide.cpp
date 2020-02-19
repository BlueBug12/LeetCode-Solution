class Solution {
public:

    int divide(int dividend, int divisor) {
        int quotient=0;
        bool sign;
        unsigned int d1,d2;
        if(dividend==0){return 0;}
        if(divisor==INT_MIN&&dividend!=INT_MIN){return 0;}
        if(dividend==INT_MIN&&divisor==-1){return INT_MAX;}
        //return dividend/divisor;
        if(divisor==-1){return -dividend;}
        if(divisor==1){return dividend;}
        if(dividend<0&&divisor<0){sign=1;}
        else if(dividend<0){sign=0;}
        else if(divisor<0){sign=0;}
        else{sign=1;}
        if(dividend==INT_MIN){d1=(unsigned int)INT_MAX+1;}
        else{d1=abs(dividend);}
        if(divisor==INT_MIN){d2=(unsigned int)INT_MAX+1;}
        else{d2=abs(divisor);}
        while(d1>=d2){
            d1-=d2;
            ++quotient;
        }
        if(sign)return quotient;
        else return -quotient;
    }
};
