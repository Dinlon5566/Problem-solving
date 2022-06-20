class Solution {
public:
    bool isCycle(vector<vector<int>>& graph,vector<int> &visit,int loc){
        if(visit[loc]==1){
            return 1;
        }
        if(visit[loc]==0){
            visit[loc]=1;
            for(int n:graph[loc]){
                if(isCycle(graph,visit,n)){
                    return 1;
                }
            }
        }
        visit[loc]=2;
        return 0;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector <vector<int>> graph(numCourses,vector<int>(0));
        for(auto pair:prerequisites){
            graph[pair[0]].push_back(pair[1]);
        }
        vector<int> visit(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(isCycle(graph,visit,i)){
                return false;
            }
        }
        return true;
    }
};
