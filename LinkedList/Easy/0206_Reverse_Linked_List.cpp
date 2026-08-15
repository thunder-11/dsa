/*
 * ============================================================================
 * LeetCode #206 - Reverse Linked List
 * https://leetcode.com/problems/reverse-linked-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a singly linked list, reverse the list and return
 *   the reversed list's head.
 *
 * Example:
 *   Input:  head = [1,2,3,4,5]
 *   Output: [5,4,3,2,1]
 *
 *   Input:  head = []
 *   Output: []
 *
 * Approach: Iterative Three-Pointer Reversal
 *   - Maintain three pointers: `prev` (initially null), `curr` (at head),
 *     and `temp` (temporary storage for the next node).
 *   - At each step:
 *       1. Save curr->next into temp.
 *       2. Reverse the link: curr->next = prev.
 *       3. Advance prev to curr, and curr to temp.
 *   - When curr becomes null, `prev` is the new head of the reversed list.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the list.
 *   Space: O(1) — only three pointer variables used.
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* temp;

        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
