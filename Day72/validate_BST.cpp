#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    bool check(TreeNode* root, long long minValue, long long maxValue) {
        if (root == NULL) {
            return true;
        }
        if (root->val <= minValue || root->val >= maxValue) {
            return false;
        }
        return check(root->left, minValue, root->val) &&
               check(root->right, root->val, maxValue);
    }
    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    Solution obj;
    if (obj.isValidBST(root)) {
        cout << "Valid BST" << endl;
    }
    else {
        cout << "Not a Valid BST" << endl;
    }
    return 0;
}