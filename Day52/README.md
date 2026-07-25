# Day 52 - Delete Node in a Binary Search Tree

## Problem
LeetCode 450 - Delete Node in a Binary Search Tree

## Approach
Used an iterative approach to locate the node to be deleted while maintaining the Binary Search Tree (BST) property. Once the target node was found, handled three cases: if the node had no left child, returned its right child; if it had no right child, returned its left child; otherwise, attached the right subtree to the rightmost node of the left subtree and replaced the deleted node with its left subtree.

## Time Complexity
O(h) *(where **h** is the height of the tree)*

## Space Complexity
O(h) *(due to the recursive call in `findLastRight`)*

## Learned
- Binary Search Tree deletion
- Handling different deletion cases
- Tree restructuring
- Iterative BST traversal
- Maintaining BST properties after deletion