#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string first = strs[0];
        for (int i = 0; i < first.size(); i++) {
            for (int j = 1; j < n; j++) {
                if (i == strs[j].length() || first[i] != strs[j][i]) {
                    return first.substr(0, i);
                }
            }
        }
        return first;
    }
};

int main() {
    Solution obj;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: "
         << obj.longestCommonPrefix(strs) << endl;
    return 0;
}