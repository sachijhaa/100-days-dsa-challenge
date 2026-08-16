# Day 74 - Binary Tree Maximum Path Sum

## Problem
LeetCode 124 - Binary Tree Maximum Path Sum

## Approach
Used **Recursion with Postorder Traversal** to calculate the maximum path sum for every node. For each node, calculated the maximum contribution from its left and right subtrees. Negative contributions were ignored using `max(0, ...)`. The path passing through the current node was calculated as `root->val + left + right` and used to update the global maximum answer. However, when returning to the parent, only one side can be selected, so returned `root->val + max(left, right)`.

## Time Complexity
O(n) *(where **n** is the number of nodes in the binary tree)*

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Binary Tree
- Postorder Traversal
- Recursion
- Maximum Path Sum
- Handling Negative Values
- Global Maximum
- Tree Dynamic Programming