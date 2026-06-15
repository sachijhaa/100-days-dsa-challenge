# Day 12 - Pow(x, n)

## Problem
LeetCode 50 - Pow(x, n)

## Approach
Used Binary Exponentiation (Fast Power Algorithm) to efficiently compute x raised to the power n. For negative exponents, converted the problem by taking the reciprocal of x and making the exponent positive. Repeatedly squared the base and multiplied it with the answer whenever the current exponent was odd.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Learned
- Binary Exponentiation (Fast Power)
- Handling negative exponents
- Efficient exponent calculation using divide-and-conquer
- Avoiding overflow by using long long for the exponent