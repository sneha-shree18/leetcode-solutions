## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Maintained `low` and `high` boundary pointers on the sorted array. Repeatedly checked the middle element (`mid = low + (high - low) / 2`) and narrowed the search space by half until the target was found or pointers crossed.

### Complexity
- **Time:** O(log n)
- **Space:** O(1)

### Notes
Calculating `mid` using `low + (high - low) / 2` prevents potential integer overflow compared to `(low + high) / 2`.