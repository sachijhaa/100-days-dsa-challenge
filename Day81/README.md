# Day 81 - Two Sum IV - Input is a BST

## Problem
LeetCode 653 - Two Sum IV - Input is a BST

## Approach
Used **Two BST Iterators** to simulate the **Two Pointer** technique on a Binary Search Tree. One iterator traverses the BST in inorder (smallest to largest), while the other traverses it in reverse inorder (largest to smallest). Compared the sum of the two current values. If the sum was smaller than `k`, moved the inorder iterator forward. If the sum was larger, moved the reverse inorder iterator backward. Continued until the two iterators met or a valid pair was found.

## Time Complexity
O(n) *(where **n** is the number of nodes in the BST)*

## Space Complexity
O(h) *(where **h** is the height of the BST due to the iterator stacks)*

## Learned
- Binary Search Tree (BST)
- Two Pointer Technique on BST
- BST Iterator
- Inorder Traversal
- Reverse Inorder Traversal
- Stack-based Tree Traversal