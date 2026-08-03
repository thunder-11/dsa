/*
 * ============================================================================
 * LeetCode #125 - Valid Palindrome
 * https://leetcode.com/problems/valid-palindrome/
 * ============================================================================
 *
 * Problem:
 *   A phrase is a palindrome if, after converting all uppercase letters to
 *   lowercase and removing all non-alphanumeric characters, it reads the same
 *   forward and backward. Given a string `s`, return true if it is a palindrome.
 *
 * Example:
 *   Input:  s = "A man, a plan, a canal: Panama"
 *   Output: true  → "amanaplanacanalpanama"
 *
 *   Input:  s = "race a car"
 *   Output: false → "raceacar"
 *
 * Approach: Filter + Two Pointers
 *   - Build a cleaned string by keeping only alphanumeric characters,
 *     converted to lowercase.
 *   - Use two pointers (i from left, j from right) moving inward.
 *   - Return false if any pair mismatches, true otherwise.
 *
 * Complexity:
 *   Time:  O(n) — one pass to filter, one pass to check.
 *   Space: O(n) — for the cleaned string.
 *
 * Difficulty: Easy
 * Tags:       String, Two Pointers
 * ============================================================================
 */

class Solution {
public:
    bool isPalindrome(string s) {
        string str ="";
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                str += tolower(s[i]);
            }
        }

        int i = 0, j = str.length()- 1;
        
        while(i<=j){
            if(str[i] != str[j]){
                return false;
            }
            i++, j--;
        }
        return true;
    }
};
