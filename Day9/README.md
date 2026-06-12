# Day 09 - Merge Sorted Array

## Problem
LeetCode 88 - Merge Sorted Array

## Approach
Compared elements from the end of the valid portion of the first array and the beginning of the second array. Swapped elements when necessary to maintain order, then sorted both arrays individually and copied the elements of the second array into the extra space of the first array.

## Time Complexity
O(m log m + n log n)

## Space Complexity
O(1)

## Learned
- Two-pointer technique
- Array manipulation and merging
- In-place operations
- Sorting after element rearrangement