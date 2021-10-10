class Solution {
public:
    int getLucky(string s, int k) {
        int result=0;
        int p;
        for(int i=0;i<s.size();i++){
            p=(s[i]-'a'+1);
            while(p){
                result+=p%10;
                p/=10;
            }
        }
        for(int i=1;i<k;i++){
            p=result;
            result=0;

            while(p){
                result+=p%10;
                p/=10;
            }
        }
        return result;
    }
};
