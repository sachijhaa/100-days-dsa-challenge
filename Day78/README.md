# Day 78 - Word Search

## Problem
LeetCode 79 - Word Search

## Approach
Used **Depth First Search (DFS)** with **Backtracking** to search for the given word in the board. Started DFS from every cell of the matrix. At each step, checked whether the current character matched the corresponding character in the word. Marked the visited cell temporarily with `'#'` to avoid revisiting it in the same path, explored all four directions (up, down, left, right), and restored the original character during backtracking. Returned `true` as soon as the complete word was found.

## Time Complexity
O(m × n × 4^L) *(where **m** and **n** are the board dimensions and **L** is the length of the word)*

## Space Complexity
O(L) *(due to the recursion stack during DFS)*

## Learned
- Depth First Search (DFS)
- Backtracking
- Matrix Traversal
- Four-Directional Search
- Visited Cell Marking
- Recursive Search in a Grid