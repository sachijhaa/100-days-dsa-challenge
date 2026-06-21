# Day 18 - 4Sum

## Problem
LeetCode 18 - 4Sum

## Approach
First sorted the array to efficiently handle duplicates and apply the two-pointer technique. Fixed the first two elements using nested loops, then used two pointers to find the remaining two elements whose sum, along with the fixed elements, matched the target. Skipped duplicate values to ensure unique quadruplets in the result.

## Time Complexity
O(n³)

## Space Complexity
O(1) (excluding the output array)

## Learned
- Two-pointer technique
- Sorting for efficient searching
- Handling duplicates in k-sum problems
- Using long long to prevent integer overflow
- Extending the 2Sum and 3Sum approach to 4Sum