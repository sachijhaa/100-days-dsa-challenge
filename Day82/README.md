# Day 82 - Recover Binary Search Tree

## Problem
LeetCode 99 - Recover Binary Search Tree

## Approach
Used **Inorder Traversal** to detect the two nodes that were swapped in the Binary Search Tree. Since the inorder traversal of a valid BST is always sorted, any violation indicates misplaced nodes. Tracked the previous node during traversal and identified the first, middle, and last nodes involved in the violation. If two violations were found, swapped the first and last nodes; otherwise, swapped the first and middle nodes.

## Time Complexity
O(n) *(where **n** is the number of nodes in the BST)*

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Binary Search Tree (BST)
- Inorder Traversal
- Tree Recursion
- Detecting Swapped Nodes
- Recovering BST without Changing Structure
- Maintaining Previous Node During Traversal