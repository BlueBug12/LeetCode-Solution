class Solution {
public:

    int climbStairs(int n) {

        vector<int>table;
        //initialize conditions
        table.push_back(1);
        table.push_back(2);
        for(int i=2;i<n;++i){
            table.push_back(table.at(i-1)+table.at(i-2));
        }
        return table.at(n-1);

    }
};
