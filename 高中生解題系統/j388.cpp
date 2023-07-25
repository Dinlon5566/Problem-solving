#include <iostream> 
#include <string>
#include <cmath>
using namespace std;
int main(){
    int H,M;
    cin>>H>>M;
    int totalTime=0,late;
    string cmd,lastCmd;
    cin>>lastCmd;
    while (cin>>cmd)
    {
        if(cmd[0]<='z'&&cmd[0]>='a'){
            totalTime+=abs(lastCmd[0]-cmd[0])*10;
            lastCmd=cmd;
        }else{
            break;
        }
    }

    do
    {
        if (cmd[0]=='T')
        {
            break;
        }
        if (cmd[0]=='E')
        {
            totalTime+=2;
        }else if (cmd[0]=='L')
        {
            cin>>late;
            totalTime+=late;
        }
        
    } while (cin>>cmd && cmd[0]!='T');
    
    H+=totalTime/60;
    M+=totalTime%60;
    if (M>=60)
    {
        H++;
        M-=60;
    }
    if (H>=24)
    {
        H-=24;
    }
    printf("%02d %02d",H,M);
    return 0;
}