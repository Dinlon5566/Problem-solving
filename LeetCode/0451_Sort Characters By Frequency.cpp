class Solution {
public:

    string frequencySort(string s) {
        unordered_map<char,int> freq;
        vector<string> bucket(s.size()+1,"");
        string sol="";

        for(char c:s){
            freq[c]++;
        }
        for(auto &it:freq){
            char c=it.first;
            int n=it.second;
            bucket[n].append(n,c);
        }
        for(int i=s.size();i>0;i--){
            sol.append(bucket[i]);
        }

        return sol;
    }
};
