class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        set<string> s(words.begin(),words.end());
        for(string str:s){
            for(int i=1;i<str.size();i++){
                s.erase(str.substr(i));
            }
        }
        int res=0;
        for(string str:s){
            res+=str.size()+1;
        }
        return res;
    }
};
