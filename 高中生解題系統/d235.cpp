#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int al,bl;
    while(cin>>str){
            al=bl=0;
        if(str=="0"){
            break;
        }
        int lan=str.size();
        for(int i=0;i<lan;i++){
           //0=48
            if(i%2==0){
                al+=int(str[i])-48;
            }else{
                bl+=int(str[i])-48;
            }
        }
        if((al-bl)%11==0){
            cout<<str<<" is a multiple of 11."<<endl;
        }else{
        cout<<str<<" is not a multiple of 11."<<endl;
        }
    }
    return 0;
}
