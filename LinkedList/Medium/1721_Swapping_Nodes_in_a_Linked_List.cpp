/*
 * ============================================================================
 * LeetCode #1721 - Swapping Nodes in a Linked List
 * https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list and an integer k, swap the values of
 *   the k-th node from the beginning and the k-th node from the end.
 *   Return the head of the modified list.
 *
 * Example:
 *   Input:  head = [1,2,3,4,5], k = 2
 *   Output: [1,4,3,2,5]  (swap 2nd from start and 2nd from end)
 *
 * Approach: Two-Pointer (Fast & Slow)
 *   - Advance `temp` (and a copy `fast`) k-1 steps to reach the k-th node
 *     from the beginning.
 *   - Then advance `fast` one more step, and walk both `fast` and `slow`
 *     together until `fast` is null — at that point `slow` is at the k-th
 *     node from the end.
 *   - Swap the values of `temp` and `slow` in-place (no node relinking needed).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the list.
 *   Space: O(1) — only pointer variables used.
 *
 * Difficulty: Medium
 * Tags:       Linked List, Two Pointers
 * ============================================================================
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* fast = head;
        ListNode* slow = head;

        for (int i = 0; i < k - 1; i++) {
            temp = temp->next;
            fast = fast->next;
        }
        fast = fast->next;

        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }

        int val = temp->val;
        temp->val = slow->val;
        slow->val = val;

        return head;
    }
};
