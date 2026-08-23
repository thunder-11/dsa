/*
 * ============================================================================
 * LeetCode #169 - Majority Element
 * https://leetcode.com/problems/majority-element/
 * ============================================================================
 *
 * Problem:
 *   Given an array `nums` of size n, return the majority element — the element
 *   that appears more than ⌊n / 2⌋ times. The majority element always exists.
 *
 * Example:
 *   Input:  nums = [3,2,3]
 *   Output: 3
 *
 *   Input:  nums = [2,2,1,1,1,2,2]
 *   Output: 2
 *
 * Approach: Boyer-Moore Voting Algorithm
 *   - Maintain a `candidate` and a `count`.
 *   - When count reaches 0, set the current element as the new candidate.
 *   - If the current element matches the candidate, increment count;
 *     otherwise decrement it.
 *   - Because the majority element appears more than n/2 times, it will
 *     always survive as the final candidate after one pass.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only two variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Hash Table, Divide and Conquer, Sorting, Counting
 * ============================================================================
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int x : nums) {
            if (count == 0)
                candidate = x;

            if (x == candidate)
                count++;
            else
                count--;
        }
        return candidate;
    }
};
