# Day 84 - Rotting Oranges

## Problem
LeetCode 994 - Rotting Oranges

## Approach
Used **Breadth First Search (BFS)** to simulate the rotting process level by level. First, added all initially rotten oranges to a queue with time `0` and counted the total number of fresh oranges. Then, performed BFS in four directions (up, right, down, left). Whenever a fresh orange became rotten, marked it as visited, added it to the queue with `time + 1`, and increased the count of rotten fresh oranges. The maximum time encountered during BFS represented the total time required. If some fresh oranges were never reached, returned `-1`.

## Time Complexity
O(n × m) *(where **n** is the number of rows and **m** is the number of columns)*

## Space Complexity
O(n × m) *(for the queue and visited matrix in the worst case)*

## Learned
- Breadth First Search (BFS)
- Multi-Source BFS
- Matrix Traversal
- Queue
- Four-Directional Traversal
- Level-by-Level Processing
- Shortest Time Simulation