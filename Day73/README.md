# Day 73 - Minimum Insertion Steps to Make a String Palindrome

## Problem
LeetCode 1312 - Minimum Insertion Steps to Make a String Palindrome

## Approach
Used **Dynamic Programming (DP)** with the **Longest Palindromic Subsequence (LPS)** concept. A string can be made into a palindrome by inserting characters for the parts that are not already part of the longest palindromic subsequence. First, reversed the string and calculated the **Longest Common Subsequence (LCS)** between the original string and its reverse. This LCS represents the LPS of the original string. Finally, the minimum number of insertions required is `n - LPS`.

## Time Complexity
O(n²) *(where **n** is the length of the string)*

## Space Complexity
O(n²) *(for the DP table)*

## Learned
- Dynamic Programming
- Longest Common Subsequence (LCS)
- Longest Palindromic Subsequence (LPS)
- String Reversal
- 2D DP
- Converting LPS into Minimum Insertions