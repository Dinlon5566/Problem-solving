#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sample output
    //The parity of 1 is 1 (mod 2).
    int input;
    while(cin>>input&&input!=0)
    {

        int binSum=0;
        string outBin="";

        while(input){
            outBin+=input%2+'0';
            binSum+=input%2;
            input/=2;
        }
        reverse(outBin.begin(),outBin.end());

        cout<<"The parity of "<<outBin<<" is "<<binSum<<" (mod 2)."<<endl;
    }
    return 0;
}
