# Day 36 - Trapping Rain Water

## Problem
LeetCode 42 - Trapping Rain Water

## Approach
Used the Two Pointers technique to calculate the trapped rainwater efficiently. Maintained two pointers at the beginning and end of the array along with `leftMax` and `rightMax` to track the maximum heights seen so far from both directions. At each step, moved the pointer with the smaller height and calculated the water trapped based on the corresponding maximum boundary.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Two Pointers technique
- Optimizing space complexity
- Maintaining left and right maximum boundaries
- Efficient water trapping calculation
- Solving array problems in a single traversal