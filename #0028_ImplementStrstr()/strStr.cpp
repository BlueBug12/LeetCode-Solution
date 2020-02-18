class Solution {
public:
    void failure(string& s){
        int index;
        f.assign(s.size(),-1);
        for(int i=1;i<s.size();++i){

            index=f[i-1];
            while(index!=-1&&s[index+1]!=s[i]){
                index=f[index];
            }
            if(s[i] == s[index+1]){f[i]=index+1;}

        }
    }
    int strStr(string haystack, string needle) {
        if(needle.size()==0){return 0;}
        if(needle.size()>haystack.size()){return -1;}
        failure(needle);

        int i=0;
        int j=0;
        while(i<haystack.size()){
            if(haystack.at(i)==needle.at(j)){++j;++i;}
            else{
                if(j==0){++i;}
                else{j=f.at(j-1)+1;}
            }

            if(j==needle.size()){
                return i-j;
            }

        }
        return -1;
    }
private:
    vector<int>f;
};

/* Or you can make your life easier
class Solution {
public:
  int strStr(string haystack, string needle){
    return haystack.find(needle);
  }
}

*/
