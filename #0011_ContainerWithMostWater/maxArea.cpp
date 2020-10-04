class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max_area = 0;

        while(i<j){
            int min_height = min(height.at(i),height.at(j));
            max_area = max(max_area,(j-i)*min_height);
            while(height.at(i)<=min_height&&i<j){
                ++i;
            }
            while(height.at(j)<=min_height&&i<j){
                --j;
            }

        }
        return max_area;
    }
};
