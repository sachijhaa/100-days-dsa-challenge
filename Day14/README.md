# Day 14 - Majority Element II

## Problem
LeetCode 229 - Majority Element II

## Approach
Used the extended Boyer-Moore Voting Algorithm to identify up to two potential majority elements that may appear more than ⌊n/3⌋ times in the array. Maintained two candidates and their counts during the first pass. In the second pass, verified the actual frequencies of the candidates and added the valid majority elements to the result.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Extended Boyer-Moore Voting Algorithm
- Finding elements appearing more than n/3 times
- Candidate selection and frequency verification
- Optimizing solutions using constant extra space