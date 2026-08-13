/*
 * ============================================================================
 * LeetCode #21 - Merge Two Sorted Lists
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * ============================================================================
 *
 * Problem:
 *   Merge two sorted linked lists and return the head of the merged list.
 *   The merged list should be made by splicing together the nodes of the
 *   two input lists (not creating new nodes).
 *
 * Example:
 *   Input:  list1 = [1,2,4], list2 = [1,3,4]
 *   Output: [1,1,2,3,4,4]
 *
 *   Input:  list1 = [], list2 = [0]
 *   Output: [0]
 *
 * Approach: Iterative Merge with Dummy Head
 *   - Use a dummy node so the head of the merged list can be returned cleanly
 *     without special-casing the first insertion.
 *   - Maintain a `temp` pointer at the tail of the growing merged list.
 *   - At each step, compare list1->val and list2->val; attach the smaller
 *     node to temp->next and advance that list's pointer.
 *   - After the loop, attach the remaining non-null list directly.
 *
 * Complexity:
 *   Time:  O(m + n) — each node from both lists is visited exactly once.
 *   Space: O(1)     — only pointer variables; no new nodes created.
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* temp = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;
        }

        if (list1) {
            temp->next = list1;
        }

        if (list2) {
            temp->next = list2;
        }
        return dummy.next;
    }
};
