# Day 90 - Fruit Into Baskets

## Problem
LeetCode 904 - Fruit Into Baskets

## Approach
Used the **Sliding Window** technique with a hash map to keep track of the frequency of fruit types inside the current window. Expanded the window by moving the `right` pointer and adding fruits to the map. Whenever the window contained more than **2 distinct fruit types**, shrank it from the left by decreasing frequencies and removing fruit types whose count became zero. Updated the maximum window size throughout the traversal.

## Time Complexity
O(n) *(where **n** is the number of fruits in the array)*

## Space Complexity
O(2) = O(1) *(the hash map stores at most two fruit types at any time)*

## Learned
- Sliding Window
- Two Pointer Technique
- Hash Map
- Frequency Counting
- Longest Subarray with At Most K Distinct Elements
- Window Expansion and Shrinking