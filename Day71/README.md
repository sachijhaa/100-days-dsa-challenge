# Day 71 - Longest Palindromic Substring

## Problem
LeetCode 5 - Longest Palindromic Substring

## Approach
Used the **Expand Around Center** technique. Every palindrome has a center, which can be either a single character for odd-length palindromes or a pair of characters for even-length palindromes. For each index, expanded in both directions while the characters were equal and updated the longest palindrome found. Finally, returned the substring using its starting index and maximum length.

## Time Complexity
O(n²) *(where **n** is the length of the string)*

## Space Complexity
O(1)

## Learned
- Expand Around Center
- Palindrome Checking
- String Manipulation
- Handling Odd and Even Length Palindromes
- Two Pointer Technique
- Substring Extraction