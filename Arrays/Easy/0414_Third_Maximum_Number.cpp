/*
 * ============================================================================
 * LeetCode #414 - Third Maximum Number
 * https://leetcode.com/problems/third-maximum-number/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, return the third distinct maximum number.
 *   If the third maximum does not exist, return the maximum number.
 *
 * Example:
 *   Input:  nums = [3,2,1]
 *   Output: 1   (third distinct max is 1)
 *
 *   Input:  nums = [1,2]
 *   Output: 2   (no third max → return maximum)
 *
 *   Input:  nums = [2,2,3,1]
 *   Output: 1   (distinct values: 3,2,1 → third is 1)
 *
 * Approach: Linear Scan — Track Top-3 Distinct Maximums
 *   - Maintain three variables max1 ≥ max2 ≥ max3, initialised to LLONG_MIN.
 *   - For each element, skip duplicates of any tracked maximum.
 *   - Otherwise, cascade down as needed to update the three maximums.
 *   - Using long long avoids collision with INT_MIN as a valid input value.
 *   - If max3 is still LLONG_MIN, fewer than 3 distinct values exist →
 *     return max1 (the overall maximum).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only three variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Sorting
 * ============================================================================
 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;

        for (int x : nums) {
            if (x == max1 || x == max2 || x == max3)
                continue;
            if (x > max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x > max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }
        }
        return max3 == LLONG_MIN ? max1 : max3;
    }
};
