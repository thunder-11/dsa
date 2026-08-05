/*
 * ============================================================================
 * LeetCode #19 - Remove Nth Node From End of List
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list, remove the nth node from the end of the
 *   list and return its head.
 *
 * Example:
 *   Input:  head = [1,2,3,4,5], n = 2
 *   Output: [1,2,3,5]  (4th node from end removed)
 *
 *   Input:  head = [1], n = 1
 *   Output: []
 *
 * Approach: Two Pointers (Fast & Slow) — One Pass
 *   - Advance `fast` pointer n steps ahead of `slow`.
 *   - If fast becomes null, the head itself must be removed → return head->next.
 *   - Move both pointers together until fast->next is null.
 *   - At this point, slow is just before the node to remove.
 *   - Skip the target: slow->next = slow->next->next.
 *
 * Complexity:
 *   Time:  O(L) — single pass through the list (L = list length).
 *   Space: O(1) — only two pointer variables used.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i = 0; i < n; i++) fast = fast->next;

        if(!fast) return head->next;

        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};
