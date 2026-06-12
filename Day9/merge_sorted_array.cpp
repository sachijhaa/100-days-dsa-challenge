#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = m-1;
        int right = 0;
        while(left>=0 && right<n) {
            if(nums1[left]>nums2[right]) {
                swap(nums1[left], nums2[right]);
                left--, right++;
            } else {break;}
        }
        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(), nums2.begin()+n);  
        for(int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
int main() {
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    s.merge(nums1, 3, nums2, 3);
    for(int i : nums1) {
        cout << i << " ";
    }
    return 0;
}