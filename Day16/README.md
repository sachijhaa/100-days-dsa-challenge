# Day 16 - Reverse Pairs

## Problem
LeetCode 493 - Reverse Pairs

## Approach
Used a modified Merge Sort algorithm to count reverse pairs efficiently. Before merging two sorted halves, counted the pairs satisfying the condition `arr[i] > 2 * arr[j]` using a two-pointer technique. After counting, merged the halves to maintain sorted order for further recursive calls.

## Time Complexity
O(n log n)

## Space Complexity
O(n)

## Learned
- Modified Merge Sort
- Counting pairs during merge process
- Two-pointer technique on sorted arrays
- Handling large numbers using long long
- Optimizing brute force O(n²) solutions to O(n log n)