class Solution {
public:
    int numTrees(int n) {
       int* table = new int[n+1]();
        table[0]=1;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=i;++j){
                table[i]+=table[j-1]*table[i-j];
            }
        }
        return table[n];
    }
};
