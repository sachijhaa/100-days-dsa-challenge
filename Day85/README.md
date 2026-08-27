# Day 85 - Largest Odd Number in String

## Problem
LeetCode 1903 - Largest Odd Number in String

## Approach
Traversed the string from **right to left** to find the last odd digit. Since any prefix ending at the last odd digit forms the largest possible odd number, returned the substring from the beginning up to that index. If no odd digit was found, returned an empty string.

## Time Complexity
O(n) *(where **n** is the length of the string)*

## Space Complexity
O(1) *(excluding the output substring)*

## Learned
- String Traversal
- Greedy Approach
- Substring Extraction
- Identifying Odd Digits
- Efficient Prefix Selection