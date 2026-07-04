# Day 31 - Linked List Cycle II

## Problem
LeetCode 142 - Linked List Cycle II

## Approach
Used Floyd's Cycle Detection Algorithm (Tortoise and Hare) to detect whether a cycle exists. Once the slow and fast pointers met inside the cycle, initialized another pointer at the head of the linked list. Moved both pointers one step at a time until they met again. The meeting point represented the starting node of the cycle.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Floyd's Cycle Detection Algorithm
- Finding the starting node of a cycle
- Fast and Slow Pointer technique
- Mathematical intuition behind cycle detection
- Solving linked list problems with constant extra space