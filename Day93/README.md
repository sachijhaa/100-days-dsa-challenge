# Day 93 - Number of Enclaves

## Problem
LeetCode 1020 - Number of Enclaves

## Approach
Used **Multi-Source Breadth First Search (BFS)** starting from all boundary land cells (`1`). Added every boundary land cell to a queue and marked it as visited. Then performed BFS in four directions (up, right, down, left) to mark all land cells connected to the boundary. Finally, traversed the grid and counted the land cells that were not visited, as those cells are completely enclosed and cannot reach the boundary.

## Time Complexity
O(n × m) *(where **n** is the number of rows and **m** is the number of columns)*

## Space Complexity
O(n × m) *(for the visited matrix and BFS queue)*

## Learned
- Multi-Source BFS
- Breadth First Search (BFS)
- Matrix Traversal
- Boundary Traversal
- Connected Components
- Four-Directional Movement
- Identifying Enclosed Land Cells