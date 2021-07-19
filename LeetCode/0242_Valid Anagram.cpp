class Solution
{
public:
    bool isAnagram(string str, string tar)
    {
        if(str.size()!=tar.size())
        {
            return false;
        }
        sort(str.begin(),str.end());
        sort(tar.begin(),tar.end());
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]!=tar[i])
            {
                return false;
            }
        }
        return true;
    }
};
