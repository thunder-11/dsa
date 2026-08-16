/*
 * ============================================================================
 * LeetCode #234 - Palindrome Linked List
 * https://leetcode.com/problems/palindrome-linked-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a singly linked list, return true if it is a palindrome
 *   or false otherwise.
 *
 * Example:
 *   Input:  head = [1,2,2,1]
 *   Output: true
 *
 *   Input:  head = [1,2]
 *   Output: false
 *
 * Approach: Fast & Slow Pointers + In-Place Reversal
 *   Step 1 — Find the middle:
 *     Use fast & slow pointers. When fast reaches the end, slow is at the
 *     midpoint (for even length, slow is the start of the second half).
 *
 *   Step 2 — Reverse the second half:
 *     Iteratively reverse the list starting from slow using three pointers
 *     (prev, curr, next), giving us the reversed second half.
 *
 *   Step 3 — Compare both halves:
 *     Walk `first` from head and `second` from the reversed half simultaneously.
 *     If any values differ, return false. Otherwise return true.
 *     (second ends before first for odd-length lists, which is correct.)
 *
 * Complexity:
 *   Time:  O(n) — three passes: find middle, reverse, compare.
 *   Space: O(1) — in-place reversal, only pointer variables used.
 *
 * Difficulty: Easy
 * Tags:       Linked List, Two Pointers, Stack, Recursion
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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* curr = slow;

        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode* first = head;
        ListNode* second = prev;

        while(second){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};
