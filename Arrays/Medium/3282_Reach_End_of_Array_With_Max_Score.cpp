/*
 * ============================================================================
 * LeetCode #3282 - Reach End of Array With Max Score
 * https://leetcode.com/problems/reach-end-of-array-with-max-score/
 * ============================================================================
 *
 * Problem:
 *   You are given an integer array `nums` of length n. Starting at index 0,
 *   you can jump from index i to any index j > i. The score for each jump
 *   from i to j is (j - i) * nums[i]. Return the maximum total score to
 *   reach the last index (index n-1).
 *
 * Example:
 *   Input:  nums = [1, 3, 1, 5]
 *   Output: 7  (jump 0→1 scores 1*1=1, jump 1→3 scores 2*3=6, total=7)
 *
 * Approach: Greedy — Always Jump with Current Maximum
 *   - The optimal strategy is to always use the largest value seen so far
 *     as the "multiplier" for each step, because staying on a higher value
 *     longer accumulates more score.
 *   - Iterate from index 0 to n-2, tracking the running max of nums[i].
 *   - Add maxVal to score at each step (equivalent to jumping one step at a
 *     time using the best available value).
 *   - The last element is never used as a multiplier (it's the destination).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only two scalar variables used.
 *
 * Difficulty: Medium
 * Tags:       Array, Greedy
 * ============================================================================
 */

class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long score = 0;
        int maxVal = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            maxVal = max(maxVal, nums[i]);
            score += maxVal;
        }

        return score;
    }
};
