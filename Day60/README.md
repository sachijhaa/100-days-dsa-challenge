# Day 60 - Daily Temperatures

## Problem
LeetCode 739 - Daily Temperatures

## Approach
Used a Monotonic Stack to efficiently find the next warmer day for each temperature. Traversed the array from right to left while maintaining a stack of indices with strictly higher temperatures. For each day, removed all indices with temperatures less than or equal to the current temperature. If the stack was not empty, the top index represented the next warmer day, and the difference in indices gave the required answer. Finally, pushed the current index onto the stack.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Monotonic Stack
- Next Greater Element pattern
- Reverse array traversal
- Stack-based optimization
- Efficient range queries