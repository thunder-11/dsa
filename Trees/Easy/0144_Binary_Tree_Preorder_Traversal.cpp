/*
 * ============================================================================
 * LeetCode #144 - Binary Tree Preorder Traversal
 * https://leetcode.com/problems/binary-tree-preorder-traversal/
 * ============================================================================
 *
 * Problem:
 *   Given the root of a binary tree, return the preorder traversal of its
 *   nodes' values (Root → Left → Right).
 *
 * Example:
 *   Input:  root = [1,null,2,3]
 *   Output: [1,2,3]
 *
 *   Input:  root = []
 *   Output: []
 *
 *   Input:  root = [1]
 *   Output: [1]
 *
 * Approach: Recursive DFS (Preorder)
 *   - Base case: if the node is null, return immediately.
 *   - Visit the current node first (append its value to the result).
 *   - Recursively traverse the left subtree.
 *   - Recursively traverse the right subtree.
 *   - A helper `preorder()` populates the member vector `ans`, which is
 *     returned by `preorderTraversal()`.
 *
 * Complexity:
 *   Time:  O(n) — every node is visited exactly once.
 *   Space: O(h) — call stack depth equals the height of the tree
 *                 (O(log n) for balanced, O(n) worst-case skewed).
 *
 * Difficulty: Easy
 * Tags:       Tree, Depth-First Search, Binary Tree, Stack, Recursion
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void preorder(TreeNode* root) {
        if (root == nullptr)
            return;
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};
