class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> arr(numRows);
        if(numRows==1){
            return s;
        }
        int down=1;
        int loc=0;
        for(int i=0;i<s.size();i++){
            arr[loc].push_back(s[i]);
            if(down){
                loc++;
            }else{
                loc--;
            }
            if(loc==numRows-1){
                down=0;
            }
            if(loc==0){
                down=1;
            }
        }
        string res="";
        for(int i=0;i<numRows;i++){
            for(char c:arr[i]){
                res+=c;
            }
        }
        return res;
    }
};
