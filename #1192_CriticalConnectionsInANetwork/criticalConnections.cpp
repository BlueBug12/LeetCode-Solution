class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>ans;
        edges.resize(n);
        depth = new int[n]();
        up = new int[n]();
        for(size_t i =0;i<connections.size();++i){
            edges.at(connections.at(i).at(0)).push_back(connections.at(i).at(1));
            edges.at(connections.at(i).at(1)).push_back(connections.at(i).at(0));
        }
        DFS(0,0,ans,1);
        delete [] depth;
        delete [] up;
        return ans;
    }
    void DFS(int parent,int node,vector<vector<int>>&ans,int counter){
        depth[node] = up[node] = counter;
        for(size_t i=0;i<edges.at(node).size();++i){
            int target = edges.at(node).at(i);
            if(target!=parent){
                if(depth[target]){//target node has been visited
                    up[node] = min(up[node],depth[target]);
                }else{
                    DFS(node,target,ans,counter+1);
                    up[node] = min(up[node], up[target]);
                    if (up[target] > depth[node]) {
                      ans.push_back({target,node});
                    }
                }
            }
        }
    }
private:
    vector<vector<int>>edges;
    int* depth;
    int* up;
};
