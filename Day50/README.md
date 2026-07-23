# Day 50 - Construct Binary Tree from Preorder and Inorder Traversal

## Problem
LeetCode 105 - Construct Binary Tree from Preorder and Inorder Traversal

## Approach
Used recursion to construct the binary tree. Created a hash map to store the indices of elements in the inorder traversal for O(1) lookups. The first element of the current preorder range was taken as the root. Using its position in the inorder traversal, recursively constructed the left and right subtrees by dividing both traversals into appropriate ranges.

## Time Complexity
O(n)

## Space Complexity
O(n) *(for the hash map and recursion stack)*

## Learned
- Binary Tree construction
- Tree recursion
- Divide and conquer
- Hash map for fast index lookup
- Relationship between preorder and inorder traversals