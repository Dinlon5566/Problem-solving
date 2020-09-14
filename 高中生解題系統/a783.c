#include <stdio.h>
#include <stdlib.h>
int GCD(int,int);
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b>a)
        {
            int tmp=a;
            a=b;
            b=tmp;
        }
        a=GCD(a,b);
        printf("%d\n",a);
    }
    return 0;
}
int GCD(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        GCD(b,a%b);
    }
}
