/*
 * ============================================================================
 * LeetCode #53 - Maximum Subarray
 * https://leetcode.com/problems/maximum-subarray/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, find the subarray with the largest sum
 *   and return its sum.
 *
 * Example:
 *   Input:  nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
 *   Output: 6  (subarray [4, -1, 2, 1] has the largest sum)
 *
 * Approach: Kadane's Algorithm
 *   - Maintain a running sum (`csum`) of the current subarray.
 *   - At each element, decide whether to extend the existing subarray or
 *     start a new subarray from the current element.
 *   - Track the global maximum seen so far.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only two variables used regardless of input size.
 *
 * Difficulty: Medium
 * Tags:       Array, Divide and Conquer, Dynamic Programming
 * ============================================================================
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum = nums[0];
        int maximum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            csum = max(nums[i], csum + nums[i]);
            maximum = max(maximum, csum);
        }
        return maximum;
    }
};
