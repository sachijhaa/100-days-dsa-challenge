#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
int main() {
    Solution obj;
    cout << obj.largestOddNumber("52") << endl;
    cout << obj.largestOddNumber("4206") << endl;
    cout << obj.largestOddNumber("35427") << endl;
    return 0;
}