class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1){return s;}
        
        int index=1;
        int max=1;
        string manacher_str="#";
        for(int i=0;i<s.size();++i){
            manacher_str.push_back(s.at(i));
            manacher_str.push_back('#');
        }
        int* table=new int[manacher_str.size()];
        for(int i=0;i<manacher_str.size();++i){table[i]=0;}
        int center_right=1;
        int center=1;
        for(int i=1;i<manacher_str.size();++i){
            if(center_right-i>=0&&center_right-i>table[2*center-i]){
                table[i]=min(table[2*center-i],center_right-i);
                continue;
            }
            
            while(table[i]+i+1<manacher_str.size()&&i-table[i]-1>=0
                 && manacher_str[table[i]+i+1]==manacher_str[i-table[i]-1]){
                ++table[i];
            }
            if(table[i]>table[center]){
                center=i;
                center_right=center+table[center];
                if(center_right>=manacher_str.size()){break;}
            }
            
        }
        //cout<<center<<table[center];
        string ans;
        for(int i=center-table[center];i<=center+table[center];++i){
            if(manacher_str[i]!='#'){ans.push_back(manacher_str[i]);}
        }
        delete [] table;
        return ans;
    }
};
