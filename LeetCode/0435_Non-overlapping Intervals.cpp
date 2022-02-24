class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums)
    {
        int S=nums.size();
        pair<int,int> par[S];
        for(int i=0; i<S; i++)
        {
            //sort by endPoint
            par[i].second=nums[i][0];
            par[i].first=nums[i][1];
        }
        sort(par,par+S);

        int t=INT_MIN,c=0;
        for(int i=0; i<S; i++)
        {
            if(par[i].second>=t)
            {
                t=par[i].first;
                c++;
            }
        }
        return S-c;
    }

};
