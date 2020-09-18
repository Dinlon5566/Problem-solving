#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b;
 while(scanf("%d %d",&a,&b)!=EOF){
  if(a>b){
  int tmp=a;
  a=b;
   b=tmp;
  }
  
    printf("%d\n",b-a);
 }
    return 0;
}
