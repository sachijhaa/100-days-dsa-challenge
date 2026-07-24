#include <iostream>
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
TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (root == NULL)
        return new TreeNode(val);
    TreeNode* curr = root;
    while (true) {
        if (curr->val <= val) {
            if (curr->right != NULL)
                curr = curr->right;
            else {
                curr->right = new TreeNode(val);
                break;
            }
        }
        else {
            if (curr->left != NULL)
                curr = curr->left;
            else {
                curr->left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}
void inorder(TreeNode* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main() {
    TreeNode* root = NULL;
    root = insertIntoBST(root, 8);
    root = insertIntoBST(root, 4);
    root = insertIntoBST(root, 12);
    root = insertIntoBST(root, 2);
    root = insertIntoBST(root, 6);
    root = insertIntoBST(root, 10);
    root = insertIntoBST(root, 14);
    int val;
    cout << "Enter value to insert: ";
    cin >> val;
    root = insertIntoBST(root, val);
    cout << "Inorder Traversal after insertion: ";
    inorder(root);
    return 0;
}