class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int locA=a.size()-1;
        int locB=b.size()-1;
        int carry=0;
        while(locA>=0||locB>=0){
            int sum=carry;
            sum+=locA>=0?a[locA]-'0':0;
            sum+=locB>=0?b[locB]-'0':0;
            result=to_string(sum%2)+result;
            carry=sum/2;
            locA--;
            locB--;
        }
        if(carry){
            result="1"+result;
        }
        return result;
    }
};
