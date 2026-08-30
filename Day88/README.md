# Day 88 - Course Schedule

## Problem
LeetCode 207 - Course Schedule

## Approach
Used **Depth First Search (DFS)** to detect a cycle in the directed graph representing course prerequisites. Built an adjacency list where an edge points from a prerequisite course to the dependent course. Maintained two arrays: `vis` to track visited nodes and `pathVis` to track nodes currently in the DFS recursion path. If a node already existed in the current DFS path, a cycle was detected, meaning it was impossible to finish all courses.

## Time Complexity
O(V + E) *(where **V** is the number of courses and **E** is the number of prerequisite pairs)*

## Space Complexity
O(V) *(for the visited arrays and recursion stack)*

## Learned
- Depth First Search (DFS)
- Cycle Detection in Directed Graph
- Adjacency List
- Visited Array
- Path Visited Array
- Directed Graph Traversal
- Topological Sort Concept