class Solution {
public:
    int minimumMoves(string s) {
        int result=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                result++;
                for(int j=i;j<i+3&&j<s.size();j++){
                    s[j]='a';
                }
            }
        }
        return result;
    }
};
