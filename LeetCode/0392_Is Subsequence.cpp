class Solution {
public:
    bool isSubsequence(string s, string t) {
        int res=1;
        int loc=0;
        for(char c:s){
            while(loc<t.size()&&c!=t[loc]){
                loc++;
            }
            if(loc==t.size()){
                res=0;
                return 0;
            }
            loc++;
        }
        return 1;
    }
};
