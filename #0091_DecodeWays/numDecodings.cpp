class Solution {
public:

    int numDecodings(string s) {
        int n = s.size();
        if (n == 0) return 0;

        int* record = new int[n+1];
        for(int i=0;i<n;++i){
            record[i]=0;
        }
        record[n]  = 1;
        record[n-1] = s.at(n-1) != '0' ? 1 : 0;

        for (int i = n-2; i>=0; i--)
            if (s.at(i) == '0') continue;
            else record[i] = (stoi(s.substr(i,2))<=26) ? record[i+1]+record[i+2] : record[i+1];

        return record[0];
    }

};
