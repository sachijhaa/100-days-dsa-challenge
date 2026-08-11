# Day 69 - Kth Smallest Element in a BST

## Problem
LeetCode 230 - Kth Smallest Element in a BST

## Approach
Used **Inorder Traversal** of the Binary Search Tree with a stack. Since the inorder traversal of a BST visits nodes in **ascending order**, the `k`th node visited is the `k`th smallest element. Used an iterative approach to avoid recursion and decrement `k` whenever a node is processed. When `k` becomes `0`, returned the current node's value.

## Time Complexity
O(H + k) *(where **H** is the height of the BST)*

## Space Complexity
O(H) *(for the stack used during inorder traversal)*

## Learned
- Binary Search Tree (BST)
- Inorder Traversal
- Iterative Tree Traversal
- Stack
- Finding Kth Smallest Element
- BST Property: Inorder Traversal gives sorted order