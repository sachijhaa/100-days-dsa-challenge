# Day 70 - Combination Sum II

## Problem
LeetCode 40 - Combination Sum II

## Approach
Used **Backtracking** to generate all possible combinations whose sum equals the target. First sorted the array so that duplicate elements come together. During recursion, each element is used at most once by calling `solve(i + 1, ...)`. Skipped duplicate elements at the same recursion level to avoid duplicate combinations. Also used pruning by stopping the loop when the current candidate becomes greater than the remaining target.

## Time Complexity
O(2^n × n) *(where **n** is the number of candidates)*

## Space Complexity
O(n) *(for the recursion stack and temporary combination)*

## Learned
- Backtracking
- Recursion
- Sorting
- Handling Duplicate Elements
- Pruning
- Generating Unique Combinations