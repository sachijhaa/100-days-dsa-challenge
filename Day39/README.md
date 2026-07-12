# Day 39 - Coin Change

## Problem
LeetCode 322 - Coin Change

## Approach
Used Dynamic Programming (Bottom-Up) to compute the minimum number of coins required for every amount from `0` to the target amount. Initialized a DP array with an impossible value (`amount + 1`) and updated each entry by considering every available coin. If the target amount remained unreachable, returned `-1`; otherwise, returned the minimum number of coins.

## Time Complexity
O(amount × number of coins)

## Space Complexity
O(amount)

## Learned
- Dynamic Programming (Bottom-Up)
- State transition formulation
- Building solutions incrementally
- Optimizing overlapping subproblems
- Handling unreachable states