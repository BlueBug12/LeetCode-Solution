class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        do {
           ans.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return ans;
    }
};

/* recursive solution
class Solution {
public:

    void MyPermute(vector<vector<int>>* pRes, int i, vector<int>& cur) {
        vector<vector<int>>& A = *pRes;
        if (i == size(cur)) {
            A.emplace_back(cur);
            return;
        }

        for (int j = i; j < size(cur); j++) {
            swap(cur[i],cur[j]);
            MyPermute(pRes, i + 1, cur);
            swap(cur[i],cur[j]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        MyPermute(&result, 0, nums);
        return result;
    }
};
*/
