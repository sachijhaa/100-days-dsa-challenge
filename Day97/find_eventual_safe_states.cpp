#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
private:
    bool dfsCheck(int node, vector<vector<int>>& graph, vector<int> &vis, vector<int> &pathVis, vector<int> &check) {
        vis[node] = 1;
        pathVis[node] = 1;
        for(auto it : graph[node]) {
            if(!vis[it]) {
                if(dfsCheck(it, graph, vis, pathVis, check) == true) {
                    return true;
                }
            }
            else if(pathVis[it]) {
                return true;
            }
        }
        check[node] = 1;
        pathVis[node] = 0;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        vector<int> check(V, 0);
        vector<int> safeNodes;
        for(int i=0;i<V;i++) {
            if(!vis[i]) {
                dfsCheck(i, graph, vis, pathVis, check);
            }
        }
        for(int i=0;i<V;i++) {
            if(check[i] == 1) safeNodes.push_back(i);
        }
        return safeNodes;
    }
};
int main() {
    int V = 7;
    vector<vector<int>> graph(V);
    graph[0] = {1, 2};
    graph[1] = {2, 3};
    graph[2] = {5};
    graph[3] = {0};
    graph[4] = {5};
    graph[5] = {};
    graph[6] = {};
    Solution obj;
    vector<int> safeNodes = obj.eventualSafeNodes(graph);
    cout << "Eventual Safe Nodes: ";
    for(int i=0;i<safeNodes.size();i++) {
        cout << safeNodes[i] << " ";
    }
    cout << endl;
    return 0;
}