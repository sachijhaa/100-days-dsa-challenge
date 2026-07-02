# Day 29 - Reverse Nodes in k-Group

## Problem
LeetCode 25 - Reverse Nodes in k-Group

## Approach
Traversed the linked list in groups of `k` nodes. For each group, identified the k-th node, detached the group, reversed it using an iterative linked list reversal, and reconnected it to the remaining list. If the remaining nodes were fewer than `k`, they were left unchanged.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Reversing linked lists in groups
- Fast traversal using helper functions
- Pointer manipulation and reconnection
- In-place linked list modification
- Handling edge cases for incomplete groups