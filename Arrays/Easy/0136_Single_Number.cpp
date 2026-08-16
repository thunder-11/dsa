/*
 * ============================================================================
 * LeetCode #136 - Single Number
 * https://leetcode.com/problems/single-number/
 * ============================================================================
 *
 * Problem:
 *   Given a non-empty array of integers `nums` where every element appears
 *   twice except for one, find and return that single element.
 *   Must run in O(n) time and O(1) extra space.
 *
 * Example:
 *   Input:  nums = [2,2,1]
 *   Output: 1
 *
 *   Input:  nums = [4,1,2,1,2]
 *   Output: 4
 *
 * Approach: XOR Bit Manipulation
 *   - XOR has two key properties:
 *       1. a ^ a = 0  (any number XORed with itself is 0)
 *       2. a ^ 0 = a  (any number XORed with 0 is itself)
 *   - XOR-ing all elements together cancels out every pair, leaving only
 *     the single number that has no pair.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only one accumulator variable used.
 *
 * Difficulty: Easy
 * Tags:       Array, Bit Manipulation
 * ============================================================================
 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int num :nums){
            sum ^= num;
        }
        return sum;
    }
};
