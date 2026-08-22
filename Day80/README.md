# Day 80 - Search in Rotated Sorted Array

## Problem
LeetCode 33 - Search in Rotated Sorted Array

## Approach
Used **Binary Search** on the rotated sorted array. At each step, identified which half of the array was sorted. If the target lay within the sorted half, continued searching there; otherwise, searched in the other half. Repeated this process until the target was found or the search space became empty.

## Time Complexity
O(log n) *(where **n** is the number of elements in the array)*

## Space Complexity
O(1)

## Learned
- Binary Search
- Rotated Sorted Array
- Identifying Sorted Half
- Efficient Search in Modified Arrays
- Pointer Manipulation