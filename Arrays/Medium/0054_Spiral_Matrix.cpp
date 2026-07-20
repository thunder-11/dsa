/*
 * ============================================================================
 * LeetCode #54 - Spiral Matrix
 * https://leetcode.com/problems/spiral-matrix/
 * ============================================================================
 *
 * Problem:
 *   Given an m x n matrix, return all elements of the matrix in spiral order
 *   (clockwise: left→right, top→bottom, right→left, bottom→top).
 *
 * Example:
 *   Input:  matrix = [[1,2,3],[4,5,6],[7,8,9]]
 *   Output: [1,2,3,6,9,8,7,4,5]
 *
 * Approach: Four-Boundary Shrinking
 *   - Maintain four boundaries: top, bottom, left, right.
 *   - In each iteration, traverse the four edges in order:
 *       1. Left → Right along `top` row,   then shrink top down.
 *       2. Top  → Bottom along `right` col, then shrink right inward.
 *       3. Right → Left along `bottom` row (if rows remain), then shrink bottom up.
 *       4. Bottom → Top along `left` col (if cols remain), then shrink left inward.
 *   - Repeat until the boundaries cross.
 *
 * Complexity:
 *   Time:  O(m * n) — every element is visited exactly once.
 *   Space: O(1) — excluding the output result array.
 *
 * Difficulty: Medium
 * Tags:       Array, Matrix, Simulation
 * ============================================================================
 */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }

        return result;
    }
};
