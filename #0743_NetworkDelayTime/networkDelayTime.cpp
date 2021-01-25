typedef pair<int, int> pii;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int* v = new int[n];
        fill_n(v,n,INT_MAX);
        vector<vector<int>>edges;
        edges.resize(n);
        for(size_t i =0;i<times.size();++i){
            edges.at(times.at(i).at(0)-1).push_back(times.at(i).at(1)-1);//evene position of edges is node
            edges.at(times.at(i).at(0)-1).push_back(times.at(i).at(2));//odd position position of edges is time cost
        }

        priority_queue<pii,vector<pii>,greater<pii>>q;
        q.push(make_pair(0,k-1));
        v[k-1]=0;
        //Dijkstra's algorithm
        while(q.size()){
            int index = q.top().second;
            q.pop();
            for(int i=0;i<edges.at(index).size();i+=2){
                int next = edges.at(index).at(i);
                int time = edges.at(index).at(i+1);
                if(v[next]>v[index]+time){
                    v[next] = v[index]+time;
                    q.push(make_pair(v[next],next));
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;++i)
            ans = max(ans,v[i]);
        delete [] v;
        return ans==INT_MAX?-1:ans;

    }
};
