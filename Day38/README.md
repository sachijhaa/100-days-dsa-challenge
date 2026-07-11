# Day 38 - Assign Cookies

## Problem
LeetCode 455 - Assign Cookies

## Approach
Used a Greedy approach by first sorting both the children's greed factors and the cookie sizes. Traversed both arrays using two pointers. If the current cookie could satisfy the current child, assigned it and moved to the next child. Otherwise, tried the next larger cookie. This ensured the maximum number of content children.

## Time Complexity
O(n log n + m log m)

## Space Complexity
O(1) *(excluding the space used by the sorting algorithm)*

## Learned
- Greedy algorithm
- Two Pointers technique
- Sorting for optimization
- Maximizing assignments efficiently
- Making optimal local decisions