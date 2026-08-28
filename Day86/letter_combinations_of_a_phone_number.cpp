#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    void solve(int index, string &digits, string &temp,
               vector<string> &ans, vector<string> &mapping) {
        if (index == digits.size()) {
            ans.push_back(temp);
            return;
        }
        string letters = mapping[digits[index] - '0'];
        for (char ch : letters) {
            temp.push_back(ch);                    
            solve(index + 1, digits, temp, ans, mapping);
            temp.pop_back();                       
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> ans;
        string temp = "";
        solve(0, digits, temp, ans, mapping);
        return ans;
    }
};
int main() {
    Solution obj;
    string digits;
    cin >> digits;
    vector<string> result = obj.letterCombinations(digits);
    for (string str : result) {
        cout << str << " ";
    }
    return 0;
}