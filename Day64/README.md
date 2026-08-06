# Day 64 - Reverse Words in a String

## Problem
LeetCode 151 - Reverse Words in a String

## Approach
Reversed the entire string first, then traversed it to extract each word while skipping extra spaces. Copied every word to the front of the string, inserting a single space between consecutive words. Finally, reversed each copied word individually to restore its correct character order and resized the string to remove any remaining extra characters.

## Time Complexity
O(n) *(where **n** is the length of the string)*

## Space Complexity
O(1) *(excluding the output string)*

## Learned
- In-place String Manipulation
- Two Pointer Technique
- String Reversal
- Handling Multiple Spaces
- Efficient Word Processing