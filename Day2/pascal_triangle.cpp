#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1;col<row;col++) {
            ans = ans * (row-col);
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++) {ans.push_back(generateRow(i));}   
        return ans;   
    }
};
int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;
    Solution solution;
    vector<vector<int>> pascalTriangle = solution.generate(numRows);
    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for (const auto& row : pascalTriangle) {
        for (int num : row) {cout << num << " ";}
        cout << endl;
    }
    return 0;
}