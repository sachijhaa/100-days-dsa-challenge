# Day 56 - Binary Tree Inorder Traversal

## Problem
LeetCode 94 - Binary Tree Inorder Traversal

## Approach
Used Morris Traversal to perform inorder traversal without using recursion or an explicit stack. For each node, if there was no left child, visited the node and moved to its right child. Otherwise, found its inorder predecessor. If the predecessor's right pointer was null, created a temporary thread to the current node and moved left. If the thread already existed, removed it, visited the current node, and moved to the right subtree.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Morris Traversal
- Inorder traversal
- Threaded Binary Trees
- Tree traversal without recursion
- Space optimization in tree algorithms