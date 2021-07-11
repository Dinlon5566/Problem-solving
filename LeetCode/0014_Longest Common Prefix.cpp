class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int strCount=strs.size();
        string ans="";
        for(int c=0;c<strs[0].size();c++){
            bool same=1;
            string tmpStr;
            tmpStr.assign(strs[0],0,c+1);
            for(int i=1;i<strCount;i++){
                if(strs[i].find(tmpStr,0)){
                    return ans;
                }
            }
            if(same){
                ans=tmpStr;
            }
        }
        if(strCount==1){
            return strs[0];
        }
        return ans;
    }
};
