class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int maxlen=0;
        int tmplen=0;
        int ctable[130];
        memset(ctable,-1,sizeof(ctable));

        for(int i=0;i<str.size();i++){

            if(ctable[str[i]]>0){
                maxlen=max(maxlen,tmplen);
                tmplen=0;
                i=ctable[str[i]];
                memset(ctable,-1,sizeof(ctable));
            }

            tmplen++;
            ctable[str[i]]=i+1;

        }
        maxlen=max(maxlen,tmplen);

        return maxlen;
    }
};
