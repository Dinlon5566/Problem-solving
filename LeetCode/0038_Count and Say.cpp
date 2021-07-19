class Solution
{
public:
    string countAndSay(int num)
    {

        if(num==1)
        {
            return "1";
        }

        string str=countAndSay(num-1);
        string newStr="";

        int numCount=1;
        char numSave=str[0];
        for(int i=1; i<str.size(); i++)
        {
            if(str[i]==numSave)
            {
                numCount++;
            }
            else
            {
                //output
                newStr+=(char)(numCount+'0');
                newStr+=numSave;
                //reset
                numCount=1;
                numSave=str[i];
            }
        }

        newStr+=(char)(numCount+'0');
        newStr+=numSave;

        return newStr;
    }
};
