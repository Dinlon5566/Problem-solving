class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string res="";
        int score=0;

        for(char c:s)
        {

            if(c=='(')
            {
                if(score!=0)
                {
                    res+=c;
                }
                score++;
            }
            else
            {
                score--;
                if(score!=0)
                {
                    res+=c;
                }
            }
        }
        return res;
    }
};
