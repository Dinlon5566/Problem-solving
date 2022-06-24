#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define maxn 605
#define INF 0x3f3f3f3f

int main()
{
    int v[maxn][maxn];
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        memset(v,INF,sizeof(v));
        for(int i=0;i<maxn;i++){
            v[i][i]=0;
        }
        int u,q,c=n;
        for(int i=0;i<m;i++){
            cin>>u>>q;
            v[u][c]=v[c][u]=1;
            v[c][q]=v[q][c]=1;
            c++;
        }
        for(int k=0;k<c;k++){
            for(int i=0;i<c;i++){
                for(int j=0;j<c;j++){
                    v[i][j]=min(v[i][j],v[i][k]+v[k][j]);
                }
            }
        }
        int res=INF;
        for(int i=0;i<c;i++){
            sort(v[i],v[i]+n);
            res=min(res,v[i][n-1]+v[i][n-2]);
        }
        cout<<res<<endl;
    }
    return 0;
}
