# Day 23 - Merge Two Sorted Lists

## Problem
LeetCode 21 - Merge Two Sorted Lists

## Approach
Used a dummy node to simplify the merging process. Compared the current nodes of both linked lists and attached the smaller node to the merged list. Continued this process until one list was exhausted, then linked the remaining nodes of the other list to the merged list.

## Time Complexity
O(n + m)

## Space Complexity
O(1)

## Learned
- Merging two sorted linked lists
- Dummy node technique
- Pointer manipulation
- Efficient linked list traversal
- Building a merged list in-place