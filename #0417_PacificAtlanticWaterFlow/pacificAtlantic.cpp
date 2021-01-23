class Solution {
public:
    void DFS(int** map, vector<vector<int>>& matrix,int i, int j){
        int n = matrix[i][j];
        if(i-1>0&&!map[i-1][j]&&matrix[i-1][j]>=n){
            map[i-1][j]=1;
            DFS(map,matrix,i-1,j);
        }
        if(i+1<matrix.size()&&!map[i+1][j]&&matrix[i+1][j]>=n){
            map[i+1][j]=1;
            DFS(map,matrix,i+1,j);
        }
        if(j-1>0&&!map[i][j-1]&&matrix[i][j-1]>=n){
            map[i][j-1]=1;
            DFS(map,matrix,i,j-1);
        }
        if(j+1<matrix.at(0).size()&&!map[i][j+1]&&matrix[i][j+1]>=n){
            map[i][j+1]=1;
            DFS(map,matrix,i,j+1);
        }
    }
    void DFS(int** map, vector<vector<int>>& matrix,int i, int j,vector<vector<int>>&ans){
        int n = matrix[i][j];
        if(i>0&&map[i-1][j]<10&&matrix[i-1][j]>=n){
            map[i-1][j]+=10;
            if(map[i-1][j]==11)
                ans.push_back({i-1,j});
            DFS(map,matrix,i-1,j,ans);
        }
        if(i+1<matrix.size()-1&&map[i+1][j]<10&&matrix[i+1][j]>=n){
            map[i+1][j]+=10;
            if(map[i+1][j]==11)
                ans.push_back({i+1,j});
            DFS(map,matrix,i+1,j,ans);
        }
        if(j>0&&map[i][j-1]<10&&matrix[i][j-1]>=n){
            map[i][j-1]+=10;
            if(map[i][j-1]==11)
                ans.push_back({i,j-1});
            DFS(map,matrix,i,j-1,ans);
        }
        if(j+1<matrix.at(0).size()-1&&map[i][j+1]<10&&matrix[i][j+1]>=n){
            map[i][j+1]+=10;
            if(map[i][j+1]==11)
                ans.push_back({i,j+1});
            DFS(map,matrix,i,j+1,ans);
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        if(!matrix.size())
            return {};
        vector<vector<int>>ans;
        int n = matrix.size();
        int m = matrix.at(0).size();
        int **map =  new int*[n];
        for(int i =0;i<n;++i){
            map[i] = new int[m]();
        }
        for(int i =0;i<n;++i)
            map[i][0] = 1;

        for(int i=1;i<m;++i)
            map[0][i] = 1;

        for(int i = 1;i<m;++i)
            DFS(map,matrix,0,i);
        for(int i = 1;i<n;++i)
            DFS(map,matrix,i,0);

        for(int i =0;i<n;++i){
            map[i][m-1] += 10;
            if(map[i][m-1]==11)
                ans.push_back({i,m-1});
        }


        for(int i =0;i<m-1;++i){
            map[n-1][i] += 10;
            if(map[n-1][i]==11)
                ans.push_back({n-1,i});
        }

        for(int i = 0;i<n;++i)
            DFS(map,matrix,i,m-1,ans);
        for(int i = 0;i<m-1;++i)
            DFS(map,matrix,n-1,i,ans);
        while(n)
            delete [] map[--n];
        delete [] map;
        return ans;
    }
};
