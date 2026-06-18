# Day 15 - Unique Paths

## Problem
LeetCode 62 - Unique Paths

## Approach
This problem is solved using a combinatorics-based approach instead of dynamic programming.

To reach from the top-left to the bottom-right of an `m x n` grid, we must take:
- `(m - 1)` down moves  
- `(n - 1)` right moves  

So total moves = `(m + n - 2)`

We just need to choose positions for either down or right moves.

Formula used:
**Unique Paths = C(m + n - 2, min(m - 1, n - 1))**

Instead of factorials, we compute the result iteratively to avoid overflow and improve efficiency.

## Time Complexity
O(min(m, n))

## Space Complexity
O(1)

## Learned
- Combinatorics in grid-based problems  
- Optimizing DP problems using mathematical thinking  
- Efficient computation of nCr without factorials  
- Avoiding overflow using iterative multiplication and division  
- When to replace DP with a math-based solution  