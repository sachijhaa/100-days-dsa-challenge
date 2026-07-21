#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp,
               vector<bool>& used, vector<vector<int>>& ans) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;
            used[i] = true;
            temp.push_back(nums[i]);
            solve(nums, temp, used, ans);
            temp.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        solve(nums, temp, used, ans);
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = obj.permute(nums);
    for (auto &v : ans) {
        for (int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}