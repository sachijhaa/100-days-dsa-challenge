# Day 28 - Linked List Cycle

## Problem
LeetCode 141 - Linked List Cycle

## Approach
Used Floyd's Cycle Detection Algorithm (Tortoise and Hare). Maintained two pointers: a slow pointer that moves one step at a time and a fast pointer that moves two steps at a time. If the linked list contains a cycle, the two pointers will eventually meet. If the fast pointer reaches the end of the list, no cycle exists.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Floyd's Cycle Detection Algorithm
- Fast and Slow Pointer technique
- Detecting cycles in linked lists efficiently
- Solving linked list problems with constant extra space
- Pointer traversal and loop detection