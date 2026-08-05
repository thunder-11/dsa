/*
 * ============================================================================
 * LeetCode #231 - Power of Two
 * https://leetcode.com/problems/power-of-two/
 * ============================================================================
 *
 * Problem:
 *   Given an integer `n`, return true if it is a power of two, false otherwise.
 *   An integer is a power of two if there exists an integer k such that n = 2^k.
 *
 * Example:
 *   Input:  n = 1
 *   Output: true   (2^0 = 1)
 *
 *   Input:  n = 16
 *   Output: true   (2^4 = 16)
 *
 *   Input:  n = 3
 *   Output: false
 *
 * Approach: Bit Manipulation
 *   - A power of two in binary has exactly one bit set (e.g., 4 = 100, 8 = 1000).
 *   - n & (n-1) clears the lowest set bit. For a power of two, this gives 0.
 *   - Also check n > 0 to exclude non-positive numbers.
 *
 * Complexity:
 *   Time:  O(1) — single bitwise operation.
 *   Space: O(1) — no extra space used.
 *
 * Difficulty: Easy
 * Tags:       Math, Bit Manipulation, Recursion
 * ============================================================================
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
