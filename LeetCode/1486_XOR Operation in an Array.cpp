#include <iostream>

using namespace std;

int main()
{
    int n,start,ans=0;
    cin>>n>>start;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=start;
        start+=2;
    }
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            ans=arr[i];
        }
        else
        {
            ans^=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
