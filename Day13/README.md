# Day 13 - Majority Element

## Problem 
LeetCode 169 - Majority Element

## Approach
Used the Boyer-Moore Voting Algorithm to find a candidate for the majority element. The algorithm maintains a count and updates the candidate whenever the count becomes zero. After finding the candidate, performed a verification pass to ensure that it appears more than n/2 times in the array.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Boyer-Moore Voting Algorithm
- Majority element identification
- Candidate selection and verification
- Optimizing space complexity to constant space