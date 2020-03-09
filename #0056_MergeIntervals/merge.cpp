class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int, int> m;
		vector<vector<int>> result;

		for (auto &interval: intervals) {
			m[interval[0]]++;
			m[interval[1]]--;
		}

		int start;
		int end;
		int count = 0;
		for (auto &number: m) {
			if (count == 0) {
				start = number.first;
			}

			count += number.second;

			if (count == 0) {
				end = number.first;
				result.push_back({start,end});
			}
		}

		return result;
    }
};
