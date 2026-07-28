/*
 * ============================================================================
 * LeetCode #26 - Remove Duplicates from Sorted Array
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * ============================================================================
 *
 * Problem:
 *   Given a sorted integer array `nums` in non-decreasing order, remove
 *   duplicates in-place so each unique element appears only once.
 *   Return the number of unique elements k. The first k elements of `nums`
 *   must hold the unique values in their original order.
 *
 * Example:
 *   Input:  nums = [1, 1, 2]
 *   Output: 2, nums = [1, 2, _]
 *
 *   Input:  nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
 *   Output: 5, nums = [0, 1, 2, 3, 4, _, _, _, _, _]
 *
 * Approach: Two Pointers (Slow & Fast)
 *   - Use a slow pointer `i` to track the position of the last unique element.
 *   - Use a fast pointer `j` to scan ahead through the array.
 *   - When nums[j] differs from nums[i], advance `i` and overwrite with nums[j].
 *   - Return i+1 as the count of unique elements.
 *
 * Complexity:
 *   Time:  O(n) — single pass with two pointers.
 *   Space: O(1) — in-place modification, no extra space.
 *
 * Difficulty: Easy
 * Tags:       Array, Two Pointers
 * ============================================================================
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;

        for(int j = 1; j < nums.size(); j++){
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
