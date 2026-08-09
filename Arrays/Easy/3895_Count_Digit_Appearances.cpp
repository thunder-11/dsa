/*
 * ============================================================================
 * LeetCode #3895 - Count Digit Appearances
 * https://leetcode.com/problems/count-digit-appearances/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums` and a single digit `digit`, return the total
 *   number of times `digit` appears across all numbers in `nums`.
 *
 * Example:
 *   Input:  nums = [13, 25, 13], digit = 3
 *   Output: 2  (13 has one 3, 25 has none, 13 has one 3 → total 2)
 *
 *   Input:  nums = [1, 2, 3], digit = 1
 *   Output: 1
 *
 * Approach: Brute Force — Digit Extraction
 *   - For each number in nums, repeatedly extract its last digit (x % 10)
 *     and divide by 10 until x becomes 0.
 *   - If the extracted digit matches `digit`, increment the frequency counter.
 *
 * Complexity:
 *   Time:  O(n * d) — n numbers, each with at most d digits.
 *   Space: O(1)     — only scalar counter used.
 *
 * Difficulty: Easy
 * Tags:       Array, Math
 * ============================================================================
 */

class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int freq = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int x = nums[i]; x; x /= 10) {
                if (x % 10 == digit)
                    freq++;
            }
        }

        return freq;
    }
};
