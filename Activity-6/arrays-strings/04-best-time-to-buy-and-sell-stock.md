## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Used a single-pass greedy approach tracking the lowest price seen so far (`minPrice`). At each day, calculated the potential profit if sold that day and updated `maxProf` whenever a higher profit was found.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Correctly handles edge cases where prices strictly decrease every day by returning `0` profit instead of a negative value.