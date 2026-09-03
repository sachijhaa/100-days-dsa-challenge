# Day 92 - Surrounded Regions

## Problem
LeetCode 130 - Surrounded Regions

## Approach
Used **Depth First Search (DFS)** to identify all `'O'` cells connected to the boundary. Started DFS from every boundary `'O'` and marked all connected cells as visited. After marking the safe regions, traversed the entire board and converted every unvisited `'O'` into `'X'`, since those regions were completely surrounded by `'X'`.

## Time Complexity
O(n × m) *(where **n** is the number of rows and **m** is the number of columns)*

## Space Complexity
O(n × m) *(for the visited matrix and DFS recursion stack in the worst case)*

## Learned
- Depth First Search (DFS)
- Matrix Traversal
- Boundary DFS
- Connected Components
- Four-Directional Movement
- Graph Traversal on Grid
- Identifying Safe vs Surrounded Regions