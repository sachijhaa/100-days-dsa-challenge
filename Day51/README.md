# Day 51 - Insert into a Binary Search Tree

## Problem
LeetCode 701 - Insert into a Binary Search Tree

## Approach
Used an iterative approach to insert a new value into the Binary Search Tree (BST). Starting from the root, compared the value to be inserted with the current node. If the value was greater than or equal to the current node's value, moved to the right subtree; otherwise, moved to the left subtree. Repeated this process until reaching a null position, where the new node was inserted while preserving the BST property.

## Time Complexity
O(h) *(where **h** is the height of the tree)*

## Space Complexity
O(1)

## Learned
- Binary Search Tree insertion
- Iterative tree traversal
- Preserving BST properties
- Tree node manipulation
- Efficient insertion without recursion