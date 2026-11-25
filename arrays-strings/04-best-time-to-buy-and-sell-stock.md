
## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
I used a single traversal of the prices array. I maintain the minimum price seen so far and calculate the profit by selling at the current price. I update the maximum profit whenever a better result is found.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The solution only allows buying before selling. If no profitable transaction is possible, it returns 0.
