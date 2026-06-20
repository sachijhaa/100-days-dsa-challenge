# Day 17 - Two Sum

## Problem
LeetCode 1 - Two Sum

## Approach
Used a hash map (unordered_map) to store each number along with its index while traversing the array. For every element, calculated the complement required to reach the target sum. If the complement was already present in the hash map, returned the indices of the complement and the current element. Otherwise, stored the current element and its index in the hash map.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Learned
- Hash Map (unordered_map) usage
- Complement-based searching
- Optimizing brute-force O(n²) solutions
- Efficient key-value lookups
- Solving pair-sum problems using hashing