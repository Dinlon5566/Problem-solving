class Solution {
public:
    int minTimeToType(string word) {
        int result=word.size();
        if(word[0]!='a'){
            word="a"+word;
        }
        for(int i=0;i<word.size()-1;i++){
            result+=getAZcounter(word[i],word[i+1]);
        }
        return result;
    }

    int getAZcounter(char a,char b){
        int aNum=a-'a';
        int bNum=b-'a';
        return min(abs(aNum-bNum),26-abs(aNum-bNum));
    }
};
