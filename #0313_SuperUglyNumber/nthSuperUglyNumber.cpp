typedef pair<int,int> pii;
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int>ans(n,0);
        ans.at(0)=1;
        priority_queue<pii,vector<pii>,greater<pii>>q;
        for(size_t i=0;i<primes.size();++i){
            q.push({primes.at(i),1*1000+primes.at(i)});
        }
        for(size_t i=1;i<n;++i){
            pii p = q.top();
            while(p.first==ans.at(i-1)){//duplicated number
                q.pop();
                q.push({ans.at(p.second/1000)*(p.second%1000),p.second+1000});
                p = q.top();
            }
            q.pop();
            ans.at(i)=p.first;
            q.push({ans.at(p.second/1000)*(p.second%1000),p.second+1000});
        }
        return ans.back();
    }
};
