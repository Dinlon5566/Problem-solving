class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> a;
        set<string> b;
        for(int i=0;i<paths.size();i++)
        {
            a.insert(paths[i][0]);
            b.insert(paths[i][1]);
        }
        for(auto c:b)
        {
            if(a.count(c)==0)
                return c;
        }
        return 0;
    }
};