/*
 * ============================================================================
 * LeetCode #344 - Reverse String
 * https://leetcode.com/problems/reverse-string/
 * ============================================================================
 *
 * Problem:
 *   Write a function that reverses a string in-place. The input is given as
 *   a vector of characters `s`. Modify the vector in-place with O(1) extra
 *   memory.
 *
 * Example:
 *   Input:  s = ['h','e','l','l','o']
 *   Output:     ['o','l','l','e','h']
 *
 *   Input:  s = ['H','a','n','n','a','h']
 *   Output:     ['h','a','n','n','a','H']
 *
 * Approach: Two Pointers
 *   - Use two pointers i (start) and j (end).
 *   - Swap s[i] and s[j], then advance i forward and j backward.
 *   - Stop when i >= j (pointers have crossed or met).
 *
 * Complexity:
 *   Time:  O(n) — each element is visited at most once.
 *   Space: O(1) — in-place swap, no extra memory used.
 *
 * Difficulty: Easy
 * Tags:       Two Pointers, String, Recursion
 * ============================================================================
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while (i <= j) {
            swap(s[i], s[j]);
            i++, j--;
        }
        return;
    }
};
