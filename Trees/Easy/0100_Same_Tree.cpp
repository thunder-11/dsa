/*
 * ============================================================================
 * LeetCode #100 - Same Tree
 * https://leetcode.com/problems/same-tree/
 * ============================================================================
 *
 * Problem:
 *   Given the roots of two binary trees p and q, write a function to check if
 *   they are the same or not. Two binary trees are considered the same if they
 *   are structurally identical, and the nodes have the same value.
 *
 * Example:
 *   Input:  p = [1,2,3], q = [1,2,3]
 *   Output: true
 *
 *   Input:  p = [1,2], q = [1,null,2]
 *   Output: false
 *
 * Approach: Recursive DFS
 *   - If both nodes are null, they match structurally -> return true.
 *   - If one node is null and the other is not -> return false.
 *   - If both values match, recursively check if their left subtrees match
 *     AND their right subtrees match.
 *   - Otherwise, return false.
 *
 * Complexity:
 *   Time:  O(min(N, M)) — where N and M are the number of nodes in p and q.
 *   Space: O(min(H1, H2)) — call stack depth bounded by tree height.
 *
 * Difficulty: Easy
 * Tags:       Tree, Depth-First Search, Breadth-First Search, Binary Tree
 * ============================================================================
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr || q == nullptr)
            return false;

        if (p->val == q->val) {
            return isSameTree(p->left, q->left) &&
                   isSameTree(p->right, q->right);
        }
        return false;
    }
};
