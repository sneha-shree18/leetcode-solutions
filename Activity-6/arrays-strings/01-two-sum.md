## Problem: Two Sum (Easy)[cite: 12]
**Link:** https://leetcode.com/problems/two-sum/

### Approach[cite: 12]
Used a nested loop strategy to compare every pair of numbers in the array. When the sum of `nums[i]` and `nums[j]` matches the target, the indices are saved and returned

### Complexity[cite: 12]
- **Time Complexity:** $O(n^2)$ due to the brute force iteration
- **Space Complexity:** $O(1)$ auxiliary space allocation

### Notes[cite: 12]
Handled edge cases where duplicate numbers in the array sum to the target[cite: 12]. A hash map approach can optimize time complexity to $O(n)$ in future practice