/*
 * ============================================================================
 * LeetCode #387 - First Unique Character in a String
 * https://leetcode.com/problems/first-unique-character-in-a-string/
 * ============================================================================
 *
 * Problem:
 *   Given a string s, find the first non-repeating character in it and return
 *   its index. If it does not exist, return -1.
 *
 * Example:
 *   Input:  s = "leetcode"
 *   Output: 0
 *
 *   Input:  s = "loveleetcode"
 *   Output: 2
 *
 *   Input:  s = "aabb"
 *   Output: -1
 *
 * Approach: Hash Map Frequency Count (Two-Pass)
 *   - Pass 1: Traverse string s and build a frequency hash map of all characters.
 *   - Pass 2: Traverse string s again. The first character whose frequency in
 *     the map is 1 is the first non-repeating character -> return its index.
 *   - If no character has frequency 1 after the scan, return -1.
 *
 * Complexity:
 *   Time:  O(n) — two linear scans through string of length n.
 *   Space: O(k) — O(1) in practice since alphabet size k <= 26.
 *
 * Difficulty: Easy
 * Tags:       Hash Table, String, Queue, Counting
 * ============================================================================
 */

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for (char x : s) {
            mp[x]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
