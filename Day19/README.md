# Day 19 - Longest Consecutive Sequence

## Problem
LeetCode 128 - Longest Consecutive Sequence

## Approach
Used an unordered set to achieve constant-time lookups. For each number, started a sequence only if it was the beginning of a consecutive sequence (i.e., the previous number was not present in the set). Then extended the sequence by checking for consecutive numbers and tracked the maximum sequence length.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Hash Set (unordered_set) usage
- Efficient sequence detection
- Identifying sequence starting points
- Optimizing from O(n log n) sorting-based solutions to O(n)
- Constant-time lookups using hashing