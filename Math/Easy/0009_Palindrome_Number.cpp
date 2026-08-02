/*
 * ============================================================================
 * LeetCode #9 - Palindrome Number
 * https://leetcode.com/problems/palindrome-number/
 * ============================================================================
 *
 * Problem:
 *   Given an integer `x`, return true if `x` is a palindrome, and false
 *   otherwise. A palindrome reads the same forwards and backwards.
 *   Negative numbers are never palindromes.
 *
 * Example:
 *   Input:  x = 121
 *   Output: true   (121 reads the same both ways)
 *
 *   Input:  x = -121
 *   Output: false  (reads -121 forward, 121- backward)
 *
 * Approach: String Conversion + Two Pointers
 *   - Convert the integer to its string representation.
 *   - Use two pointers (i from left, j from right) moving inward.
 *   - If any pair of characters differs, return false.
 *   - Return true if all pairs match.
 *
 * Complexity:
 *   Time:  O(d) — where d is the number of digits in x.
 *   Space: O(d) — for the string conversion of x.
 *
 * Difficulty: Easy
 * Tags:       Math, Two Pointers
 * ============================================================================
 */

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int i = 0, j = str.length()-1;

        while(i <= j){
            if(str[i] != str[j]){
                return false;
            }
            i++, j--;
        }
        return true;
    }
};
