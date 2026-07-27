/*
 * ============================================================================
 * LeetCode #1464 - Maximum Product of Two Elements in an Array
 * https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 * ============================================================================
 *
 * Problem:
 *   Given an integer array `nums`, choose indices i and j (i != j) such that
 *   (nums[i]-1) * (nums[j]-1) is maximized. Return the maximum value.
 *
 * Example:
 *   Input:  nums = [3, 4, 5, 2]
 *   Output: 12  (max two are 5 and 4 → (5-1)*(4-1) = 12)
 *
 * Approach: Linear Scan for Top-2 Maximum
 *   - Track the two largest values (max1 ≥ max2) in a single pass.
 *   - If the current element exceeds max1, push max1 down to max2 and update max1.
 *   - Otherwise if it exceeds max2, update max2 only.
 *   - Return (max1-1) * (max2-1).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the array.
 *   Space: O(1) — only two scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       Array, Sorting
 * ============================================================================
 */

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max1){
                max2 = max1;
                max1 = nums[i];
            } else if(nums[i] > max2){
                max2 = nums[i];
            }
        }

        return (max1-1)*(max2-1);
    }
};
