# Day 66 - Binary Tree Zigzag Level Order Traversal

## Problem
LeetCode 103 - Binary Tree Zigzag Level Order Traversal

## Approach
Used **Breadth-First Search (BFS)** with a Queue to traverse the binary tree level by level. For each level, stored the node values in a temporary vector. A boolean variable `leftToRight` was used to alternate the direction of traversal. When `leftToRight` was `true`, elements were stored normally; otherwise, they were stored from right to left using the index `n - 1 - i`.

## Time Complexity
O(n) *(where **n** is the number of nodes in the binary tree)*

## Space Complexity
O(n) *(for the queue and storing the result)*

## Learned
- Breadth-First Search (BFS)
- Queue-based Tree Traversal
- Level Order Traversal
- Zigzag Traversal
- Alternating Traversal Direction
- Binary Tree Concepts