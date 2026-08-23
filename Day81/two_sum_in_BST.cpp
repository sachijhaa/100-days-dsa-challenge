#include <iostream>
#include <unordered_set>
#include <stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};
class BSTIterator {
    stack<TreeNode *> myStack;
    bool reverse = true;
public:
    BSTIterator(TreeNode *root, bool isReverse) {
        reverse = isReverse;
        pushAll(root);
    }
    bool hasNext() {
        return !myStack.empty();
    }
    int next() {
        TreeNode *tempNode = myStack.top();
        myStack.pop();
        if(!reverse) pushAll(tempNode->right);
        else pushAll(tempNode->left);
        return tempNode->val;
    }
private:
    void pushAll(TreeNode *node) {
        for(;node != NULL;) {
            myStack.push(node);
            if(reverse == true) {
                node = node->right;
            } else {
                node = node->left;
            }
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);
        int i = l.next();
        int j = r.next();
        while(i<j) {
            if(i+j == k) return true;
            else if(i+j<k) i = l.next();
            else j = r.next();
        } 
        return false; 
    }
};
int main() {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    Solution obj;
    int k = 9;
    if (obj.findTarget(root, k))
        cout << "Found a pair with sum " << k << endl;
    else
        cout << "No pair found with sum " << k << endl;
    return 0;
}