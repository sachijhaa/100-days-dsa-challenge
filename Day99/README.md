# Day 99 - Word Ladder

## Problem
LeetCode 127 - Word Ladder

## Approach
Used **Breadth First Search (BFS)** to find the shortest transformation sequence from `beginWord` to `endWord`. Started BFS with the `beginWord` and stored all words from the word list in an `unordered_set` for **O(1)** lookup. For each word, changed one character at a time (`a` to `z`) to generate all possible transformations. If a transformed word existed in the set, removed it to avoid revisiting and pushed it into the queue with `steps + 1`. The first time `endWord` was reached, returned the minimum number of transformations.

## Time Complexity
O(N × L × 26) *(where **N** is the number of words and **L** is the length of each word)*

## Space Complexity
O(N) *(for the queue and unordered set)*

## Learned
- Breadth First Search (BFS)
- Shortest Path in an Unweighted Graph
- Unordered Set for Fast Lookup
- String Transformation
- Graph Traversal Using Words
- Generating Neighbor States Efficiently