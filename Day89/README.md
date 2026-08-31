# Day 89 - Sum of Beauty of All Substrings

## Problem
LeetCode 1781 - Sum of Beauty of All Substrings

## Approach
Used a **Brute Force + Frequency Array** approach to calculate the beauty of every substring. Fixed a starting index and expanded the substring one character at a time while maintaining the frequency of each character. For every substring, found the maximum and minimum non-zero character frequencies and added their difference to the final answer.

## Time Complexity
O(n² × 26) *(where **n** is the length of the string, and 26 represents lowercase English letters)*

## Space Complexity
O(26) = O(1)

## Learned
- String Traversal
- Frequency Array
- Nested Loops for Substrings
- Tracking Maximum and Minimum Frequencies
- Brute Force Optimization with Constant-Sized Array