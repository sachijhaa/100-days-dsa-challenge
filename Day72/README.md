# Day 72 - Validate Binary Search Tree

## Problem
LeetCode 98 - Validate Binary Search Tree

## Approach
Used **Recursion with Range Validation** to check whether the binary tree satisfies the BST property. Each node must have a value greater than the minimum allowed value and smaller than the maximum allowed value. For the left subtree, the current node becomes the new maximum value, while for the right subtree, the current node becomes the new minimum value. Used `LLONG_MIN` and `LLONG_MAX` as the initial boundaries.

## Time Complexity
O(n) *(where **n** is the number of nodes in the binary tree)*

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Binary Search Tree (BST)
- Recursion
- Range Validation
- Tree Traversal
- Maintaining Minimum and Maximum Bounds
- Handling Integer Limits