class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<int>record;
        path.push_back('/');
        int counter=0;
        int pos;
        for(int i=0;i<path.size();++i){
            if(path.at(i)=='/'&&counter){
                if(path.substr(pos,counter)==".."){
                    if(!record.empty()){
                        ans.resize(record.top());
                        record.pop();
                    }
                }
                else if(path.substr(pos,counter)=="."){
                    pos=i+1;
                }
                else{
                    record.push(ans.size());
                    ans+="/"+move(path.substr(pos,counter));
                }
                counter=0;
                pos=i+1;
            }

            else if(path.at(i)!='/'){
                counter+=1;
            }
            else{
                pos=i+1;
            }
        }

        if(ans.size()==0){
            ans="/";
        }
        return ans;
    }
};
