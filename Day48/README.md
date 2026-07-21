# Day 48 - Permutations

## Problem
LeetCode 46 - Permutations

## Approach
Used Backtracking to generate all possible permutations of the given array. Maintained a `used` array to keep track of the elements already included in the current permutation. At each recursive call, selected an unused element, added it to the current permutation, and continued exploring. After returning from recursion, removed the element and marked it as unused to explore other possibilities.

## Time Complexity
O(n × n!)

## Space Complexity
O(n) *(excluding the output list, due to the recursion stack and `used` array)*

## Learned
- Backtracking
- Recursion
- Generating permutations
- State tracking using a visited array
- Backtracking by undoing choices