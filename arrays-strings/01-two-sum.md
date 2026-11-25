## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
I used the brute-force approach with two nested loops. The first loop selects an element, and the second loop checks the remaining elements to find a pair whose sum equals the target.

### Complexity
- Time: O(n²)
- Space: O(1) auxiliary space, excluding the returned array.

### Notes
The solution checks different pairs using distinct indices. The second test case verifies that duplicate values can form the target sum.