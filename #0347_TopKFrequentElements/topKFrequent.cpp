class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<vector<int>> v;
        vector<int>ans;
        v.resize(nums.size()+1);
        for(size_t i=0;i<nums.size();++i){
            if(m.find(nums.at(i))==m.end())
                m[nums.at(i)]=1;
            else
                m[nums.at(i)]+=1;
        }
        for(auto it=m.begin();it!=m.end();++it){
            v.at(it->second).push_back(it->first);
        }

        for(int i = nums.size();ans.size()!=k;--i){
            if(v.at(i).size())
                ans.insert(ans.end(),v.at(i).begin(),v.at(i).end());
        }
        return ans;
    }
};
