# Day 67 - Count and Say

## Problem
LeetCode 38 - Count and Say

## Approach
Used an iterative approach to generate each term of the Count and Say sequence. Started with `"1"` and generated the next term by reading consecutive groups of identical digits. For every group, counted the number of occurrences and appended the count followed by the digit to the next string. Repeated this process until the `n`th term was generated.

## Time Complexity
O(n × m) *(where **n** is the number of terms and **m** is the average length of the generated sequence)*

## Space Complexity
O(m) *(for storing the current and next sequence)*

## Learned
- String Manipulation
- Iterative Approach
- Run-Length Encoding Concept
- Counting Consecutive Characters
- Building Strings Efficiently