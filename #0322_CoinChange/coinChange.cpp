class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        vector<int>table(amount+1,amount+1);
        table.at(0)=0;
        for(int i=coins.front();i<=amount;++i){
            for(size_t j=0;j<coins.size();++j){
                int n = i-coins.at(j);
                if(n<0)
                    break;
                table.at(i) = min(table.at(i),table.at(n)+1);
            }
        }
        return table.back()==amount+1?-1:table.back();
    }
};
