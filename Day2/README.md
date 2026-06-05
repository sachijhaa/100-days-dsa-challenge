# Day 02 - Pascal's Triangle

## Problem
Generate Pascal's Triangle up to `numRows`.

Each number is the sum of the two numbers directly above it in the previous row.

---

## Approach

We generate each row one by one using the concept of combinations:

- First and last element of every row is always 1
- Middle elements are calculated using:
  C(row, col) = C(row, col-1) * (row - col) / col

We build each row and store it in the final answer.

---

## Algorithm

1. Loop from 1 to numRows
2. Generate each row using formula-based approach
3. Store row in result vector

---

## Code Logic Used

- Optimized combinatorial formula instead of DP
- Avoids recomputation
- Uses long long to prevent overflow

---

## Time Complexity
O(n²)

## Space Complexity
O(n²)

---

## Learnings

- Pascal’s Triangle pattern understanding
- Combination formula optimization
- Space-efficient row generation
- Importance of long long for large values