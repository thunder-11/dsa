/*
 * ============================================================================
 * LeetCode #66 - Plus One
 * https://leetcode.com/problems/plus-one/
 * ============================================================================
 *
 * Problem:
 *   Given a large integer represented as an array of digits (most significant
 *   digit first), increment the integer by one and return the resulting array.
 *
 * Example:
 *   Input:  digits = [1, 2, 3]
 *   Output: [1, 2, 4]
 *
 *   Input:  digits = [9, 9, 9]
 *   Output: [1, 0, 0, 0]
 *
 * Approach: Reverse Traversal with Carry
 *   - Traverse from the last digit to the first.
 *   - If the current digit is less than 9, simply increment and return.
 *   - Otherwise, set it to 0 and carry over to the next digit.
 *   - If all digits were 9 (carry propagates past index 0), prepend 1.
 *
 * Complexity:
 *   Time:  O(n) — at most one full pass through the digits.
 *   Space: O(1) — in-place modification (O(n) only in the all-9s edge case).
 *
 * Difficulty: Easy
 * Tags:       Array, Math
 * ============================================================================
 */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--){
            if (digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
