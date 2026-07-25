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
TreeNode* findLastRight(TreeNode* root) {
    if (root->right == NULL) return root;
    return findLastRight(root->right);
}
TreeNode* helper(TreeNode* root) {
    if (root->left == NULL)
        return root->right;
    else if (root->right == NULL)
        return root->left;
    TreeNode* rightChild = root->right;
    TreeNode* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}
TreeNode* deleteNode(TreeNode* root, int key) {
    if (root == NULL)
        return NULL;
    if (root->val == key)
        return helper(root);
    TreeNode* dummy = root;
    while (root != NULL) {
        if (root->val > key) {
            if (root->left != NULL && root->left->val == key) {
                root->left = helper(root->left);
                break;
            } else {
                root = root->left;
            }
        } else {
            if (root->right != NULL && root->right->val == key) {
                root->right = helper(root->right);
                break;
            } else {
                root = root->right;
            }
        }
    }
    return dummy;
}
TreeNode* insert(TreeNode* root, int val) {
    if (root == NULL) return new TreeNode(val);
    TreeNode* curr = root;
    while (true) {
        if (val < curr->val) {
            if (curr->left != NULL)
                curr = curr->left;
            else {
                curr->left = new TreeNode(val);
                break;
            }
        } else {
            if (curr->right != NULL)
                curr = curr->right;
            else {
                curr->right = new TreeNode(val);
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
    root = insert(root, 5);
    insert(root, 3);
    insert(root, 6);
    insert(root, 2);
    insert(root, 4);
    insert(root, 7);
    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;
    int key = 3;
    root = deleteNode(root, key);
    cout << "Inorder after deleting " << key << ": ";
    inorder(root);
    cout << endl;
    return 0;
}