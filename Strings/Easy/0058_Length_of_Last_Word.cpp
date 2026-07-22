/*
 * ============================================================================
 * LeetCode #58 - Length of Last Word
 * https://leetcode.com/problems/length-of-last-word/
 * ============================================================================
 *
 * Problem:
 *   Given a string `s` consisting of words and spaces, return the length
 *   of the last word in the string. A word is a maximal substring consisting
 *   of non-space characters only.
 *
 * Example:
 *   Input:  s = "Hello World"
 *   Output: 5  (the last word is "World" with length 5)
 *
 * Approach: Linear Scan
 *   - Iterate through each character in the string.
 *   - Track the current word length (`len`), resetting on spaces.
 *   - Store the length of the most recently completed word in `last`.
 *   - At the end, return `len` if we're mid-word, otherwise return `last`.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the string.
 *   Space: O(1) — only two integer variables used.
 *
 * Difficulty: Easy
 * Tags:       String
 * ============================================================================
 */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last;
        int len = 0;
        for(char ch: s){
            if(ch == ' '){
                if (len > 0) last = len;
                len = 0;
                
                continue;
            }
            len++;
        }
        
        if (len == 0){
            return last;
        } else {
            return len;
        }
    }
};
