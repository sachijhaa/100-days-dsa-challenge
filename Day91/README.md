# Day 91 - 01 Matrix

## Problem
LeetCode 542 - 01 Matrix

## Approach
Used **Multi-Source Breadth First Search (BFS)** to find the shortest distance of every cell from the nearest `0`. Initially pushed all cells containing `0` into the queue with distance `0` and marked them as visited. Then performed BFS in four directions (up, right, down, left). Whenever an unvisited neighboring cell was found, marked it as visited, assigned its distance as `current distance + 1`, and pushed it into the queue. This ensures the shortest distance is calculated for every cell.

## Time Complexity
O(n × m) *(where **n** is the number of rows and **m** is the number of columns)*

## Space Complexity
O(n × m) *(for the visited matrix, distance matrix, and BFS queue)*

## Learned
- Multi-Source BFS
- Breadth First Search (BFS)
- Matrix Traversal
- Shortest Distance in a Grid
- Queue
- Four-Directional Movement
- Level-by-Level Traversal