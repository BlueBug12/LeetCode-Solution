class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
    }
};
/*
class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0)
            return 1;
        if(n > 0)
            return myPow(x*x, n/2) * (n%2 ? x : 1);
        else
            return (myPow(x*x, n/2) * (n%2 == -1 ? 1/x : 1));
    }
};*/
