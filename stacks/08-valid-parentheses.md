
## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
I used a stack to keep track of opening brackets. When a closing bracket appears, I compare it with the most recent opening bracket. If they do not match, the string is invalid. At the end, the stack must be empty.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
The solution checks matching bracket types and their correct order.

