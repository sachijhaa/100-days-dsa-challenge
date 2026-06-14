# Day 11 - Search a 2D Matrix

## Problem
LeetCode 74 - Search a 2D Matrix

## Approach
Treated the 2D matrix as a single sorted array and applied Binary Search. Converted the middle index into row and column indices using division and modulus operations to access the corresponding matrix element efficiently.

## Time Complexity
O(log(m × n))

## Space Complexity
O(1)

## Learned
- Binary Search on a 2D Matrix
- Converting 1D indices to 2D coordinates
- Efficient searching in sorted data structures
- Reducing search complexity from O(m × n) to O(log(m × n))