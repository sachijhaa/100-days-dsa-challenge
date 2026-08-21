#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    TreeNode* build(vector<int>& nums, int low, int high) {
        if (low > high)
            return NULL;
        int mid = low + (high - low) / 2;
        TreeNode* t = new TreeNode(nums[mid]);
        t->left = build(nums, low, mid - 1);
        t->right = build(nums, mid + 1, high);
        return t;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};
void preorder(TreeNode* root) {
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    Solution obj;
    TreeNode* root = obj.sortedArrayToBST(nums);
    cout << "Preorder Traversal: ";
    preorder(root);
    return 0;
}