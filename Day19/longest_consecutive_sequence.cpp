#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen = 0;
        for (int num:st) {
            if(st.find(num-1)==st.end()) {
                int current = num;
                int cnt = 1;
                while(st.find(current+1)!=st.end()) {
                    current++;
                    cnt++;
                }
                maxLen = max(maxLen, cnt);
            }
        }
        return maxLen;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << sol.longestConsecutive(nums) << endl; 
    return 0;
}