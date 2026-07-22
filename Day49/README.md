# Day 49 - Isomorphic Strings

## Problem
LeetCode 205 - Isomorphic Strings

## Approach
Used two hash maps to maintain a bidirectional mapping between characters of both strings.  
The first map stores the mapping from characters of string `s` to string `t`, while the second map stores the reverse mapping from `t` to `s` to ensure that no two characters map to the same character.

While traversing both strings:
- If a character already exists in the map, check whether it maps to the current character.
- If the mapping is inconsistent, return `false`.
- Otherwise, create the new mapping in both directions.

If all characters follow the same pattern, the strings are isomorphic.

## Time Complexity
O(n)

## Space Complexity
O(n) *(due to storing character mappings in hash maps)*

## Learned
- HashMap / Unordered Map usage
- Character frequency and mapping techniques
- Bidirectional mapping concept
- Pattern matching between strings
- Efficient string comparison approach