/*
 * ============================================================================
 * LeetCode #628 - Maximum Product of Three Numbers
 * https://leetcode.com/problems/maximum-product-of-three-numbers/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, find three numbers whose product is maximum
 *   and return the maximum product.
 *
 * Example:
 *   Input:  nums = [1, 2, 3]
 *   Output: 6
 *
 *   Input:  nums = [-1, -2, -3]
 *   Output: -6
 *
 * Approach: Linear Scan for Top-3 Max and Bottom-2 Min
 *   - Track the three largest values (max1 ≥ max2 ≥ max3) and the two
 *     smallest values (min1 ≤ min2) in a single pass.
 *   - The answer is the maximum of:
 *       p1 = max1 * max2 * max3  (three largest positives)
 *       p2 = min1 * min2 * max1  (two negatives × largest positive)
 *   - The p2 case handles arrays with large-magnitude negative numbers.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only five scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Math, Sorting
 * ============================================================================
 */

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i]> max1){
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i]> max2){
                max3 = max2;
                max2 = nums[i];
            } else if (nums[i]> max3){
                max3 = nums[i];
            }

            if(nums[i] < min1){
                min2 = min1;
                min1 = nums[i];
            } else if(nums[i] < min2){
                min2 = nums[i];
            }
        }
        int p1 = max1 * max2 * max3;
        int p2 = min1 * min2 * max1;
        return max(p1, p2);
    }
};
