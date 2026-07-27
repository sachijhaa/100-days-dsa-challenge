#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if (st.empty())
                    return false;
                if (s[i] == ')' && st.top() != '(')
                    return false;
                else if (s[i] == '}' && st.top() != '{')
                    return false;
                else if (s[i] == ']' && st.top() != '[')
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};
int main() {
    Solution obj;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    if (obj.isValid(s))
        cout << "Valid Parentheses" << endl;
    else
        cout << "Invalid Parentheses" << endl;
    return 0;
}