# Day 79 - Convert Sorted Array to Binary Search Tree

## Problem
LeetCode 108 - Convert Sorted Array to Binary Search Tree

## Approach
Used **Recursion** with the **Divide and Conquer** technique to build a height-balanced Binary Search Tree (BST). Selected the middle element of the sorted array as the root, recursively built the left subtree from the left half of the array, and the right subtree from the right half. This ensured the BST remained balanced.

## Time Complexity
O(n) *(where **n** is the number of elements in the array)*

## Space Complexity
O(log n) *(due to the recursion stack for a balanced BST)*

## Learned
- Binary Search Tree (BST)
- Divide and Conquer
- Recursion
- Height-Balanced BST Construction
- Tree Building from Sorted Array