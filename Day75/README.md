# Day 75 - Same Tree

## Problem
LeetCode 100 - Same Tree

## Approach
Used **Recursion** to compare both binary trees simultaneously. If both nodes are `NULL`, they are identical at that position. If only one node is `NULL`, the structures are different. Then compared the values of both nodes. Finally, recursively checked whether their left subtrees and right subtrees are also identical.

## Time Complexity
O(n) *(where **n** is the number of nodes in the tree)*

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Binary Tree
- Recursion
- Tree Comparison
- Structural Comparison
- Base Cases
- Comparing Left and Right Subtrees