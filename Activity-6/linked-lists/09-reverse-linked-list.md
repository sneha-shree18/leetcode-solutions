## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Used an iterative three-pointer technique (`prev`, `curr`, and `nextTemp`). Traversed through the list, temporarily saving the next node before reversing `curr->next` to point backward to `prev`.

### Complexity
- **Time:** O(n)
- **Space:** O(1)

### Notes
Safely handles empty lists (`head == NULL`) and single-node lists without null-pointer dereferencing.