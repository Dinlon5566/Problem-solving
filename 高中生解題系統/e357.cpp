#include <iostream>

using namespace std;
int fun(int);
int main()
{
    int num;
    cin>>num;
    num=fun(num);
    cout<<num<<endl;
    return 0;
}

int fun(int num)
{
    if(num==1){
        return 1;
    }else if(num%2==0){
    return fun(num/2);
    }else{
    return (fun(num-1)+fun(num+1));
    }
}
