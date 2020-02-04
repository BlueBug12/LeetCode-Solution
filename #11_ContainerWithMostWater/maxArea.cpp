class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        vector<pair<int, int>>list;
        for(int i=0;i<n;++i){
            pair<int,int>temp;
            temp.first=height.at(i);
            temp.second=i;
            list.push_back(temp);
        }
        sort(list.begin(),list.end());
        int max_water=0;
        int left_most=0;
        int right_most=n-1;
        int w;
        for(int i=0;i<n;++i){
            int index=list.at(i).second;
            height.at(index)=-1;
            if(right_most-index>index-left_most){
                w=(right_most-index)*list.at(i).first;
                if(index==left_most){
                    left_most+=1;
                    while(i!=n-1&&height.at(left_most)==-1){left_most+=1;}
                }

            }
            else{
                w=(index-left_most)*list.at(i).first;
                if(index==right_most){
                    right_most-=1;
                    while(i!=n-1&&height.at(right_most)==-1){right_most-=1;}
                }
            }
            if(w>max_water){max_water=w;}
        }

        return max_water;
    }
};
/*
Better solution:
int maxArea(vector<int> &height) {
    int m = INT32_MIN;
    for (int i = 0, j = height.size() - 1; i < j;) {
        m = max(m, (j - i) * min(height[i], height[j]));
        height[i] < height[j] ? i++ : j--;
    }
    return m;
}
*/
