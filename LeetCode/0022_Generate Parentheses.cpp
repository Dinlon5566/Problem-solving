class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        makeString("",n,0);
        return result;
    }
    void makeString(string str,int size,int level){
        if(size==0&&level==0){
            result.push_back(str);
            return;
        }
        if(level>0){
            makeString(str+")",size,level-1);
        }
        if(size>0){
            makeString(str+"(",size-1,level+1);
        }
    }
};
