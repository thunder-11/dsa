/*
 * ============================================================================
 * LeetCode #3622 - Check Divisibility by Digit Sum and Product
 * https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
 * ============================================================================
 *
 * Problem:
 *   Given a positive integer n, return true if n is divisible by the sum of
 *   its digits plus the product of its digits, otherwise return false.
 *
 * Example:
 *   Input:  n = 99
 *   Output: true   (digits: 9,9 → sum=18, product=81 → 18+81=99, 99%99==0)
 *
 *   Input:  n = 23
 *   Output: false  (digits: 2,3 → sum=5, product=6 → 5+6=11, 23%11≠0)
 *
 * Approach: Digit Extraction
 *   - Iterate through each digit of n using repeated division by 10.
 *   - Accumulate the digit sum and digit product simultaneously.
 *   - Return true if n % (sum + product) == 0.
 *
 * Complexity:
 *   Time:  O(d) — d is the number of digits in n.
 *   Space: O(1) — only two accumulator variables used.
 *
 * Difficulty: Easy
 * Tags:       Math
 * ============================================================================
 */

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;

        for (int x = n; x; x /= 10) {
            int num = x % 10;
            sum += num;
            product *= num;
        }
        return n % (sum + product) == 0;
    }
};
