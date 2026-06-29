# Day 26 - Delete Node in a Linked List

## Problem
LeetCode 237 - Delete Node in a Linked List

## Approach
Since access to the head of the linked list is not provided, copied the value of the next node into the given node and updated its `next` pointer to skip the next node. This effectively deletes the given node without traversing the list.

## Time Complexity
O(1)

## Space Complexity
O(1)

## Learned
- In-place node deletion
- Pointer manipulation in linked lists
- Handling deletion without access to the head node
- Efficient constant-time linked list operations
- Understanding special linked list constraints