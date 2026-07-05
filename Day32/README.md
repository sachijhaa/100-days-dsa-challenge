# Day 32 - Rotate List

## Problem
LeetCode 61 - Rotate List

## Approach
Calculated the length of the linked list while finding the tail node. Connected the tail to the head to form a circular linked list. Reduced the number of rotations using `k % length`, then moved to the new tail (`length - k` steps) and broke the circle to obtain the rotated linked list.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Circular linked list concept
- Linked list rotation
- Pointer manipulation
- Optimizing rotations using modulo
- Handling edge cases in linked lists