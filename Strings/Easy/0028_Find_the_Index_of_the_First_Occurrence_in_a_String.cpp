/*
 * ============================================================================
 * LeetCode #28 - Find the Index of the First Occurrence in a String
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * ============================================================================
 *
 * Problem:
 *   Given two strings `haystack` and `needle`, return the index of the first
 *   occurrence of `needle` in `haystack`, or -1 if `needle` is not part of
 *   `haystack`.
 *
 * Example:
 *   Input:  haystack = "sadbutsad", needle = "sad"
 *   Output: 0  ("sad" occurs at index 0 and 6, first occurrence is 0)
 *
 * Approach: Brute Force (Sliding Window Match)
 *   - Slide a window of size `m` (needle length) across `haystack`.
 *   - At each position, if the first character matches, compare the rest
 *     character by character.
 *   - Return the starting index on a full match, or -1 if no match found.
 *
 * Complexity:
 *   Time:  O(n * m) — for each of the n-m+1 positions, up to m comparisons.
 *   Space: O(1) — no extra data structures used.
 *
 * Difficulty: Easy
 * Tags:       String, Two Pointers, String Matching
 * ============================================================================
 */

class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        for (int i = 0; i <= n - m; i++) {

            if (haystack[i] == needle[0]) {

                int j = 1;

                while (j < m && haystack[i + j] == needle[j]) {
                    j++;
                }

                if (j == m)
                    return i;
            }
        }

        return -1;
    }
};
