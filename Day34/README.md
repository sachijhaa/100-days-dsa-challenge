# Day 34 - 3Sum

## Problem
LeetCode 15 - 3Sum

## Approach
Sorted the array and fixed one element at a time. Used the Two Pointers technique to find the remaining two elements whose sum equals the negative of the fixed element. Skipped duplicate elements to ensure only unique triplets were included in the final answer.

## Time Complexity
O(n²)

## Space Complexity
O(1) *(excluding the output array)*

## Learned
- Two Pointers technique
- Sorting for optimization
- Handling duplicate elements
- Finding unique triplets efficiently
- Optimizing brute-force solutions