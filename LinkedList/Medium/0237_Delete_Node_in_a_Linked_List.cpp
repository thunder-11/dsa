/*
 * ============================================================================
 * LeetCode #237 - Delete Node in a Linked List
 * https://leetcode.com/problems/delete-node-in-a-linked-list/
 * ============================================================================
 *
 * Problem:
 *   There is a singly-linked list `head` and we want to delete a node in it.
 *   You are given the node to be deleted `node`. You will not be given access
 *   to the first node of `head`.
 *
 *   All the values of the linked list are unique, and it is guaranteed that
 *   the given node is not the last node in the linked list.
 *
 *   Delete the given node by modifying the list in-place such that:
 *   - The value of the given node does not exist in the list anymore.
 *   - The number of nodes in the list decreases by one.
 *   - Relative ordering of all preceding and succeeding nodes is preserved.
 *
 * Example:
 *   Input:  head = [4,5,1,9], node = 5
 *   Output: [4,1,9]
 *   Explanation: Given node 5, the list becomes 4 -> 1 -> 9.
 *
 *   Input:  head = [4,5,1,9], node = 1
 *   Output: [4,5,9]
 *   Explanation: Given node 1, the list becomes 4 -> 5 -> 9.
 *
 * Approach: Value Copy & Next Node Bypass
 *   - Since we are not given the head or previous node, we cannot update prev->next.
 *   - Copy the value of the next node into the current node (`node->val = node->next->val`).
 *   - Bypass the next node by linking directly to `node->next->next`.
 *   - This effectively replaces the target node's content and removes the duplicate successor.
 *
 * Complexity:
 *   Time:  O(1) — constant time operation.
 *   Space: O(1) — no extra memory allocated.
 *
 * Difficulty: Medium
 * Tags:       Linked List
 * ============================================================================
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
