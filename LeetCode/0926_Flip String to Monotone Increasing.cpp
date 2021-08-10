class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int counter0=0;
        int counter1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                counter1++;
            }else{
                counter0++;
            }
            counter0=min(counter0,counter1);
        }
        return counter0;
    }
};
