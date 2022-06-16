class Solution
{
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold)
    {

        int inf=0x3f3f3f3f;
        int maps[n][n];
        memset(maps,inf,sizeof(maps));

        for(vector<int> num:edges)
        {
            maps[num.at(0)][num.at(1)]=num.at(2);
            maps[num.at(1)][num.at(0)]=num.at(2);
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; k<n; k++)
                {
                    maps[j][k]=min(maps[j][k],maps[j][i]+maps[i][k]);
                }
            }
        }

        int res=0,minest=n;
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=0; j<n; j++)
            {
                if(maps[i][j]<=distanceThreshold&&i!=j)
                {
                    count++;
                }
            }

            if(count<=minest){
                res=i;
                minest=count;
            }
        }

        return res;
    }
};
