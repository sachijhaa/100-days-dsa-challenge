# Day 76 - Flood Fill

## Problem
LeetCode 733 - Flood Fill

## Approach
Used **Depth First Search (DFS)** to traverse all connected pixels having the same color as the starting pixel. First stored the original color of the starting pixel and then changed it to the new color. From each pixel, recursively visited its four neighboring directions: up, down, left, and right. Stopped the recursion when the position went out of bounds or the pixel had a different color. Also handled the case where the old color and new color are the same.

## Time Complexity
O(m × n) *(where **m** is the number of rows and **n** is the number of columns)*

## Space Complexity
O(m × n) *(in the worst case due to the DFS recursion stack)*

## Learned
- Depth First Search (DFS)
- Recursion
- Matrix Traversal
- Flood Fill Algorithm
- Four-Directional Traversal
- Boundary Checking
- Connected Components