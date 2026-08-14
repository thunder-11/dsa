/*
 * ============================================================================
 * LeetCode #884 - Uncommon Words from Two Sentences
 * https://leetcode.com/problems/uncommon-words-from-two-sentences/
 * ============================================================================
 *
 * Problem:
 *   A word is uncommon if it appears exactly once in one sentence and does not
 *   appear in the other. Given two sentences s1 and s2, return all uncommon
 *   words (in any order).
 *
 * Example:
 *   Input:  s1 = "this apple is sweet", s2 = "this apple is sour"
 *   Output: ["sweet","sour"]
 *
 *   Input:  s1 = "apple apple", s2 = "banana"
 *   Output: ["banana"]
 *
 * Approach: Frequency Map (Combined Count)
 *   - Parse both sentences and build a single frequency map across all words.
 *   - A word that appears exactly once total is by definition uncommon
 *     (if it appeared in both sentences it would appear at least twice;
 *     if it appeared twice in one sentence it would also be ≥ 2).
 *   - Collect all words with frequency == 1 into the result.
 *
 * Complexity:
 *   Time:  O(n + m) — n and m are lengths of s1 and s2.
 *   Space: O(k)     — k is the total number of distinct words.
 *
 * Difficulty: Easy
 * Tags:       String, Hash Table
 * ============================================================================
 */

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> result;
        string word = "";

        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != ' ') {
                word += s1[i];
            } else {
                if (mp.contains(word)) {
                    mp[word]++;
                } else {
                    mp[word] = 1;
                }
                word = "";
            }
        }
        mp[word]++;

        word = "";

        for (int i = 0; i < s2.length(); i++) {
            if (s2[i] != ' ') {
                word += s2[i];
            } else {
                if (mp.contains(word)) {
                    mp[word]++;
                } else {
                    mp[word] = 1;
                }
                word = "";
            }
        }
        mp[word]++;

        for (auto& [key, value] : mp) {
            if (value == 1)
                result.push_back(key);
        }

        return result;
    }
};
