# Day 98 - Trapping Rain Water

## Problem
LeetCode 42 - Trapping Rain Water

## Approach
Used the **Two Pointer Approach** to calculate the amount of water trapped between the bars. Maintained two pointers, `left` and `right`, along with `leftMax` and `rightMax` to store the maximum heights encountered from both sides. At each step, processed the side with the smaller height because the smaller boundary determines the amount of water that can be trapped. If the current height was smaller than its corresponding maximum height, the difference was added to the total trapped water.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Learned
- Two Pointer Technique
- Trapping Rain Water
- Maintaining Left and Right Maximums
- Efficient Array Traversal
- Optimizing from O(n) Space to O(1) Space