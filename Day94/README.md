# Day 94 - Is Graph Bipartite?

## Problem
LeetCode 785 - Is Graph Bipartite?

## Approach
Used **Breadth First Search (BFS)** with **Two-Coloring** to check whether the graph is bipartite. Maintained a `color` array initialized with `-1` for all vertices. Started BFS from every unvisited node, assigned it one color, and colored all its adjacent nodes with the opposite color. If at any point two adjacent nodes had the same color, the graph was not bipartite. Repeated this process for every disconnected component.

## Time Complexity
O(V + E) *(where **V** is the number of vertices and **E** is the number of edges)*

## Space Complexity
O(V) *(for the color array and BFS queue)*

## Learned
- Breadth First Search (BFS)
- Bipartite Graph
- Graph Coloring
- Two-Coloring Technique
- Adjacency List Traversal
- Handling Disconnected Graphs