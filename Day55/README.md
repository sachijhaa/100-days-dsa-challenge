# Day 55 - Longest Common Prefix

## Problem
LeetCode 14 - Longest Common Prefix

## Approach
Used the first string as a reference and compared each of its characters with the corresponding characters in all the remaining strings. If a mismatch was found or the current index exceeded the length of any string, returned the substring of the first string up to that index. If no mismatch occurred, the entire first string was the longest common prefix.

## Time Complexity
O(n × m) *(where **n** is the number of strings and **m** is the length of the shortest string)*

## Space Complexity
O(1)

## Learned
- String traversal
- Character-by-character comparison
- Prefix matching
- Handling varying string lengths
- Early termination for optimization