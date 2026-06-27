# Day 24 - Remove Nth Node From End of List

## Problem
LeetCode 19 - Remove Nth Node From End of List

## Approach
Used the Two-Pointer (Fast and Slow Pointer) technique. Moved the fast pointer `n` steps ahead, then advanced both pointers together until the fast pointer reached the last node. At that point, the slow pointer was positioned just before the node to be removed. Updated the links to remove the target node in a single traversal.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Fast and Slow Pointer technique
- Single-pass linked list traversal
- Removing nodes efficiently without calculating list length
- Pointer manipulation in linked lists
- Handling edge cases such as removing the head node