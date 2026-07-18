# Day 45 - Lowest Common Ancestor of a Binary Tree

## Problem
LeetCode 236 - Lowest Common Ancestor of a Binary Tree

## Approach
Used recursion to find the Lowest Common Ancestor (LCA). If the current node was `NULL`, `p`, or `q`, returned it immediately. Recursively searched the left and right subtrees. If both recursive calls returned non-null values, the current node was the LCA. Otherwise, returned the non-null result from either subtree.

## Time Complexity
O(n)

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Tree recursion
- Divide and conquer approach
- Lowest Common Ancestor concept
- Postorder traversal
- Recursive problem solving on binary trees