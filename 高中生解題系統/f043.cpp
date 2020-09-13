#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int ans,b,a;
cin>>ans>>b;
if(ans==b){
    b=ans-3;
}
a=ans-b;
if(b<a){
int tmp=a;
a=b;
b=tmp;
}

cout<<a<<"+"<<b<<"="<<ans<<endl;
    return 0;
}
