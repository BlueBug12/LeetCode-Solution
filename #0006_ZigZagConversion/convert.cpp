class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){return s;}
        string ans;
        vector<string>rows;
        for(int i=0;i<numRows;++i){
            string ss;
            rows.push_back(ss);
        }
        int pointer;
        for(int i=0;i<s.size();++i){
            pointer=i%(2*numRows-2);
            if(pointer>=numRows){
                pointer=-1*pointer+2*numRows-2;
            }
            rows.at(pointer).push_back(s.at(i));
        }
        for(int i=0;i<numRows;++i){
            ans+=rows.at(i);
        }
        return ans;
    }
};