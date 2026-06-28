# Day 25 - Add Two Numbers

## Problem
LeetCode 2 - Add Two Numbers

## Approach
Used a dummy node to simplify the construction of the result linked list. Traversed both linked lists simultaneously while maintaining a carry value. At each step, added the corresponding digits along with the carry, created a new node with the resulting digit, and updated the carry. If a carry remained after processing all nodes, appended it as the last node.

## Time Complexity
O(max(n, m))

## Space Complexity
O(max(n, m))

## Learned
- Linked List traversal
- Dummy node technique
- Carry handling during addition
- Building a new linked list
- Managing lists of different lengths