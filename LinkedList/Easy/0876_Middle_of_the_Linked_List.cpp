/*
 * ============================================================================
 * LeetCode #876 - Middle of the Linked List
 * https://leetcode.com/problems/middle-of-the-linked-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a singly linked list, return the middle node.
 *   If there are two middle nodes, return the second middle node.
 *
 * Example:
 *   Input:  head = [1,2,3,4,5]
 *   Output: [3,4,5]  (node with value 3 is the middle)
 *
 *   Input:  head = [1,2,3,4,5,6]
 *   Output: [4,5,6]  (two middles: 3 and 4 → return second)
 *
 * Approach: Fast & Slow Pointers (Floyd's Tortoise)
 *   - `slow` moves one step at a time; `fast` moves two steps at a time.
 *   - When `fast` reaches the end (null or last node), `slow` is exactly
 *     at the middle (or second middle for even-length lists).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the list.
 *   Space: O(1) — only two pointer variables used.
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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
