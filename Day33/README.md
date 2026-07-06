# Day 33 - Copy List with Random Pointer

## Problem
LeetCode 138 - Copy List with Random Pointer

## Approach
Used the optimal three-step approach without extra space. First, created a copy of each node and inserted it next to the original node. Then assigned the `random` pointers of the copied nodes using the original nodes' `random` links. Finally, separated the copied list from the original list while restoring the original linked list.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Deep copying a linked list
- Handling random pointers efficiently
- In-place linked list manipulation
- Pointer interleaving technique
- Restoring the original linked list after cloning