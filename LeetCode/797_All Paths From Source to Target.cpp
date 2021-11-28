class Solution {
public:

    int tar;
    vector<vector<int>> result;
    vector<int> tmp;


    void DFS(vector<vector<int>>& graph,int nowNode){
        tmp.push_back(nowNode);
        if(nowNode==tar){
            result.push_back(tmp);
        }else{
            for(int node:graph[nowNode]){
                DFS(graph,node);
            }
        }
        tmp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        tar=graph.size()-1;
        DFS(graph,0);
        return result;
    }
};
