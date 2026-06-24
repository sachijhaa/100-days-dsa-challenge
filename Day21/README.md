# Day 21 - Reverse Linked List

## Problem
LeetCode 206 - Reverse Linked List

## Approach
Used an iterative approach with three pointers: `prev`, `temp`, and `front`. Traversed the linked list while reversing the direction of each node's `next` pointer. At the end of the traversal, `prev` pointed to the new head of the reversed linked list.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Linked List traversal
- Pointer manipulation
- In-place reversal of a linked list
- Iterative approach for linked list problems
- Managing multiple pointers safely