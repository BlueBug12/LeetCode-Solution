class Solution {
public:
    vector<string> generateParenthesis(int n) {
        len=n;
        string s;
        partialCombine(0,0,s);
        return ans;
    }

    void partialCombine(int head,int tail, string &s){
        if(s.size()==2*len&&head==tail){
            ans.push_back(s);
            return;
        }
        if(tail>head||tail>len||head>len){
            return;
        }
        s.push_back('(');
        partialCombine(head+1,tail,s);
        s.pop_back();
        s.push_back(')');
        partialCombine(head,tail+1,s);
        s.pop_back();
    }

private:
    int len;
    vector<string>ans;
};
