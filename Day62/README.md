# Day 62 - Merge k Sorted Lists

## Problem
LeetCode 23 - Merge k Sorted Lists

## Approach
Used a **Min Heap (Priority Queue)** to efficiently merge all the sorted linked lists. Inserted the head node of each non-empty linked list into the priority queue. Repeatedly extracted the smallest node, added it to the merged list, and pushed its next node (if present) into the heap. This ensured that the smallest available element was always selected while maintaining sorted order.

## Time Complexity
O(N log K) *(where **N** is the total number of nodes across all linked lists and **K** is the number of linked lists)*

## Space Complexity
O(K)

## Learned
- Priority Queue (Min Heap)
- Custom Comparator
- Merging Multiple Sorted Linked Lists
- Heap-based Optimization
- Efficient Linked List Manipulation