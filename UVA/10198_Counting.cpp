#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string addStr(string str1,string str2){
    string res="";
    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    int i,c,m;
    i=c=m=0;
    while(str1[i]&&str2[i]){
        m=str1[i]-'0'+str2[i]-'0';
        c+=m;
        res+=c%10+'0';
        c/=10;
        i++;
    }
    if(i==str1.size()){
        while(i<str2.size()){
            m=str2[i]-'0';
            c+=m;
            res+=c%10+'0';
            c/=10;
            i++;
        }
    }
    if(i==str2.size()){
        while(i<str1.size()){
            m=str1[i]-'0';
            c+=m;
            res+=c%10+'0';
            c/=10;
            i++;
        }
    }
    if(c){
        res+=c+'0';
    }
    reverse(res.begin(),res.end());
    return res;
}
void slove(vector<string> &v){
    v.push_back("0");
    v.push_back("2");
    v.push_back("5");
    v.push_back("13");
    for(int i=4;i<1005;i++){
        string numStr=v[i-1];
        numStr=addStr(numStr,numStr);
        numStr=addStr(numStr,v[i-2]);
        numStr=addStr(numStr,v[i-3]);
        v.push_back(numStr);
    }
}
int main()
{
    int n;
    vector<string> v;
    slove(v);
    while(cin>>n){
        cout<<v[n]<<endl;
    }
    return 0;
}
