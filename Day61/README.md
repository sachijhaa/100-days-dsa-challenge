# Day 61 - Next Greater Element I

## Problem
LeetCode 496 - Next Greater Element I

## Approach
Used a Monotonic Stack to preprocess the next greater element for every number in `nums2`. Traversed `nums2` from right to left, removing all elements from the stack that were smaller than or equal to the current element. The top of the stack represented the next greater element, if it existed. Stored these mappings in a hash map. Finally, traversed `nums1` and retrieved the corresponding next greater elements from the map.

## Time Complexity
O(n + m) *(where **n** is the size of `nums2` and **m** is the size of `nums1`)*

## Space Complexity
O(n)

## Learned
- Monotonic Stack
- Next Greater Element pattern
- Hash Map
- Reverse traversal
- Efficient preprocessing for queries