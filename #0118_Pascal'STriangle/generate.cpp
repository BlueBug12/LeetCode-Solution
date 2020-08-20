class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        if(!numRows)
            return {};
        vector<vector<int>>ans;
        ans.push_back({1});
        vector<int>row;
        while(--numRows){
            row.push_back(1);
            for(int i=0;i<ans.back().size()-1;++i)
                row.push_back(ans.back().at(i)+ans.back().at(i+1));

            row.push_back(1);
            ans.push_back(move(row));
        }
        return ans;
    }
};
