## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used a two-pointer technique with `left` starting at index `0` and `right` at `sSize - 1`. Swapped characters at both pointers while moving them inward until they met in the middle.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Modifies the character array in-place without allocating extra memory. Works cleanly for single-character strings as well as even and odd lengths.