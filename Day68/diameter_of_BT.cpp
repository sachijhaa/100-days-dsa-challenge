#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        function<int(TreeNode*)> height = [&](TreeNode* root) {
            if (root == nullptr)
                return 0;
            int left = height(root->left);
            int right = height(root->right);
            diameter = max(diameter, left + right);
            return 1 + max(left, right);
        };
        height(root);
        return diameter;
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution obj;
    cout << obj.diameterOfBinaryTree(root) << endl;
    return 0;
}