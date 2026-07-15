# Day 42 - Single Element in a Sorted Array

## Problem
LeetCode 540 - Single Element in a Sorted Array

## Approach
Used Binary Search to find the single non-duplicate element in the sorted array. Ensured the middle index was always even so that pairs could be compared correctly. If the pair at `mid` and `mid + 1` was valid, the unique element lay on the right; otherwise, it was on the left. Continued narrowing the search space until only one element remained.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Learned
- Binary Search
- Index manipulation
- Pair-based searching
- Optimizing search in sorted arrays
- Logarithmic-time algorithms