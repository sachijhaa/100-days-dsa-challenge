# Day 65 - Roman to Integer

## Problem
LeetCode 13 - Roman to Integer

## Approach
Used a hash map to store the integer value of each Roman numeral. Traversed the string from left to right and compared the current numeral with the next one. If the current numeral was smaller than the next, it represented a subtractive pair, so its value was subtracted from the answer. Otherwise, its value was added. This correctly handled all valid Roman numeral combinations.

## Time Complexity
O(n) *(where **n** is the length of the Roman numeral string)*

## Space Complexity
O(1) *(The hash map contains only the 7 Roman numeral symbols.)*

## Learned
- Hash Map
- String Traversal
- Greedy Observation
- Handling Subtractive Notation
- Efficient Character Mapping