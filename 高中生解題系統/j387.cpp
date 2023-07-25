#include <iostream> 
using namespace std;
int main(){
    long long int n=0,tar=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>tar;
    for(int i=0;i<n;i++){
        if(a[i]==tar){
            cout<<i;
            return 0;
        }
    }
    cout<<"查無此數"<<endl;
    return 0;
}