#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time,num1,num2;
    scanf("%d",&time);
    while(time--){
    scanf("%d %d",&num1,&num2);
    if(num1==num2){
        puts("=");
    }else if (num1>num2){
        puts(">");
    }else{
        puts("<");
    }
    }
    return 0;
}
