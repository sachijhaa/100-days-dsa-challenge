# Day 95 - Distinct Subsequences

## Problem
LeetCode 115 - Distinct Subsequences

## Approach
Used **Dynamic Programming (DP)** to count the number of distinct subsequences of string `s` that equal string `t`. Created a 2D DP table where `dp[i][j]` represents the number of ways the first `i` characters of `s` can form the first `j` characters of `t`. If the current characters matched, added both possibilities: using the current character and skipping it. Otherwise, skipped the current character of `s`.

## Time Complexity
O(n × m) *(where **n** is the length of `s` and **m** is the length of `t`)*

## Space Complexity
O(n × m)

## Learned
- Dynamic Programming
- 2D DP Table
- Counting Subsequences
- String Matching
- Include/Exclude DP Pattern
- Base Case Initialization