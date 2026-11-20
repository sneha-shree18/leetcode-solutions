## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer approach where `lastNonZero` tracks the position for the next non-zero element. Whenever a non-zero element is encountered, swapped it with the element at `lastNonZero` and incremented the pointer.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Preserves the relative order of all non-zero elements in-place without creating a copy of the array.