#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        long long res = 1;
        int N = m + n - 2;
        int r = min(m - 1, n - 1);
        for (int i = 1; i <= r; i++) {
            res = res * (N - r + i) / i;
        }
        return (int)res;
    }
};
int main() {
    Solution sol;
    int m = 3, n = 7;
    cout << sol.uniquePaths(m, n) << endl; // Output: 28
    return 0;
}