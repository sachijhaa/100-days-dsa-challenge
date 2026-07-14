#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(int start, vector<int>& candidates, int target) {
        if(target==0) {
            ans.push_back(temp);
            return;
        }
        for(int i = start; i < candidates.size(); i++) {
            if(candidates[i]>target) continue;
            temp.push_back(candidates[i]);
            solve(i, candidates, target-candidates[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0, candidates, target);
        return ans;
    }
};
int main() {
    Solution s;
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = s.combinationSum(candidates, target);
    for(auto& combination : result) {
        cout << "[";
        for(int i = 0; i < combination.size(); i++) {
            cout << combination[i];
            if(i < combination.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}