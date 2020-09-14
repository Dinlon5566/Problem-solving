#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int time;
    while(scanf("%d",&num)!=EOF)
    {
        time=0;
        while(num!=1)
        {
            if(num%2==0)
            {
                time++;
                num/=2;
            }
            else
            {
                time++;
                num=num*3+1;
            }
        }
        printf("%d\n",time);
    }
    return 0;
}
