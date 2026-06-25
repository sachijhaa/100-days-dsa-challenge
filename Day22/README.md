# Day 22 - Middle of the Linked List

## Problem
LeetCode 876 - Middle of the Linked List

## Approach
Used the Fast and Slow Pointer technique. Both pointers start at the head of the linked list. The slow pointer moves one step at a time, while the fast pointer moves two steps at a time. When the fast pointer reaches the end of the list, the slow pointer will be at the middle node.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Fast and Slow Pointer technique
- Efficient linked list traversal
- Finding the middle element in a single pass
- Two-pointer approach for linked list problems
- Optimizing space usage with constant extra space