# Day 63 - Compare Version Numbers

## Problem
LeetCode 165 - Compare Version Numbers

## Approach
Used two pointers to traverse both version strings simultaneously. Extracted each revision number by parsing characters until a `.` was encountered. Compared the corresponding revision numbers one by one. If they differed, returned the appropriate result immediately. If all revisions were equal, including any trailing zeros, returned `0`.

## Time Complexity
O(n + m) *(where **n** and **m** are the lengths of the two version strings)*

## Space Complexity
O(1)

## Learned
- Two Pointer Technique
- String Parsing
- Handling Leading and Trailing Zeros
- Comparing Version Segments
- Constant Space Solution