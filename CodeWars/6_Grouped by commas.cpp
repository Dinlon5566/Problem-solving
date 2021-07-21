#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string group_by_commas(int n)
{
    string result="";
    int counter=1;
    result+=(n%10+'0');
    n/=10;
    while(n!=0)
    {
        if(counter++%3==0)
        {
            result+=',';
        }
        result+=(n%10+'0');
        n/=10;
    }
    for(int i=0; i<result.size()/2; i++)
    {
        swap(result[i],result[result.size()-1-i]);
    }
    return result;
}
