#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int i_count;
    while(scanf("%d",&num)!=EOF){
        if(num>=-1){
            break;
        }
        i_count=0;
        for(i=1;i<num;i*=2){
            i_count++;
        }
        printf("%d\n",i_count);
    }
    return 0;
}
