class Solution {
public:
    string intToRoman(int num) {
        int nums[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        char* strs[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int tmp;
        string str;
        for(int i=12;i>=0;i--){
            tmp=num/nums[i];
            for(int j=0;j<tmp;j++){
                str+=strs[i];
            }
            num%=nums[i];
        }
        return str;
    }
};
