class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int cList[26]={0};
        for(int i=0;i<s.size();i++){
            cList[s[i]-'a']++;
        }
        int time;
        for(int i=0;i<26;i++){
            if(cList[i]!=0){
                time=cList[i];
            }
        }
        for(int i=0;i<26;i++){
            if(cList[i]!=0&&cList[i]!=time){
                return false;
            }
        }
        return true;
    }
};
