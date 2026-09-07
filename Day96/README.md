# Day 96 - Distinct Subsequences II

## Problem
LeetCode 940 - Distinct Subsequences II

## Approach
Used **Dynamic Programming** with a **Last Occurrence Array** to count all distinct subsequences efficiently. Maintained a variable `dp` representing the total number of subsequences (including the empty subsequence). For each character, doubled the current subsequences by either including or excluding it. To avoid counting duplicate subsequences, subtracted the contribution of the previous occurrence of the same character using the `last` array. Finally, subtracted one to exclude the empty subsequence from the answer.

## Time Complexity
O(n) *(where **n** is the length of the string)*

## Space Complexity
O(26) = O(1)

## Learned
- Dynamic Programming
- Last Occurrence Technique
- Counting Distinct Subsequences
- Avoiding Duplicate Subsequences
- Modular Arithmetic
- Space Optimization in DP