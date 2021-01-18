class Solution {
public:
    int nthUglyNumber(int n) {
        int index[3]={0,0,0};
        int ans[n];
        ans[0] = 1;

        for(int i = 1;i<n;++i){
            int update = 0;
            int temp = 2*ans[index[0]];
            for(int j =1;j<3;++j){
                int n = (2*j+1)*ans[index[j]];
                if(n<temp){
                    update = j;
                    temp = n;
                }
                else if(n==temp)
                    index[j]+=1;
            }
            index[update]+=1;
            ans[i] = temp;
        }
        return ans[n-1];
    }
};
