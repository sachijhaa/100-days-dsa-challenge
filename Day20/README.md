# Day 20 - Longest Substring Without Repeating Characters

## Problem
LeetCode 3 - Longest Substring Without Repeating Characters

## Approach
Used the Sliding Window technique along with a hash array to track the last occurrence of each character. Expanded the window by moving the right pointer and adjusted the left pointer whenever a repeating character was encountered. Continuously updated the maximum length of a valid substring without duplicate characters.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Sliding Window technique
- Two-pointer approach
- Tracking character frequencies and positions
- Handling duplicate characters efficiently
- Optimizing brute-force substring checks to linear time