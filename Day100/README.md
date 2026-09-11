# Day 100 - Word Ladder II

## Problem
LeetCode 126 - Word Ladder II

## Approach
Used **BFS + DFS Backtracking** to find all shortest transformation sequences. First, performed BFS from `beginWord` to assign the shortest distance of every reachable word using a hash map. Then, used DFS from `endWord` back toward `beginWord`, only choosing words whose distance is exactly one less than the current word. This ensures that only shortest transformation paths are generated. Each valid sequence is reversed before being added to the answer.

## Time Complexity
O(N × L × 26 + P × L × N) *(where **N** is the number of words, **L** is the word length, and **P** is the number of shortest paths)*

## Space Complexity
O(N × L + P × L × N)

## Learned
- Breadth First Search (BFS)
- DFS Backtracking
- Shortest Path Reconstruction
- Word Transformation
- Hash Map for Distance Tracking
- Generating All Shortest Paths
- Combining BFS with DFS