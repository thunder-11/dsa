/*
 * ============================================================================
 * LeetCode #1323 - Maximum 69 Number
 * https://leetcode.com/problems/maximum-69-number/
 * ============================================================================
 *
 * Problem:
 *   Given a positive integer `num` consisting only of digits 6 and 9, return
 *   the maximum number you can get by changing at most one digit (6 → 9).
 *
 * Example:
 *   Input:  num = 9669
 *   Output: 9969  (change first 6 to 9)
 *
 *   Input:  num = 9999
 *   Output: 9999  (no 6 to change)
 *
 * Approach: Greedy — First 6 to 9
 *   - Convert num to string and scan from left to right.
 *   - Change the first '6' encountered to '9' (most significant digit first
 *     gives the largest increase).
 *   - Convert back to integer and return.
 *
 * Complexity:
 *   Time:  O(d) — where d is the number of digits in num.
 *   Space: O(d) — for the string conversion.
 *
 * Difficulty: Easy
 * Tags:       Math, Greedy
 * ============================================================================
 */

class Solution {
public:
    int maximum69Number(int num) {
        string s = to_string(num);

        for (char& c : s) {
            if (c == '6') {
                c = '9';
                break;
            }
        }

        return stoi(s);
    }
};
