class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            int lib[26]={0};

            for(char c:magazine){
                lib[c-'a']++;
            }
            for(char c:ransomNote){
                lib[c-'a']--;
                if(lib[c-'a']<0)
                    return 0;
            }
            return 1;
    }
};
