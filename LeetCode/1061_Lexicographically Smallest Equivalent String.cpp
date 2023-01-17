class Solution {
public:
    int mv[26];
    int find(int x){
        if(mv[x]==-1){
            return x;
        }
        return mv[x]=find(mv[x]);
    }
    void add(int x,int y){
        x=find(x);
        y=find(y);
        if(x!=y){
            mv[max(x,y)]=min(x,y);
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        memset(mv,-1,sizeof(mv));
        for(int i=0;i<s1.size();i++){
            add(s1[i]-'a',s2[i]-'a');
        }
        for(int i=0;i<baseStr.size();i++){
            baseStr[i]=find(baseStr[i]-'a')+'a';
        }
        return baseStr;
    }
};
