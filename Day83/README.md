# Day 83 - Number of Provinces

## Problem
LeetCode 547 - Number of Provinces

## Approach
Used **Depth First Search (DFS)** to find the number of connected components in the graph represented by an adjacency matrix. Maintained a visited array to keep track of visited cities. For every unvisited city, started a DFS traversal to visit all directly and indirectly connected cities, and increased the province count. Each DFS traversal marked one complete province.

## Time Complexity
O(n²) *(where **n** is the number of cities in the adjacency matrix)*

## Space Complexity
O(n) *(for the visited array and DFS recursion stack)*

## Learned
- Depth First Search (DFS)
- Graph Traversal
- Connected Components
- Adjacency Matrix Representation
- Visited Array
- Counting Provinces in a Graph