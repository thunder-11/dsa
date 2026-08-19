/*
 * ============================================================================
 * LeetCode #119 - Pascal's Triangle II
 * https://leetcode.com/problems/pascals-triangle-ii/
 * ============================================================================
 *
 * Problem:
 *   Given an integer `rowIndex`, return the rowIndex-th (0-indexed) row of
 *   Pascal's triangle.
 *
 * Example:
 *   Input:  rowIndex = 3
 *   Output: [1,3,3,1]
 *
 *   Input:  rowIndex = 0
 *   Output: [1]
 *
 * Approach: Dynamic Programming (Build All Rows Up To rowIndex)
 *   - Build Pascal's triangle row by row up to rowIndex.
 *   - Pre-allocate each row with size i+1.
 *   - For each cell (i, j): edge cells (j==0 or j==i) are 1; inner cells
 *     are the sum of the two cells above: rows[i-1][j-1] + rows[i-1][j].
 *   - Return rows[rowIndex] as the result.
 *
 * Complexity:
 *   Time:  O(rowIndex^2) — filling every cell up to the target row.
 *   Space: O(rowIndex^2) — storing all rows in memory.
 *
 * Difficulty: Easy
 * Tags:       Array, Dynamic Programming
 * ============================================================================
 */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> rows(rowIndex+1);

        for(int i = 0; i <= rowIndex; i++){
            rows[i].resize(i+1);
        }

        for(int i = 0; i <= rowIndex; i++){
            for(int j = 0; j <=i; j++){
                if(j == 0 || j == i){
                    rows[i][j] = 1;
                } else {
                    rows[i][j] = rows[i-1][j-1] + rows[i-1][j];
                }
            }
        }


        return rows[rowIndex];
    }
};
