/*
 * ============================================================================
 * LeetCode #1 - Two Sum
 * https://leetcode.com/problems/two-sum/
 * ============================================================================
 *
 * Problem:
 *   Given an array of integers `nums` and an integer `target`, return the
 *   indices of the two numbers such that they add up to `target`.
 *   You may assume that each input would have exactly one solution, and you
 *   may not use the same element twice.
 *
 * Example:
 *   Input:  nums = [2, 7, 11, 15], target = 9
 *   Output: [0, 1]  (because nums[0] + nums[1] == 9)
 *
 * Approach: Hash Map (One-Pass)
 *   - Iterate through the array once.
 *   - For each element, compute the complement (target - nums[i]).
 *   - If the complement already exists in the hash map, we found our pair.
 *   - Otherwise, store the current element and its index in the map.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array; hash map lookups are O(1).
 *   Space: O(n) — hash map stores at most n elements.
 *
 * Difficulty: Easy
 * Tags:       Array, Hash Table
 * ============================================================================
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> up;

        for (int i = 0; i < n ; i++){
            int require = target - nums[i];
            if(up.count(require)){
                return {up[require], i};
            }
            up[nums[i]] = i;
        }
        return {-1, -1};
    }
};
