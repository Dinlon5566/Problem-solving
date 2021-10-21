#include <bits/stdc++.h>

using namespace std;

int main()
{
    int caseCount=0;
    int n;
    while(~scanf("%d",&n))
    {
        caseCount++;
        bool result=1;
        int nums[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&nums[i]);
            if(nums[i]<=0)
            {
                result=0;
            }
            if(i>0&&nums[i]<=nums[i-1])
            {
                result=0;
            }
        }
        if(result)
        {
            int s;
            int sum[20001];
            memset(sum,0,sizeof(sum));
            for(int i=0; i<n; i++)
            {
                for(int j=i; j<n; j++)
                {
                    s=nums[i]+nums[j];
                    if(sum[s])
                    {
                        result=0;
                        break;
                    }
                    sum[s]=1;
                }
            }
        }
        if(result)
        {
            printf("Case #%d: It is a B2-Sequence.",caseCount);
        }
        else
        {
            printf("Case #%d: It is not a B2-Sequence.",caseCount);
        }
        printf("\n\n");
    }

    return 0;
}
