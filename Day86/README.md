# Day 86 - Letter Combinations of a Phone Number

## Problem
LeetCode 17 - Letter Combinations of a Phone Number

## Approach
Used **Backtracking** to generate all possible letter combinations for the given phone digits. Created a mapping of digits (`2–9`) to their corresponding letters. At each recursion step, picked one letter from the current digit, added it to the temporary string, and recursively processed the next digit. After returning from recursion, removed the last character to explore other possible combinations.

## Time Complexity
O(4ⁿ × n) *(where **n** is the number of digits, and each digit can have up to 4 letters)*

## Space Complexity
O(n) *(for the recursion stack and temporary string, excluding the output list)*

## Learned
- Backtracking
- Recursion
- Phone Keypad Mapping
- String Building
- Exploring All Possible Combinations
- DFS on Decision Tree