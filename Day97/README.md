# Day 97 - Find Eventual Safe States

## Problem
LeetCode 802 - Find Eventual Safe States

## Approach
Used **Depth First Search (DFS)** with **Cycle Detection** to identify eventual safe nodes in the directed graph. Maintained three arrays: `vis` to track visited nodes, `pathVis` to track nodes currently in the DFS recursion path, and `check` to mark nodes that are safe. If a cycle was detected during DFS, the current path was unsafe. Nodes that completed DFS without encountering any cycle were marked as safe and added to the final answer.

## Time Complexity
O(V + E) *(where **V** is the number of vertices and **E** is the number of edges in the graph)*

## Space Complexity
O(V) *(for the visited arrays and recursion stack)*

## Learned
- Depth First Search (DFS)
- Cycle Detection in Directed Graph
- Graph Traversal
- Recursion Stack (`pathVis`)
- Eventual Safe Nodes
- Directed Graph Concepts