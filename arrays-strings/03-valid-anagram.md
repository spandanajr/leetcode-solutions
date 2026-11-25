
## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
I used a frequency-counting array of size 26. I increment the count for each character in the first string and decrement it for each character in the second string. If all counts are zero, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1), because the frequency array has a fixed size of 26.

### Notes
The solution assumes lowercase English letters, as specified by the problem constraints.
