class Solution
{
public:
    int minCut(string s)
    {
        int n = s.length();

        vector<int> dp(n+1, 0);

        for(int i=0; i<=n; i++)
        {
            dp[i] = i-1;
        }

        for(int k=0; k<n; k++)
        {
            int i=k;
            int j=k;
            for(; i>=0 && j<n && s[i] == s[j]; i--, j++)
            {
                dp[j+1] = min(dp[j+1], dp[i]+1);
            }

            i=k-1;
            j=k;
            for(; i>=0 && j<n && s[i] == s[j]; i--, j++)
            {
                dp[j+1] = min(dp[j+1], dp[i]+1);
            }
        }

        return dp[n];
    }
};
