class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int result=0;
        char cantType[26]={0};
        for(char c:brokenLetters){
            if(c==' ')
                continue;
            cantType[c-'a']=1;
        }
        int spilt=0;
        for(char c:text){
            if(c==' '){
                if(spilt==0)
                    result++;
                spilt=0;
            }else{
                if(cantType[c-'a']==1){
                    spilt=1;
                }
            }
        }
        if(spilt==0)
             result++;
        return result;
    }
};
