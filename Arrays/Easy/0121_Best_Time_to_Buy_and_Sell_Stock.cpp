/*
 * ============================================================================
 * LeetCode #121 - Best Time to Buy and Sell Stock
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * ============================================================================
 *
 * Problem:
 *   Given an array `prices` where prices[i] is the price of a stock on day i,
 *   choose a single day to buy and a later day to sell to maximize profit.
 *   Return the maximum profit, or 0 if no profit is possible.
 *
 * Example:
 *   Input:  prices = [7, 1, 5, 3, 6, 4]
 *   Output: 5  (buy at 1, sell at 6)
 *
 *   Input:  prices = [7, 6, 4, 3, 1]
 *   Output: 0  (prices only decrease, no profit possible)
 *
 * Approach: Greedy — Track Running Minimum
 *   - Maintain the minimum price seen so far.
 *   - At each day, compute the profit if we sold today (price - minimum).
 *   - Update the maximum profit if this exceeds the previous best.
 *   - A single pass is sufficient since we only buy before we sell.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the prices array.
 *   Space: O(1) — only two scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Dynamic Programming, Greedy
 * ============================================================================
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minimum = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            minimum = min(minimum, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minimum);
        }

        return maxProfit;
    }
};
