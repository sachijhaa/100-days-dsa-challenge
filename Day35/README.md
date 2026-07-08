# Day 35 - Remove Duplicates from Sorted Array

## Problem
LeetCode 26 - Remove Duplicates from Sorted Array

## Approach
Used the Two Pointers technique to remove duplicates in-place. Maintained one pointer (`i`) for the last unique element and another pointer (`j`) to traverse the array. Whenever a new unique element was found, incremented `i` and updated `nums[i]` with the new value. The first `k` elements of the array contained all unique values.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Two Pointers technique
- In-place array modification
- Efficient duplicate removal
- Working with sorted arrays
- Optimizing space usage 