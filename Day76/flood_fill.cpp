#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        int m = image.size();
        int n = image[0].size();
        if (r < 0 || r >= m || c < 0 || c >= n)
            return;
        if (image[r][c] != oldColor)
            return;
        image[r][c] = newColor;
        dfs(image, r - 1, c, oldColor, newColor); // Up
        dfs(image, r + 1, c, oldColor, newColor); // Down
        dfs(image, r, c - 1, oldColor, newColor); // Left
        dfs(image, r, c + 1, oldColor, newColor); // Right
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        if (oldColor == color)
            return image;
        dfs(image, sr, sc, oldColor, color);
        return image;
    }
};
int main() {
    Solution obj;
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };
    int sr = 1;
    int sc = 1;
    int color = 2;
    vector<vector<int>> ans = obj.floodFill(image, sr, sc, color);
    for (auto row : ans) {
        for (auto x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}