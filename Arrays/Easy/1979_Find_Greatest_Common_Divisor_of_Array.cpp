/*
 * ============================================================================
 * LeetCode #1979 - Find Greatest Common Divisor of Array
 * https://leetcode.com/problems/find-greatest-common-divisor-of-array/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, return the greatest common divisor (GCD)
 *   of the smallest and largest numbers in the array.
 *
 * Example:
 *   Input:  nums = [2, 5, 6, 9, 10]
 *   Output: 2  (smallest = 2, largest = 10, GCD(2, 10) = 2)
 *
 * Approach: Linear Scan + Euclidean Algorithm
 *   - Find the minimum and maximum of the array in a single pass.
 *   - Apply the Euclidean algorithm on min and max to compute their GCD.
 *     (repeatedly replace a with b and b with a % b until b == 0)
 *
 * Complexity:
 *   Time:  O(n + log(min)) — O(n) scan + O(log(min)) for Euclidean GCD.
 *   Space: O(1) — only a fixed number of variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Math, Number Theory
 * ============================================================================
 */

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] > max) max = nums[i];
            if(nums[i] < min) min = nums[i];
        }
        int a = max;
        int b = min;
        while(b != 0){
            int s = b;
            b = a % b;
            a = s;
        }
        return a;
    }
};
