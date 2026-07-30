/*
 * ============================================================================
 * LeetCode #27 - Remove Element
 * https://leetcode.com/problems/remove-element/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums` and an integer `val`, remove all occurrences
 *   of `val` in-place. Return the number of elements not equal to `val`.
 *   The first k elements of `nums` must hold the remaining values in any order.
 *
 * Example:
 *   Input:  nums = [3, 2, 2, 3], val = 3
 *   Output: 2, nums = [2, 2, _, _]
 *
 *   Input:  nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
 *   Output: 5, nums = [0, 1, 3, 0, 4, _, _, _]
 *
 * Approach: Two Pointers (Overwrite)
 *   - Use a slow pointer `i` to track the write position.
 *   - Use a fast pointer `j` to scan through the array.
 *   - Whenever nums[j] is not equal to val, write it to nums[i] and advance i.
 *   - Return i as the count of remaining elements.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — in-place modification, no extra space.
 *
 * Difficulty: Easy
 * Tags:       Array, Two Pointers
 * ============================================================================
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
