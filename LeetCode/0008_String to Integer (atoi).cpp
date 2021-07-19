class Solution
{
public:
    int myAtoi(string s)
    {
        int result=0;
        bool sign=1;
        int strptr=0;
        while(s[strptr]==' ')
        {
            strptr++;
        }
        if((s[strptr]=='+'||s[strptr]=='-'))
        {
            if(s[strptr]=='-')
                sign=0;
            strptr++;
        }
        while(s[strptr]>='0'&&s[strptr]<='9')
        {
            if(result>INT_MAX/10||(result==INT_MAX/10&&s[strptr]-'0'>INT_MAX%10))
            {
                return sign?INT_MAX:INT_MIN;
            }
            result*=10;
            result+=(int)(s[strptr]-'0');
            strptr++;
        }
        return sign?result:-1*result;
    }
};
