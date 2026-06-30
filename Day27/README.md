# Day 27 - Intersection of Two Linked Lists

## Problem
LeetCode 160 - Intersection of Two Linked Lists

## Approach
Used the two-pointer technique to find the intersection node without calculating the lengths of the linked lists. Started one pointer at the head of each list. When a pointer reached the end of its list, redirected it to the head of the other list. If the two lists intersect, the pointers eventually meet at the intersection node; otherwise, both pointers reach `NULL`.

## Time Complexity
O(n + m)

## Space Complexity
O(1)

## Learned
- Two-pointer technique
- Finding the intersection of linked lists
- Eliminating the need to calculate list lengths
- Efficient pointer traversal
- Solving linked list problems with constant extra space