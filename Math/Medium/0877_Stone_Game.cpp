/*
 * ============================================================================
 * LeetCode #877 - Stone Game
 * https://leetcode.com/problems/stone-game/
 * ============================================================================
 *
 * Problem:
 *   Alice and Bob take turns picking piles of stones from either end of a row.
 *   Alice goes first. The player with the most stones at the end wins.
 *   There are an even number of piles and the total is odd (no draws possible).
 *   Return true if Alice wins, false otherwise. Both play optimally.
 *
 * Example:
 *   Input:  piles = [5, 3, 4, 5]
 *   Output: true  (Alice always wins with optimal play)
 *
 * Approach: Mathematical Observation
 *   - The piles array always has an even length.
 *   - Alice can always choose to take ALL even-indexed piles OR all odd-indexed
 *     piles, whichever has the larger total.
 *   - Since Alice moves first and can enforce which set she collects, she can
 *     guarantee a win regardless of Bob's strategy.
 *   - Therefore, Alice ALWAYS wins → return true unconditionally.
 *
 * Complexity:
 *   Time:  O(1) — constant time, no computation needed.
 *   Space: O(1) — no extra space used.
 *
 * Difficulty: Medium
 * Tags:       Array, Math, Dynamic Programming, Game Theory
 * ============================================================================
 */

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
