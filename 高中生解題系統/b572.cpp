#include <iostream>

using namespace std;

int main()
{
    int time,h,m,hh,mm,cost;
    int havetime;
    cin>>time;
    while(time--){
        cin>>h>>m;
        cin>>hh>>mm;
        cin>>cost;
        if(h==hh){
            havetime=mm-m;
        }else{
            havetime=(hh-h)*60+mm-m;
        }
        if(cost>havetime){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
