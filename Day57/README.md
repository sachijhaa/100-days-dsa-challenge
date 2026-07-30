# Day 57 - Valid Anagram

## Problem
LeetCode 242 - Valid Anagram

## Approach
Checked whether both strings had the same length. Used a frequency array of size 26 to count the occurrences of each lowercase character in the first string while simultaneously decrementing the count for the corresponding character in the second string. Finally, verified that all frequencies were zero, confirming that both strings contained the same characters with the same frequencies.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Frequency array
- String traversal
- Character counting
- Array-based hashing
- Efficient anagram checking