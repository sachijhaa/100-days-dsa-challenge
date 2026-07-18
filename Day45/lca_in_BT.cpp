#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q) {return root;}   
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        if(left == NULL) {return right;}
        else if(right == NULL) {return left;}
        else {return root;}
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution obj;
    TreeNode* lca = obj.lowestCommonAncestor(root, root->left->left, root->left->right);
    if(lca != NULL) {
        cout << "LCA: " << lca->data << endl;
    } else {
        cout << "LCA not found." << endl;
    }
    return 0;
}