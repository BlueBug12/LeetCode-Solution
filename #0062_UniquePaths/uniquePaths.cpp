class Solution {
public:
    int uniquePaths(int m, int n) {
        m-=1;
        n-=1;
        int total=m+n;
        n=min(m,n);
        unsigned long long int ans=1;
        m=n;
        while(n>=1){
            ans*=(total--);
            ans/=(m-(--n));
        }
        return ans;
    }
};
