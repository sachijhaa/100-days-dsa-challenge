#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        if (A.size() > B.size()) return findMedianSortedArrays(B, A);
        int m = A.size(), n = B.size();
        int low = 0, high = m;
        while (low <= high) {
            int cut1 = (low + high) / 2;
            int cut2 = (m + n + 1) / 2 - cut1;
            int l1 = (cut1 == 0) ? INT_MIN : A[cut1 - 1];
            int r1 = (cut1 == m) ? INT_MAX : A[cut1];
            int l2 = (cut2 == 0) ? INT_MIN : B[cut2 - 1];
            int r2 = (cut2 == n) ? INT_MAX : B[cut2];
            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2)
                    return max(l1, l2);
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
            if (l1 > r2)
                high = cut1 - 1;
            else
                low = cut1 + 1;
        }
        return 0;
    }
};
int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double median = solution.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl; 
    return 0;
}