## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Implemented an array-based stack to push opening brackets (`(`, `{`, `[`). When a closing bracket appears, popped the top element from the stack and verified that it matched the corresponding opening bracket.

### Complexity
- **Time:** O(n)
- **Space:** O(n)

### Notes
Checked for an empty stack (`top == -1`) before popping to catch edge cases where a string starts with a closing bracket, and verified the stack is empty at the end.