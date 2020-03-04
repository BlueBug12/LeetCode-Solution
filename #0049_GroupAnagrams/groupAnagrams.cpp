class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int>dict;
        vector<vector<string>>ans;
        int index=0;
        int i=0;
        for(auto item:strs){
            sort(item.begin(),item.end());

            if(dict.find(item)==dict.end()){
                dict.insert({move(item),index});
                ans.push_back({move(strs.at(i))});
                ++index;
            }
            else{
                ans.at(dict[item]).push_back(move(strs.at(i)));
            }
            ++i;
        }
        return ans;
    }
};
