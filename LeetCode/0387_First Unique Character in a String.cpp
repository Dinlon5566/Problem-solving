class Solution
{
public:
    int firstUniqChar(string s)
    {
        int count[26]= {0};

        for(int i=0; i<s.size(); i++)
        {
            count[(int)(s[i]-'a')]++;
        }

        for(int i=0; i<s.size(); i++)
        {
            if(count[(int)(s[i]-'a')]==1)
            {
                return i;
            }
        }

        return -1;
    }
};
