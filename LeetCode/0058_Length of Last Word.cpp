class Solution {
public:
    int lengthOfLastWord(string s) {
        int itr=s.size()-1;
        while(s[itr]==' '){
            itr--;
            if(itr<0){
                return 0;
            }
        }
        for(int i=itr;i>=0;i--){
            if(s[i]==' '){
                return itr-i;
            }
        }
        return itr+1;
    }
};
