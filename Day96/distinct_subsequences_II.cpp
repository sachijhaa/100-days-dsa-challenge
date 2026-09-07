#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        long long dp = 1;              
        vector<long long> last(26, 0); 
        for (char ch : s) {
            long long newDp = (2 * dp % MOD - last[ch - 'a'] + MOD) % MOD;
            last[ch - 'a'] = dp;
            dp = newDp;
        }
        return (dp - 1 + MOD) % MOD;   
    }
};
int main() {
    Solution obj;
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Distinct subsequences: " << obj.distinctSubseqII(s) << endl;
    return 0;
}