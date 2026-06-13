# Day 10 - Find the Duplicate Number

## Problem
LeetCode 287 - Find the Duplicate Number

## Approach
Used a frequency array to count the occurrences of each number. While traversing the array, if the frequency of a number became greater than 1, that number was identified as the duplicate and returned immediately.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Frequency counting technique
- Detecting duplicates efficiently
- Array traversal and indexing
- Trade-off between time and space complexity