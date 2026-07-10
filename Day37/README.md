# Day 37 - Max Consecutive Ones

## Problem
LeetCode 485 - Max Consecutive Ones

## Approach
Traversed the array while maintaining a counter for consecutive `1`s. Incremented the counter whenever a `1` was encountered. When a `0` appeared, updated the maximum count if needed and reset the counter. After the traversal, returned the maximum of the current count and the recorded maximum.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Array traversal
- Counting consecutive elements
- Maintaining running maximum
- Optimizing with constant extra space
- Handling edge cases during iteration