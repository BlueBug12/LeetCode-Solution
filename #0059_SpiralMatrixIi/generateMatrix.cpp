class Solution {
public:

    vector<vector<int>> generateMatrix(int n) {
        if(n==1){return {{1}};}
        vector<vector<int>>ans(n,vector<int>(n,0));
        int counter=1;

        for(int i=0;i<n/2;++i){
            for(int j=i;j<n-1-i;++j){
                ans[i][j]=counter++;
                ans[j][n-i-1]=counter+n-2-2*i;
                ans[n-i-1][n-j-1]=counter+2*n-3-4*i;
                ans[n-j-1][i]=counter+3*n-4-6*i;
            }
            counter+=3*(n-1-2*i);
        }
        if(n%2==1){ans[n/2][n/2]=n*n;}
        return ans;
    }
};
