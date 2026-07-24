/*
 * ============================================================================
 * LeetCode #1260 - Shift 2D Grid
 * https://leetcode.com/problems/shift-2d-grid/
 * ============================================================================
 *
 * Problem:
 *   Given an m x n 2D grid and an integer k, shift the grid k times.
 *   In one shift:
 *     - Element at grid[i][j] moves to grid[i][j+1].
 *     - Element at grid[i][n-1] moves to grid[i+1][0].
 *     - Element at grid[m-1][n-1] moves to grid[0][0].
 *   Return the modified grid after k shifts.
 *
 * Example:
 *   Input:  grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
 *   Output: [[9,1,2],[3,4,5],[6,7,8]]
 *
 * Approach: Index Mapping (Flatten + Shift + Unflatten)
 *   - Flatten the 2D grid into a virtual 1D array using index = i*n + j.
 *   - For each element, compute its new 1D index after shifting by k (mod total).
 *   - Convert the new 1D index back to (row, col) and place the element there.
 *   - Reduce k modulo total to avoid redundant full rotations.
 *
 * Complexity:
 *   Time:  O(m * n) — every element is visited and placed exactly once.
 *   Space: O(m * n) — for the output answer grid.
 *
 * Difficulty: Easy
 * Tags:       Array, Matrix, Simulation
 * ============================================================================
 */

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int total = m*n;
        k = k % total;

        vector<vector<int>> answer(m, vector<int>(n));

        for (int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int oldIndex = i*n+j;
                int newIndex = (oldIndex + k) % total;

                int row = newIndex / n;
                int col = newIndex % n;

                answer[row][col] =grid[i][j];
            }
        }
        return answer;
    }
};
