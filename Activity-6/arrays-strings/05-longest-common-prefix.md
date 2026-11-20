## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used horizontal scanning by treating the first string as the initial prefix. Compared it character-by-character against every subsequent string and truncated the prefix at the first mismatch.

### Complexity
- **Time:** O(S), where S is the sum of all characters across all strings.
- **Space:** O(1)

### Notes
Handled edge cases where there is no common prefix at all (returning `""`) or when the input array is empty.