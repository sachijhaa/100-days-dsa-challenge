# Day 53 - Serialize and Deserialize Binary Tree

## Problem
LeetCode 297 - Serialize and Deserialize Binary Tree

## Approach
Used Level Order Traversal (BFS) to serialize and deserialize the binary tree. During serialization, traversed the tree level by level and stored each node's value in a string, using `#` to represent null nodes. During deserialization, reconstructed the tree by reading the serialized string and using a queue to assign left and right children to each node in level order.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Binary Tree serialization
- Binary Tree deserialization
- Breadth-First Search (BFS)
- Queue-based tree traversal
- String parsing using `stringstream`