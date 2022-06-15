class Solution {
public:
    void update(int nums[]){
        for(int i=0;i<26;i++){
            if(nums[i]!=0)
                nums[i]++;
        }
    }
    int maxLengthBetweenEqualCharacters(string s) {
        int charmap[26];
        int res=-1;
        memset(charmap,0,sizeof(charmap));
        for(char c:s){
            if(charmap[c-'a']==0){
                charmap[c-'a']++;
                update(charmap);
            }else{
                res=max(charmap[c-'a']-2,res);
                update(charmap);
            }
        }
        return res;
    }
};
