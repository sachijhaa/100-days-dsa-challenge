# Day 68 - Diameter of Binary Tree

## Problem
LeetCode 543 - Diameter of Binary Tree

## Approach
Used a **Depth-First Search (DFS)** approach to calculate the height of every node. For each node, calculated the height of its left and right subtrees. The diameter passing through that node is `left height + right height`. Maintained a global `diameter` variable to store the maximum diameter found during the traversal. The height returned for each node is `1 + max(left, right)`.

## Time Complexity
O(n) *(where **n** is the number of nodes in the binary tree)*

## Space Complexity
O(h) *(where **h** is the height of the binary tree due to the recursion stack)*

## Learned
- Depth-First Search (DFS)
- Binary Tree Height
- Tree Recursion
- Calculating Diameter of a Binary Tree
- Postorder Traversal
- Optimizing Tree Traversal