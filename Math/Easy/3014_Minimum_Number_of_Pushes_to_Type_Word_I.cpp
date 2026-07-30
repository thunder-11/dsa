/*
 * ============================================================================
 * LeetCode #3014 - Minimum Number of Pushes to Type Word I
 * https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/
 * ============================================================================
 *
 * Problem:
 *   You have a telephone keypad with 8 keys (2-9). You can remap each key to
 *   any set of distinct letters. Each letter in `word` requires pressing its
 *   assigned key a number of times equal to its position in that key's list.
 *   The 1st letter on a key costs 1 push, the 2nd costs 2 pushes, etc.
 *   Given a string `word` of distinct lowercase letters, return the minimum
 *   total number of pushes to type the word.
 *
 * Example:
 *   Input:  word = "abcde"
 *   Output: 5  (map each letter to a different key, each costs 1 push)
 *
 *   Input:  word = "xyzxyzxyzxyz"  (word length 12 with distinct letters)
 *   Output: first 8 letters cost 1 push each, next 4 cost 2 pushes each = 16
 *
 * Approach: Greedy (Batch Assignment)
 *   - Assign the first 8 letters to positions 1 (one push each).
 *   - Assign the next 8 letters to positions 2 (two pushes each), and so on.
 *   - Since `word` contains only distinct letters, process in batches of 8.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the word length in batches of 8.
 *   Space: O(1) — only scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Math, Greedy, String
 * ============================================================================
 */

class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int answer = 0;
        int push = 1;
        while (n > 8){
            answer += push*8;
            push++;
            n -= 8;
        }
        
        if(n != 0){
            answer += push*n;
        }
        return answer;
    }
};
