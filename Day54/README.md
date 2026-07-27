# Day 54 - Valid Parentheses

## Problem
LeetCode 20 - Valid Parentheses

## Approach
Used a stack to validate the sequence of parentheses. Traversed the string character by character, pushing opening brackets onto the stack. For every closing bracket, checked whether the stack was non-empty and whether the top element matched the corresponding opening bracket. If any mismatch occurred or the stack became empty prematurely, returned `false`. After processing the entire string, the stack had to be empty for the parentheses to be valid.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Stack data structure
- Parentheses matching
- String traversal
- LIFO (Last In, First Out) principle
- Handling edge cases in stack problems