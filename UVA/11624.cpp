#include <iostream>
#include <bits/stdc++.h>
#define maxn 1005
#define INF 0x3f3f3f3f
using namespace std;

struct Pos{
    int x,y;
};

queue<Pos> Q;
int n,m;
int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};//¥k¤U¥ª¤W
Pos pFire,pMan;
char maze[maxn][maxn];
int fmap[maxn][maxn],mmap[maxn][maxn];

void slove(){

    while(!Q.empty()) Q.pop();
    Pos tn,tx;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maze[i][j]=='F'){
                fmap[i][j]=1;
                pFire.x=i;
                pFire.y=j;
                Q.push(pFire);
            }
        }
    }
    while(!Q.empty()){
        tn=Q.front();
        Q.pop();
        for(int pos=0;pos<4;pos++){
            tx.x=tn.x+dir[pos][0];
            tx.y=tn.y+dir[pos][1];
            if(tx.x<0||tx.x>=n||tx.y<0||tx.y>=m){
                continue;
            }
            if(maze[tx.x][tx.y]=='#'){
                continue;
            }
            if(fmap[tx.x][tx.y]==0){
                fmap[tx.x][tx.y]=fmap[tn.x][tn.y]+1;
                Q.push(tx);
            }
        }
    }
    Q.push(pMan);
    mmap[pMan.x][pMan.y]=1;
    while(!Q.empty()){
        tn=Q.front();
        Q.pop();
        if(tn.x==0||tn.x==n-1||tn.y==0||tn.y==m-1){
                cout<<mmap[tn.x][tn.y]<<endl;;
                return;
        }
        for(int pos=0;pos<4;pos++){
            tx.x=tn.x+dir[pos][0];
            tx.y=tn.y+dir[pos][1];
            if(tx.x<0||tx.x>=n||tx.y<0||tx.y>=m){
                continue;
            }
            if(maze[tx.x][tx.y]=='#'){
                continue;
            }
            if(mmap[tx.x][tx.y]==0&&(mmap[tn.x][tn.y]+1<fmap[tx.x][tx.y]||fmap[tx.x][tx.y]==0)){
                mmap[tx.x][tx.y]=mmap[tn.x][tn.y]+1;
                Q.push(tx);
            }
        }
    }
    puts("IMPOSSIBLE");
}

int main()
{
    string str;
    int t;
    cin>>t;
    while(t--){
        memset(maze,0,sizeof(maze));
        memset(fmap,0,sizeof(fmap));
        memset(mmap,0,sizeof(mmap));
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>maze[i];
            for(int j=0;j<m;j++){
                if(maze[i][j]=='J'){
                    pMan.x=i;
                    pMan.y=j;
                }
            }
        }
        slove();
        /*
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<maze[i][j];
            }
            cout<<endl;
        }*/

    }

    return 0;
}
