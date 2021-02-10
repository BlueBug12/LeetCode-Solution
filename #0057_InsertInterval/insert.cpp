class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int index = 0;
        while(index < intervals.size() && intervals.at(index).back() < newInterval.front()){
            ans.push_back(intervals.at(index++));
        }
        while(index < intervals.size() && intervals.at(index).front() <= newInterval.back()){
            newInterval.front() = min(newInterval.front(), intervals.at(index).front());
            newInterval.back() = max(newInterval.back(), intervals.at(index).back());
            index++;
        }
        ans.push_back(newInterval);
        while(index < intervals.size()){
            ans.push_back(intervals.at(index++));
        }
        return ans;
    }
};
