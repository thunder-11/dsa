/*
 * ============================================================================
 * LeetCode #118 - Pascal's Triangle
 * https://leetcode.com/problems/pascals-triangle/
 * ============================================================================
 *
 * Problem:
 *   Given an integer `numRows`, return the first numRows of Pascal's triangle.
 *   In Pascal's triangle, each number is the sum of the two numbers directly
 *   above it. The edges of every row are always 1.
 *
 * Example:
 *   Input:  numRows = 5
 *   Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
 *
 * Approach: Dynamic Programming (Row by Row)
 *   - Pre-allocate the result with numRows vectors, each of size i+1.
 *   - For each cell (i, j):
 *       - If j == 0 or j == i (edge), set to 1.
 *       - Otherwise, set to result[i-1][j-1] + result[i-1][j] (sum of parents).
 *
 * Complexity:
 *   Time:  O(numRows^2) — filling every cell in the triangle.
 *   Space: O(numRows^2) — storing all rows in the result.
 *
 * Difficulty: Easy
 * Tags:       Array, Dynamic Programming
 * ============================================================================
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);

        for (int i = 0; i < numRows; i++)
            result[i].resize(i + 1);

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    result[i][j] = 1;
                } else {
                    result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
                }
            }
        }

        return result;
    }
};
