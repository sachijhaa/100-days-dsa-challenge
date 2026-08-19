# Day 77 - Binary Search Tree Iterator

## Problem
LeetCode 173 - Binary Search Tree Iterator

## Approach
Used a **Stack** to simulate the inorder traversal of the BST. The `pushLeft()` function pushes all the leftmost nodes into the stack. The `next()` function removes the top node, which is the next smallest element, and then processes its right subtree by pushing its leftmost path. The `hasNext()` function checks whether the stack still contains any nodes.

Since inorder traversal of a BST gives elements in **sorted order**, the iterator returns the BST elements from smallest to largest.

## Time Complexity
O(n) *(overall for traversing all **n** nodes)*

## Space Complexity
O(h) *(where **h** is the height of the BST due to the stack)*

## Learned
- Binary Search Tree
- Inorder Traversal
- Stack
- Iterator Design
- Lazy Traversal
- Maintaining O(h) Space
- Getting BST Elements in Sorted Order