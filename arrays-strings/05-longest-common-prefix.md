
## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
I used the horizontal scanning technique. I take the first string as the initial prefix and compare it with every other string. Whenever characters do not match, I shorten the prefix.

### Complexity
- Time: O(S), where S is the total number of characters across all strings.
- Space: O(1) auxiliary space, excluding the returned prefix.

### Notes
The solution handles strings with no common prefix by returning an empty string.

