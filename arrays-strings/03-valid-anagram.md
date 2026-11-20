## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
First checked if both strings have equal lengths. Used a fixed-size integer frequency array of size 26 to increment counts for characters in `s` and decrement for `t`, verifying all counts return to zero.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Returning early when string lengths differ avoids unnecessary iterations. Using a fixed 26-element array keeps auxiliary space constant for lowercase English letters.