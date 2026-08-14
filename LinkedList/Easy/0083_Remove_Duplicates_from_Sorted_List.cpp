/*
 * ============================================================================
 * LeetCode #83 - Remove Duplicates from Sorted List
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a sorted linked list, delete all duplicates such that
 *   each element appears only once. Return the modified list.
 *
 * Example:
 *   Input:  head = [1,1,2]
 *   Output: [1,2]
 *
 *   Input:  head = [1,1,2,3,3]
 *   Output: [1,2,3]
 *
 * Approach: Iterative In-Place Skip
 *   - Use a pointer `temp` starting at head.
 *   - If temp->val == temp->next->val, skip the duplicate by pointing
 *     temp->next to temp->next->next (do NOT advance temp yet, as the
 *     new next might also be a duplicate).
 *   - Otherwise, advance temp to the next node.
 *   - Continue until temp or temp->next is null.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the list.
 *   Space: O(1) — in-place modification, only one pointer used.
 *
 * Difficulty: Easy
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;

        while (temp && temp->next) {
            if (temp->val == temp->next->val) {
                temp->next = temp->next->next;
                continue;
            }
            temp = temp->next;
        }
        return head;
    }
};
