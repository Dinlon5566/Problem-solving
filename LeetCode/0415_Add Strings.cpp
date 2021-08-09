class Solution {
public:
    string addStrings(string num1, string num2) {
        int locA,locB,carry=0;
        locA=num1.size()-1;
        locB=num2.size()-1;
        string result="";

        while(locA>=0&&locB>=0){
            int sum=carry+(num1[locA]-'0')+(num2[locB]-'0');
            result=to_string(sum%10)+result;
            carry=sum/10;
            locA--;
            locB--;
        }
        while(locA>=0){
            int sum=carry+(num1[locA]-'0');
            result=to_string(sum%10)+result;
            carry=sum/10;
            locA--;
        }
        while(locB>=0){
            int sum=carry+(num2[locB]-'0');
            result=to_string(sum%10)+result;
            carry=sum/10;
            locB--;
        }

        if(carry){
            result="1"+result;
        }
        return result;
    }
};
