/*
 * ============================================================================
 * LeetCode #203 - Remove Linked List Elements
 * https://leetcode.com/problems/remove-linked-list-elements/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list and an integer `val`, remove all nodes
 *   whose val equals `val`, and return the new head.
 *
 * Example:
 *   Input:  head = [1,2,6,3,4,5,6], val = 6
 *   Output: [1,2,3,4,5]
 *
 *   Input:  head = [7,7,7,7], val = 7
 *   Output: []
 *
 * Approach: Iterative with Dummy Head
 *   - Create a dummy node pointing to head to avoid special-casing head removal.
 *   - Use `curr` starting at the dummy node.
 *   - If curr->next->val == val, skip that node (curr->next = curr->next->next)
 *     and do NOT advance curr, as the new next might also match.
 *   - Otherwise advance curr to the next node.
 *   - Return dummy.next as the new head.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the list.
 *   Space: O(1) — only pointer variables used; dummy is stack-allocated.
 *
 * Difficulty: Easy
 * Tags:       Linked List, Recursion
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* curr = &dummy;

        while (curr->next) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
                continue;
            }
            curr = curr->next;
        }
        return dummy.next;
    }
};
