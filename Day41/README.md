# Day 41 - Combination Sum

## Problem
LeetCode 39 - Combination Sum

## Approach
Used Backtracking to explore all possible combinations that sum up to the target. Started from a given index and recursively included the current candidate multiple times, since each number can be chosen an unlimited number of times. When the target became `0`, stored the current combination. If a candidate exceeded the remaining target, skipped it and continued exploring other possibilities.

## Time Complexity
O(2^target) *(approximately, as the number of combinations can grow exponentially)*

## Space Complexity
O(target) *(excluding the output list, due to recursion stack and current combination)*

## Learned
- Backtracking
- Recursion
- Exploring all possible combinations
- Pruning unnecessary recursive calls
- Reusing elements in recursive problems