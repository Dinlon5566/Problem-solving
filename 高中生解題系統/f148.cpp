#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int obj;
    char in;
    int numin;
    cin>>x>>y>>obj;
    int objmap[26][3];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>in;
            numin=int(in);
            if(numin<=122&&numin>=97)
            {
                objmap[numin-97][0]=i;
                objmap[numin-97][1]=j;
                objmap[numin-97][2]=1;
            }
        }
    }
    int flag=0;
    int have=0,havelib[26];
    for(int i=0; i<26; i++)
    {
        if(objmap[i][2]==1)
        {
            havelib[have]=i;
            have++;
        }
    }
    if(have<obj)
    {
        flag=1;
    }
    if (flag==0)
    {
        for(int i=0; i<obj; i++)
        {
            cout<<objmap[havelib[i]][0]<<" "<<objmap[havelib[i]][1]<<endl;
        }
    }
    else
    {
        cout<<"Mission fail."<<endl;
    }
    return 0;
}
