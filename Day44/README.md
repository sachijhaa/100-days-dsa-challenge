# Day 44 - Search in a Binary Search Tree

## Problem
LeetCode 700 - Search in a Binary Search Tree

## Approach
Used the Binary Search Tree (BST) property to search for the target value efficiently. Starting from the root, compared the target with the current node's value. If the target was smaller, moved to the left subtree; otherwise, moved to the right subtree. Continued this process until the target node was found or the tree became empty.

## Time Complexity
O(h) *(where **h** is the height of the tree)*

## Space Complexity
O(1)

## Learned
- Binary Search Tree traversal
- Utilizing BST properties
- Iterative tree traversal
- Efficient searching in trees
- Optimizing search based on tree structure