class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int max_length=0;
        for(int i=0;i<nums.size();++i){
            if(s.find(nums.at(i)-1)==s.end()){
                int start = nums.at(i)+1;
                while(s.find(start)!=s.end()){
                    ++start;
                }
                max_length=max(max_length,start-nums.at(i));
            }
        }
        return max_length;
    }
};
