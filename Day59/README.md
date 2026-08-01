# Day 59 - Validate Binary Search Tree

## Problem
LeetCode 98 - Validate Binary Search Tree

## Approach
Used recursion with lower and upper bounds to validate the Binary Search Tree (BST). For each node, checked whether its value lay strictly between the allowed minimum and maximum values. While traversing the left subtree, updated the upper bound to the current node's value. While traversing the right subtree, updated the lower bound to the current node's value. If any node violated these constraints, the tree was not a valid BST.

## Time Complexity
O(n)

## Space Complexity
O(h) *(where **h** is the height of the tree due to the recursion stack)*

## Learned
- Binary Search Tree validation
- Recursive tree traversal
- Min-Max boundary technique
- Tree recursion
- Maintaining BST properties