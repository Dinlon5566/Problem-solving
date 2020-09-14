#include <iostream>
#include <string>
using namespace std;

int main()
{
    string date;
    cin>>date;
    int day=0,ago=0;
    string daylib[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cin>>ago;
    //get date
    if(date=="Sunday")
        day+=7;
    if(date=="Monday")
        day+=1;
    if(date=="Tuesday")
        day+=2;
    if(date=="Wednesday")
        day+=3;
    if(date=="Thursday")
        day+=4;
    if(date=="Friday")
        day+=5;
    if(date=="Saturday")
        day+=6;
    //get
    ago%=7;
    day+=ago;
    if(day>=7){
        day-=7;
    }
    cout<<daylib[day]<<endl;
    return 0;
}
