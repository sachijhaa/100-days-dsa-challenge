#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2};
    int k = solution.removeDuplicates(nums);
    cout << k << endl;
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}