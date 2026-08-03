/*
 * ============================================================================
 * LeetCode #258 - Add Digits
 * https://leetcode.com/problems/add-digits/
 * ============================================================================
 *
 * Problem:
 *   Given an integer `num`, repeatedly add all its digits until the result
 *   has only one digit, and return it.
 *
 * Example:
 *   Input:  num = 38
 *   Output: 2  (3+8=11 → 1+1=2)
 *
 *   Input:  num = 0
 *   Output: 0
 *
 * Approach: Iterative Digit Sum
 *   - Repeatedly extract the last digit (num % 10) and the remaining number
 *     (num / 10), sum them, and assign back to num.
 *   - When the quotient `a` (num / 10) becomes 0, the single-digit result
 *     is in `num` — return it.
 *
 * Complexity:
 *   Time:  O(log n) — each iteration reduces num to the sum of its digits.
 *   Space: O(1) — only two scalar variables used.
 *
 * Note: An O(1) digital root formula exists: result = 1 + (num-1) % 9
 *       (returns 0 for num=0). This iterative solution is more readable.
 *
 * Difficulty: Easy
 * Tags:       Math, Simulation, Number Theory
 * ============================================================================
 */

class Solution {
public:
    int addDigits(int num) {
        while(true){
            int a = num/10;
            int b = num%10;

            num = a+b;
            if (a == 0) return num;
        }
    }
};
