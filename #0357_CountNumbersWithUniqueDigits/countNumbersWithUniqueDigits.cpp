class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        int ans=1;
        int zero = 0;
        float pre = 0.1;
        for(size_t i=0;i<n;++i){
            ans*=(10-i);
            zero+= (int)pre*i;
            pre*=(10-i);
        }
        return ans+zero;
    }
};
