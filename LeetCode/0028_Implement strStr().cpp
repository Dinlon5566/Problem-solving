class Solution {
public:
    int strStr(string haystack, string needle) {

        int haystackLen=haystack.size();
        int needleLen=needle.size();

        if(needleLen==0){
            return 0;
        }

        for(int i=0;i<=haystackLen-needleLen;i++){
            if(haystack[i]==needle[0]){
                for(int j=1;j<=needleLen;j++){
                    if(j==needleLen){
                        return i;
                    }else if(haystack[i+j]!=needle[j]){
                        break;
                    }
                }
            }
        }

        return -1;
    }
};
