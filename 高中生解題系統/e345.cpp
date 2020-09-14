#include <iostream>

using namespace std;
int addDigits(int);
int main()
{
    int num;
    while(cin>>num)
    cout<<addDigits(num)<<endl;
}
int addDigits(int num) {
return num%9==0 && num>0 ? 9 :num % 9;
}
