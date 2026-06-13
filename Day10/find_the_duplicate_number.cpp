#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n,0);
        for(int num : nums) {
            freq[num]++;
            if (freq[num]>1) {return num;}
        }
        return -1;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,3,4,2,2};
    cout << s.findDuplicate(nums) << endl;
    return 0;
}