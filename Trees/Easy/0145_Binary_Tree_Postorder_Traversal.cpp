/*
 * ============================================================================
 * LeetCode #145 - Binary Tree Postorder Traversal
 * https://leetcode.com/problems/binary-tree-postorder-traversal/
 * ============================================================================
 *
 * Problem:
 *   Given the root of a binary tree, return the postorder traversal of its
 *   nodes' values (Left → Right → Root).
 *
 * Example:
 *   Input:  root = [1,null,2,3]
 *   Output: [3,2,1]
 *
 *   Input:  root = []
 *   Output: []
 *
 *   Input:  root = [1]
 *   Output: [1]
 *
 * Approach: Recursive DFS (Postorder)
 *   - Base case: if the node is null, return immediately.
 *   - Recursively traverse the left subtree.
 *   - Recursively traverse the right subtree.
 *   - Visit the current node (append its value to the result).
 *   - A helper `post()` populates the member vector `ans`, which is
 *     returned by `postorderTraversal()`.
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
    void post(TreeNode* root){
        if(root == nullptr) return;
        
        post(root->left);
        post(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        post(root);
        return ans;
    }
};
