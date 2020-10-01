#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,m,p;
    scanf("%d",&t);
    for(int time=1;time<=t;time++){
            scanf("%d %d %d",&n,&m,&p);
            printf("Case %d: %d\n",time,(n+m-1)%p+1);
        /*
        cin>>n>>m>>p;
        cout<<"Case "<<time<<": "<<(n+m)%p<<endl;
        */
    }
    return 0;
}
