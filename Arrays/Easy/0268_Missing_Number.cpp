/*
 * ============================================================================
 * LeetCode #268 - Missing Number
 * https://leetcode.com/problems/missing-number/
 * ============================================================================
 *
 * Problem:
 *   Given an array `nums` containing n distinct numbers in the range [0, n],
 *   return the only number in the range that is missing from the array.
 *
 * Example:
 *   Input:  nums = [3,0,1]
 *   Output: 2
 *
 *   Input:  nums = [9,6,4,2,3,5,7,0,1]
 *   Output: 8
 *
 * Approach: XOR Bit Manipulation
 *   - Initialize result = n (the length of the array).
 *   - XOR every index i and its corresponding value nums[i] into result.
 *   - Since each number 0..n appears exactly once in either the index
 *     sequence or the array, all pairs cancel out (a ^ a = 0), leaving
 *     only the missing number.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only one accumulator variable used.
 *
 * Difficulty: Easy
 * Tags:       Array, Bit Manipulation, Math
 * ============================================================================
 */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        for (int i = 0; i < nums.size(); i++){
            result ^= nums[i] ^ i;
        }
        return result;
    }
};
