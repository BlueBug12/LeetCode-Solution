class Solution {
public:
    int mySqrt(int x) {

        if(x==0||x==1)
            return x;
        //use Newton recursion
        double Xn = min(x/2,46340);
        while((int)Xn*(int)Xn>x){
            Xn=Xn/2+x/(2*Xn);
        }
        return (int)Xn;
    }
};
