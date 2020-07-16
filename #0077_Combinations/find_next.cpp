class Solution {
public:
    void find_next(vector<int>& temp,const int& n,const int& k){
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        else if(n-*(temp.end()-1)<k-temp.size())
            return;
        for(int i=*(temp.end()-1)+1;i<=n;++i){
            temp.push_back(i);
            find_next(temp,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        for(int i=1;i<=n;++i){
            vector<int>element{i};
            find_next(element,n,k);
        }
        return ans;
    }
private:
    vector<vector<int>>ans;
};
