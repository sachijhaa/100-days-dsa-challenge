#include <iostream>
#include <vector>
using namespace std;
class Solution {
private:
    bool detect(int node, vector<int> adj[], vector<int> &vis, vector<int> &pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if (detect(it, adj, vis, pathVis)) {
                    return true;
                }
            } else if (pathVis[it]) {
                return true;
            }
        }
        pathVis[node] = 0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(numCourses, 0);
        vector<int> pathVis(numCourses, 0);
        for(int i=0;i<numCourses;i++) {
            if(!vis[i]) {
                if(detect(i, adj, vis, pathVis)) {
                    return false;
                }
            }
        }
        return true;
    }
};
int main() {
    int numCourses = 2;
    vector<vector<int>> prerequisites = {{1,0}};
    Solution obj;
    if(obj.canFinish(numCourses, prerequisites)) {
        cout << "All courses can be finished" << endl;
    } else {
        cout << "Not all courses can be finished" << endl;
    }
    return 0;
}