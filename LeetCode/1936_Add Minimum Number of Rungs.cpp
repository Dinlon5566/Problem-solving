class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int result=0;
        result+=(rungs[0]-1)/dist;
        for(int i=1;i<rungs.size();i++){
            result+=(rungs[i]-rungs[i-1]-1)/dist;
        }
        return result;
    }
};
