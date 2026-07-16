# Day 43 - Median of Two Sorted Arrays

## Problem
LeetCode 4 - Median of Two Sorted Arrays

## Approach
Used Binary Search on the smaller array to partition both sorted arrays into left and right halves. Adjusted the partition until every element on the left was less than or equal to every element on the right. Once the correct partition was found, calculated the median based on whether the total number of elements was odd or even.

## Time Complexity
O(log(min(m, n)))

## Space Complexity
O(1)

## Learned
- Binary Search on partitions
- Working with two sorted arrays
- Handling edge cases using `INT_MIN` and `INT_MAX`
- Efficient median calculation
- Optimizing search to logarithmic time