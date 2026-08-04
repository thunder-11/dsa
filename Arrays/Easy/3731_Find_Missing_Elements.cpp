/*
 * ============================================================================
 * LeetCode #3731 - Find Missing Elements
 * https://leetcode.com/problems/find-missing-elements/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, find all integers in the range
 *   [min(nums), max(nums)] that are missing from the array.
 *   Return them in ascending order.
 *
 * Example:
 *   Input:  nums = [1, 3, 5]
 *   Output: [2, 4]
 *
 *   Input:  nums = [3, 3, 3]
 *   Output: []  (min == max, no range to fill)
 *
 * Approach: Range Scan with Linear Search
 *   - Find the minimum and maximum of the array.
 *   - If all elements in the range are covered (max-min == size-1), return [].
 *   - Otherwise, iterate every integer from min+1 upward.
 *     For each candidate, scan nums to check existence.
 *     If missing, add to result and increment count to track range coverage.
 *   - Stop when count-1 equals (max-min), meaning all gaps are found.
 *
 * Complexity:
 *   Time:  O(k * n) — k missing elements, each requiring a scan of n elements.
 *   Space: O(k)     — output vector of missing elements.
 *
 * Difficulty: Easy
 * Tags:       Array, Hash Table
 * ============================================================================
 */

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minimum = nums[0], maximum = nums[0];

        vector<int> missing;

        for (int i = 0; i < nums.size(); i++) {
            maximum = max(maximum, nums[i]);
            minimum = min(minimum, nums[i]);
        }

        if (nums.size() - 1 == (maximum - minimum))
            return missing;


        int num = minimum + 1;
        int count = nums.size();

        while (count - 1 < (maximum - minimum)) {
            bool exist = false;
            for (int n : nums) {
                if (n == num){
                    exist = true;
                    break;
                }
            }
            if(!exist){
                missing.push_back(num);
                count++;
            }
            num++;
        }

        return missing;
    }
};
