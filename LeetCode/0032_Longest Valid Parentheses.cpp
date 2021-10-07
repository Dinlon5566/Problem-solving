class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> charstack;
        vector <int> link(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                charstack.push(i);
            }else{
                if(!charstack.empty()){
                    link[i]=1;
                    link[charstack.top()]=1;
                    charstack.pop();
                }
            }
        }
        int tmp=0;
        int result=0;
        for(int i:link){
            if(i){
                tmp++;
            }else{
                result=max(result,tmp);
                tmp=0;
            }
        }
        return max(result,tmp);
    }
};
