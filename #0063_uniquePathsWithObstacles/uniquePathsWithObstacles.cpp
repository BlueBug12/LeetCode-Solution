class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int n = obstacleGrid.size();
        if(n==0){return 0;}
        int m = obstacleGrid[0].size();
        if(m==0||obstacleGrid[0][0]==1||obstacleGrid[n-1][m-1]==1){return 0;}
        bool obstacle=0;
        //initialize first column
        for(int i=0;i<n;++i){
            if(obstacleGrid[i][0]==1)
                obstacle=1;
            if(obstacle)
                obstacleGrid[i][0]=0;
            else
                obstacleGrid[i][0]=1;
        }
        obstacle=0;
        //initialize first row
        for(int i=1;i<m;++i){
            if(obstacleGrid[0][i]==1)
                obstacle=1;
            if(obstacle)
                obstacleGrid[0][i]=0;
            else
                obstacleGrid[0][i]=1;
        }
        //fill the other blank grids
        for(int i=1;i<n;++i){
            for(int j=1;j<m;++j){
                if(obstacleGrid[i][j]==1)
                    obstacleGrid[i][j]=0;
                else
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
            }
        }
        return obstacleGrid[n-1][m-1];
    }
};
