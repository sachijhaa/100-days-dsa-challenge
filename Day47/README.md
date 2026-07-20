# Day 47 - Sort List

## Problem
LeetCode 148 - Sort List

## Approach
Used the Merge Sort algorithm for linked lists. Found the middle of the list using the Fast and Slow Pointer technique, recursively divided the list into two halves, sorted each half, and then merged the sorted halves using a helper merge function. This approach efficiently sorts the linked list without converting it into an array.

## Time Complexity
O(n log n)

## Space Complexity
O(log n) *(due to the recursion stack)*

## Learned
- Merge Sort on Linked Lists
- Fast and Slow Pointer technique
- Recursive divide-and-conquer
- Merging two sorted linked lists
- Efficient sorting without extra arrays