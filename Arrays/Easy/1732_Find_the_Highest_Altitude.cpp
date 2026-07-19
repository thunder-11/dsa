/*
 * ============================================================================
 * LeetCode #1732 - Find the Highest Altitude
 * https://leetcode.com/problems/find-the-highest-altitude/
 * ============================================================================
 *
 * Problem:
 *   A biker starts at altitude 0 and goes on a road trip. You are given an
 *   integer array `gain` where `gain[i]` is the net gain in altitude between
 *   point i and point i+1. Return the highest altitude reached.
 *
 * Example:
 *   Input:  gain = [-5, 1, 5, 0, -7]
 *   Output: 1  (altitudes: 0, -5, -4, 1, 1, -6 → highest is 1)
 *
 * Approach: Prefix Sum
 *   - Maintain a running prefix sum of the gain array (current altitude).
 *   - Track the maximum altitude seen so far, initialized to 0 (start point).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the gain array.
 *   Space: O(1) — only two variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Prefix Sum
 * ============================================================================
 */

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maximum = 0;
        int sum = 0;

        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            maximum = max(sum, maximum);
        }
        return maximum;
    }
};
