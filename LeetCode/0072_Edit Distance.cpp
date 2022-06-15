class Solution {
public:
    int minDistance(string word1, string word2) {
        int strmap[word1.size()+1][word2.size()+1];

        memset(strmap,0,sizeof(strmap));
        for(int i=0;i<=word1.size();i++){
            strmap[i][0]=i;
        }
        for(int i=0;i<=word2.size();i++){
            strmap[0][i]=i;
        }

        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]){
                    strmap[i][j]=min(strmap[i-1][j-1],min(strmap[i-1][j],strmap[i][j-1])+1);
                }else{
                    strmap[i][j]=min(strmap[i-1][j-1],min(strmap[i-1][j],strmap[i][j-1]))+1;
                }
            }
        }
        return strmap[word1.size()][word2.size()];
    }
};
