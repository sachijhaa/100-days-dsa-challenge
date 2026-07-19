# Day 46 - All Nodes Distance K in Binary Tree

## Problem
LeetCode 863 - All Nodes Distance K in Binary Tree

## Approach
Used a two-step approach. First, performed a BFS traversal to map each node to its parent using a hash map. Then, started another BFS from the target node, exploring its left child, right child, and parent while keeping track of visited nodes to avoid revisiting. After reaching the `k`th level, collected all remaining nodes in the queue as the answer.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Breadth-First Search (BFS)
- Parent mapping in binary trees
- Graph traversal on trees
- Using hash maps for parent tracking
- Avoiding revisits with a visited map