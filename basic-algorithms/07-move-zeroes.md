
## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
I used a two-pass approach. First, I move all non-zero elements to the beginning of the array while maintaining their original order. Then I fill the remaining positions with zeroes.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The solution modifies the original array in place and preserves the relative order of non-zero elements.
