/*
 * ============================================================================
 * LeetCode #14 - Longest Common Prefix
 * https://leetcode.com/problems/longest-common-prefix/
 * ============================================================================
 *
 * Problem:
 *   Write a function to find the longest common prefix string amongst an array
 *   of strings. If there is no common prefix, return an empty string "".
 *
 * Example:
 *   Input:  strs = ["flower","flow","flight"]
 *   Output: "fl"
 *
 *   Input:  strs = ["dog","racecar","car"]
 *   Output: ""  (no common prefix)
 *
 * Approach: Vertical Scanning (Character by Character)
 *   - Use the first string as the reference prefix.
 *   - Build the prefix character by character from left to right.
 *   - For each character position i, check all other strings:
 *       - If i exceeds any string's length, or any character mismatches,
 *         remove the last added character and return the prefix so far.
 *   - Return the full prefix if all strings share it.
 *
 * Complexity:
 *   Time:  O(S) — where S is the total number of characters across all strings.
 *   Space: O(m) — where m is the length of the longest common prefix.
 *
 * Difficulty: Easy
 * Tags:       String, Trie
 * ============================================================================
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        for(int i = 0; i < strs[0].length(); i++){
            prefix += strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if (i >= strs[j].size() || prefix[i] != strs[j][i]){
                    prefix.pop_back();
                    return prefix;
                }
            }
        }
        return prefix;
    }
};
