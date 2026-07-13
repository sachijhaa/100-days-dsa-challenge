# Day 40 - Subsets II

## Problem
LeetCode 90 - Subsets II

## Approach
Used Backtracking to generate all possible subsets. First sorted the array so that duplicate elements became adjacent. During recursion, skipped duplicate elements at the same recursion level to avoid generating duplicate subsets. Added the current subset to the answer before exploring further choices.

## Time Complexity
O(2ⁿ)

## Space Complexity
O(n) *(excluding the output list and recursion stack)*

## Learned
- Backtracking
- Recursion
- Handling duplicate elements
- Sorting as a preprocessing step
- Generating unique subsets