# Day 58 - Vertical Order Traversal of a Binary Tree

## Problem
LeetCode 987 - Vertical Order Traversal of a Binary Tree

## Approach
Used Breadth-First Search (BFS) to traverse the binary tree while tracking the horizontal distance (column) and depth (row) of each node. Stored nodes in a nested map, where the outer map represented columns and the inner map represented rows. A multiset was used to maintain sorted order when multiple nodes shared the same position. Finally, traversed the maps in order to construct the vertical traversal.

## Time Complexity
O(n log n)

## Space Complexity
O(n)

## Learned
- Vertical order traversal
- Breadth-First Search (BFS)
- Coordinate-based tree traversal
- Nested maps and multisets
- Ordered data structures in C++