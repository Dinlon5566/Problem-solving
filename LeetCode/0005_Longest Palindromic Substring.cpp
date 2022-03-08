class Solution {
public:
    string longestPalindrome(string s) {
        string str="#";
        for(char c:s){
            str+=c;
            str+='#';
        }
        int sc[str.size()];
        memset(sc,0,sizeof(sc));
        for(int now=1;now<str.size()-1;now++){
            //int last=now;
            if(str[now]!='#'){
                sc[now]=1;
            }
            int r=now+1,l=now-1;
            while(r<str.size()&&l>=0&&str[r]==str[l]){
                if(str[r]!='#'){
                    sc[now]+=2;
                }
                //last=r;
                l--;
                r++;
            }
            /*
            if(last!=now){
                now=last-1;
            }*/
        }

        int ml,mn;
        ml=mn=0;
        for(int i=0;i<str.size();i++){
            if(sc[i]>mn){
                ml=i;
                mn=sc[i];
            }
        }
        for(int t:sc){
            cout<<t<<" ";
        }
        cout<<endl;
        string res="";
        for(int loc=((ml-1)/2)-mn/2+(ml+1)%2;loc<=((ml-1)/2)+mn/2;loc++){
            res+=s[loc];
        }
        return res;
    }
};
