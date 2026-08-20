/*
 * ============================================================================
 * LeetCode #3069 - Distribute Elements Into Two Arrays I
 * https://leetcode.com/problems/distribute-elements-into-two-arrays-i/
 * ============================================================================
 *
 * Problem:
 *   Given a 1-indexed integer array `nums` with distinct values, distribute
 *   elements starting from index 2 into two arrays arr1 and arr2:
 *     - nums[0] goes to arr1, nums[1] goes to arr2.
 *     - For each subsequent element nums[i]:
 *         - If arr1.back() > arr2.back(), append to arr1.
 *         - Otherwise, append to arr2.
 *   Return the concatenation [arr1, arr2].
 *
 * Example:
 *   Input:  nums = [2,1,4,3]
 *   Output: [2,4,3,1]  (arr1=[2,4], arr2=[1,3] → concat=[2,4,1,3])
 *
 * Approach: Greedy Simulation
 *   - Initialise arr1 with nums[0] and arr2 with nums[1].
 *   - Iterate from index 2; compare last elements of arr1 and arr2.
 *   - Append the current element to whichever array has the larger last value.
 *   - Concatenate arr2 onto the end of arr1 and return.
 *
 * Complexity:
 *   Time:  O(n) — single pass through nums after initialization.
 *   Space: O(n) — two arrays whose combined size equals n.
 *
 * Difficulty: Easy
 * Tags:       Array, Simulation
 * ============================================================================
 */

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (arr1.back() > arr2.back())
                arr1.push_back(nums[i]);
            else
                arr2.push_back(nums[i]);
        }

        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
    }
};
