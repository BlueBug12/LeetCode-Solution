class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int temp_sum = 0;
        vector<int> min_sum{0};
        for(size_t i=0;i<gas.size();++i){
            gas.at(i)-=cost.at(i);
            temp_sum+=gas.at(i);
            min_sum.push_back(min(temp_sum,min_sum.back()));
        }
        temp_sum=0;
        int sum=0;
        for(int i=gas.size()-1;i>=0;--i){
            if(gas.at(i)>=0){
                temp_sum+=gas.at(i);
            }else{
                temp_sum = min(temp_sum+gas.at(i),gas.at(i));
            }
            sum+=gas.at(i);
            if(temp_sum>=0&&min_sum.at(i+1)+sum>=0){
                return i;
            }
        }
        return -1;
    }
};
