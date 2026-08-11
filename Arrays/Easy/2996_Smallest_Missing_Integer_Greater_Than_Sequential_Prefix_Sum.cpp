/*
 * ============================================================================
 * LeetCode #2996 - Smallest Missing Integer Greater Than Sequential Prefix Sum
 * https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/
 * ============================================================================
 *
 * Problem:
 *   Given a 0-indexed integer array `nums`, find the longest sequential prefix
 *   (nums[0], nums[0]+nums[1], ...) where each consecutive pair differs by 1.
 *   Compute the sum of that prefix, then return the smallest integer >= that
 *   sum which does NOT appear in nums.
 *
 * Example:
 *   Input:  nums = [1, 2, 3, 2, 5]
 *   Output: 6  (prefix 1,2,3 → sum=6, 6 not in nums → return 6)
 *
 *   Input:  nums = [3, 4, 5, 1, 12, 14, 13]
 *   Output: 15  (prefix 3,4,5 → sum=12, 12 in nums → try 13 in nums → 14 in nums → 15 not in nums)
 *
 * Approach: Hash Set + Sequential Prefix Sum
 *   - Load all elements into an unordered_set for O(1) lookups.
 *   - Walk from index 0, accumulating the prefix sum while each next element
 *     equals the current element + 1 (sequential consecutive values).
 *   - Starting from that sum, linearly search for the smallest value not in
 *     the set.
 *
 * Complexity:
 *   Time:  O(n) — set construction + prefix scan + linear probe (at most n steps).
 *   Space: O(n) — for the hash set.
 *
 * Difficulty: Easy
 * Tags:       Array, Hash Table
 * ============================================================================
 */

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int sum = nums[0];
        for (int i = 0; i+1 < nums.size() && nums[i+1] == nums[i] + 1; i++) {
            sum += nums[i+1];
        }
        while (st.count(sum)) sum++;
        return sum;
    }
};
