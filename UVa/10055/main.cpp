#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    a=a-b;
    if(a<0) a*=-1;
    cout<<a;
    return 0;
}
