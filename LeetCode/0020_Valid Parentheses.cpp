class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(char c : str){
            if(c == '(' || c == '[' || c == '{'){
                s.push(c);
            }
            else{
                if(s.empty()) return false;
                else if(c == ')' && s.top() == '(')        s.pop();
                else if(c == ']' && s.top() == '[')        s.pop();
                else if(c == '}' && s.top() == '{')        s.pop();
                else return 0;
            }
        }
        return s.size()==0;
    }
};
