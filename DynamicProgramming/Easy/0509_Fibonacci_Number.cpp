/*
 * ============================================================================
 * LeetCode #509 - Fibonacci Number
 * https://leetcode.com/problems/fibonacci-number/
 * ============================================================================
 *
 * Problem:
 *   The Fibonacci numbers form the sequence: 0, 1, 1, 2, 3, 5, 8, 13, ...
 *   F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2) for n > 1.
 *   Given `n`, return F(n).
 *
 * Example:
 *   Input:  n = 4
 *   Output: 3  (F(4) = F(3)+F(2) = 2+1 = 3)
 *
 * Approach: Recursive (Top-Down, No Memoization)
 *   - Directly apply the mathematical definition of Fibonacci recursively.
 *   - Base cases: return n for n <= 1 (covers F(0)=0 and F(1)=1).
 *   - Each call branches into two recursive calls until the base case.
 *
 * Complexity:
 *   Time:  O(2^n) — exponential due to overlapping subproblems without caching.
 *   Space: O(n)   — recursion call stack depth.
 *
 * Note: An iterative (O(n) time, O(1) space) or memoized (O(n) time/space)
 *       approach would be more efficient for large n.
 *
 * Difficulty: Easy
 * Tags:       Math, Dynamic Programming, Recursion, Memoization
 * ============================================================================
 */

class Solution {
public:
    int fibonacci(int n){
        if(n <= 1) return n;

        return fibonacci(n-1) + fibonacci(n-2);
    }
    int fib(int n) {
        return fibonacci(n);
    }
};
