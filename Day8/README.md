# Day 08 - Merge Intervals

## Problem
LeetCode 56 - Merge Intervals

## Approach
First sorted the intervals based on their starting points. Then traversed the sorted intervals and merged overlapping intervals by updating the end time of the last interval in the result. If an interval did not overlap, it was added as a new interval.

## Time Complexity
O(n log n)

## Space Complexity
O(n)

## Learned
- Interval merging techniques
- Importance of sorting before processing intervals
- Handling overlapping ranges efficiently
- Using dynamic arrays to build merged results