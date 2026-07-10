#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for (int num : nums) {
            if (num == 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        return max(maxCount, count);
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = solution.findMaxConsecutiveOnes(nums);
    cout << "Maximum consecutive ones: " << result << endl;
    return 0;
}