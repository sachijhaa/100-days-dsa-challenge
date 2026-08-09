#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for (int i = 2; i <= n; i++) {
            string next = "";
            int j = 0;
            while (j < ans.length()) {
                int count = 0;
                char digit = ans[j];
                while (j < ans.length() && ans[j] == digit) {
                    count++;
                    j++;
                }
                next += to_string(count);
                next += digit;
            }
            ans = next;
        }
        return ans;
    }
};
int main() {
    Solution obj;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Count and Say: " << obj.countAndSay(n) << endl;
    return 0;
}