/*
 * ============================================================================
 * LeetCode #94 - Binary Tree Inorder Traversal
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 * ============================================================================
 *
 * Problem:
 *   Given the root of a binary tree, return the inorder traversal of its
 *   nodes' values (Left → Root → Right).
 *
 * Example:
 *   Input:  root = [1,null,2,3]
 *   Output: [1,3,2]
 *
 *   Input:  root = []
 *   Output: []
 *
 *   Input:  root = [1]
 *   Output: [1]
 *
 * Approach: Recursive DFS (Inorder)
 *   - Base case: if the node is null, return immediately.
 *   - Recursively traverse the left subtree.
 *   - Visit the current node (append its value to the result).
 *   - Recursively traverse the right subtree.
 *   - A helper `inorder()` populates the member vector `ans`, which is
 *     returned by `inorderTraversal()`.
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root) {
        if (root == nullptr)
            return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
