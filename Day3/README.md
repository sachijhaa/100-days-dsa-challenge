# Day 03 - Next Permutation

## Problem
LeetCode 31 - Next Permutation

## Approach
Found the first decreasing element from the right, swapped it with the next greater element on its right, and then reversed the remaining suffix to obtain the next lexicographically greater permutation.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Lexicographical ordering of permutations
- Array traversal from right to left
- Finding pivot and successor elements
- Using reversal to generate the next permutation efficiently