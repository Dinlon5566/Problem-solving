#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxn=1125;
    int prime[maxn];
    int visted[maxn];
    memset(visted,0,sizeof(visted));
    int pCount=0;
    for(int i=2;i<maxn;i++){
        if(visted[i]==0){
            prime[pCount++]=i;
            for(int j=i*i;j<maxn;j+=i){
                visted[j]=1;
            }
        }
    }
    int dp[maxn][15];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;

    for(int i=0;i<pCount;i++){
        for(int n=maxn;n>=prime[i];n--){
            for(int k=1;k<14;k++){
                dp[n][k]=dp[n][k]+dp[n-prime[i]][k-1];
            }
        }
    }



    return 0;
}
