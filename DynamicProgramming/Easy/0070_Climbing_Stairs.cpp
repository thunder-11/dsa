/*
 * ============================================================================
 * LeetCode #70 - Climbing Stairs
 * https://leetcode.com/problems/climbing-stairs/
 * ============================================================================
 *
 * Problem:
 *   You are climbing a staircase with `n` steps. Each time you can climb
 *   either 1 or 2 steps. In how many distinct ways can you climb to the top?
 *
 * Example:
 *   Input:  n = 2
 *   Output: 2  (1+1 or 2)
 *
 *   Input:  n = 3
 *   Output: 3  (1+1+1, 1+2, or 2+1)
 *
 * Approach: Dynamic Programming (Space-Optimized Fibonacci)
 *   - The number of ways to reach step n equals the number of ways to reach
 *     step n-1 (then take 1 step) plus ways to reach step n-2 (then take 2).
 *   - This is exactly the Fibonacci recurrence: f(n) = f(n-1) + f(n-2).
 *   - Instead of a full DP array, use two variables `a` and `b` to track
 *     the last two values, updating them in each iteration.
 *
 * Complexity:
 *   Time:  O(n) — single loop from 3 to n.
 *   Space: O(1) — only two scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Math, Dynamic Programming, Memoization
 * ============================================================================
 */

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int a = 1, b = 2;

        for(int i = 3; i <=n; i++){
            int curr = a + b;
            a = b;
            b = curr;
        }

        return b;
    }
};
