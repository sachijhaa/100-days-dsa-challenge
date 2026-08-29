# Day 87 - Number of Islands

## Problem
LeetCode 200 - Number of Islands

## Approach
Used **Breadth First Search (BFS)** to count the number of connected islands in the grid. Traversed every cell of the matrix, and whenever an unvisited land cell (`'1'`) was found, started a BFS traversal to visit all connected land cells in four directions (up, right, down, left). Marked each visited land cell to avoid revisiting it and increased the island count for every new BFS traversal.

## Time Complexity
O(n × m) *(where **n** is the number of rows and **m** is the number of columns)*

## Space Complexity
O(n × m) *(for the visited matrix and BFS queue in the worst case)*

## Learned
- Breadth First Search (BFS)
- Graph Traversal on Grid
- Connected Components
- Matrix Traversal
- Four-Directional Movement
- Visited Matrix
- Counting Islands in a Grid