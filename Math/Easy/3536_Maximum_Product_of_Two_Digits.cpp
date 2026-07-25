/*
 * ============================================================================
 * LeetCode #3536 - Maximum Product of Two Digits
 * https://leetcode.com/problems/maximum-product-of-two-digits/
 * ============================================================================
 *
 * Problem:
 *   Given a positive integer `n`, find the two largest digits in `n` and
 *   return their product.
 *
 * Example:
 *   Input:  n = 31
 *   Output: 3   (digits: 3, 1 → max two are 3 and 1 → product = 3)
 *
 *   Input:  n = 22
 *   Output: 4   (digits: 2, 2 → product = 4)
 *
 * Approach: Linear Scan for Top-2 Maximum
 *   - Convert n to a string and iterate over each character digit.
 *   - Track the two largest digits seen so far (max1 ≥ max2).
 *   - If the current digit exceeds max1, push max1 down to max2 and update max1.
 *   - Otherwise if it exceeds max2, update max2 only.
 *   - Return max1 * max2.
 *
 * Complexity:
 *   Time:  O(d) — where d is the number of digits in n.
 *   Space: O(d) — for the string conversion of n.
 *
 * Difficulty: Easy
 * Tags:       Math, String, Sorting
 * ============================================================================
 */

class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        int max1 = -1;
        int max2 = -1;

        for(int i = 0; i < num.size(); i++){
            int digit = num[i] -'0';

            if (digit > max1){
                max2 = max1;
                max1 = digit;
            } else if(digit > max2){
                max2 = digit;
            }
        }
        return max1 * max2;
    }
};
