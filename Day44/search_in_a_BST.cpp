#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root) {
            if (root->val == val)
                return root;
            if (val < root->val)
                root = root->left;
            else
                root = root->right;
        }
        return nullptr;
    }
};
void printTree(TreeNode* root) {
    if (!root) {
        cout << "[]";
        return;
    }
    vector<TreeNode*> q;
    q.push_back(root);
    cout << "[";
    int i = 0;
    while (i < q.size()) {
        TreeNode* curr = q[i++];
        if (curr) {
            cout << curr->val;
            q.push_back(curr->left);
            q.push_back(curr->right);
        } else {
            cout << "null";
        }
        if (i != q.size())
            cout << ",";
    }
    cout << "]";
}
int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    Solution solution;
    int val = 2;
    TreeNode* result = solution.searchBST(root, val);
    printTree(result);
    return 0;
}