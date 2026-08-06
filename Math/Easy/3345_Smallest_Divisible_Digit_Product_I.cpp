/*
 * ============================================================================
 * LeetCode #3345 - Smallest Divisible Digit Product I
 * https://leetcode.com/problems/smallest-divisible-digit-product-i/
 * ============================================================================
 *
 * Problem:
 *   Given two integers `n` and `t`, find the smallest integer >= n such that
 *   the product of its digits is divisible by `t`.
 *
 * Example:
 *   Input:  n = 10, t = 2
 *   Output: 10  (1*0 = 0, but 1*2 = 2 at n=12? Actually digit product of 10
 *                is 0, 0 % 2 == 0, so answer is 10)
 *
 *   Input:  n = 15, t = 3
 *   Output: 15  (1*5 = 5, not divisible; 1*6 = 6 divisible → 16)
 *
 * Approach: Linear Search (Brute Force)
 *   - Starting from n, iterate each integer i upward.
 *   - Compute the product of digits of i by repeatedly taking i % 10 and i / 10.
 *   - If the product is divisible by t, return i immediately.
 *
 * Complexity:
 *   Time:  O(k * d) — k is the gap to the answer, d is the number of digits.
 *   Space: O(1)     — only scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Math, Brute Force
 * ============================================================================
 */

class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n;  ; i++){
            int p = 1;
            for(int x = i ; x ; x/=10) p *= x%10;

            if(p % t == 0) return i;
        }
    }
};
