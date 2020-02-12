class Solution {
public:

    bool isValid(string s) {
        if(s.size()==0){return 1;}
        if(s.size()%2==1){return 0;}
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();++i){
            switch(s[i]){

                case ')':
                    if(st.size()==0||st.top()!='('){return 0;}
                    else{st.pop();}
                    break;

                case '}':
                    if(st.size()==0||st.top()!='{'){return 0;}
                    else{st.pop();}
                    break;

                case ']':
                    if(st.size()==0||st.top()!='['){return 0;}
                    else{st.pop();}
                    break;

                default:
                    st.push(s[i]);
                    break;
            }
        }
        if(st.size()!=0){return 0;}
        else{return 1;}
    }
};
