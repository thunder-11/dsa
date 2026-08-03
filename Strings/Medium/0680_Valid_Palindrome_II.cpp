/*
 * ============================================================================
 * LeetCode #680 - Valid Palindrome II
 * https://leetcode.com/problems/valid-palindrome-ii/
 * ============================================================================
 *
 * Problem:
 *   Given a string `s`, return true if the string can be made a palindrome
 *   by removing at most one character.
 *
 * Example:
 *   Input:  s = "aba"
 *   Output: true  (already a palindrome)
 *
 *   Input:  s = "abca"
 *   Output: true  (remove 'b' → "aca", or remove 'c' → "aba")
 *
 *   Input:  s = "abc"
 *   Output: false
 *
 * Approach: Two Pointers + Helper Check
 *   - Use two pointers (i, j) moving inward from both ends.
 *   - When a mismatch is found, try skipping either the left character
 *     (check s[i+1..j]) or the right character (check s[i..j-1]).
 *   - If either sub-string is a palindrome, return true.
 *   - The helper `isPal` checks if a range [i, j] is a palindrome.
 *
 * Complexity:
 *   Time:  O(n) — two pointers traverse at most n characters total.
 *   Space: O(1) — no extra space beyond pointers.
 *
 * Difficulty: Medium
 * Tags:       String, Two Pointers, Greedy
 * ============================================================================
 */

class Solution {
public:
    bool isPal(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return isPal(s, i + 1, j) || isPal(s, i, j - 1);
            }
            i++;
            j--;
        }

        return true;
    }
};
