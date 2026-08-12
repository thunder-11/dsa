/*
 * ============================================================================
 * LeetCode #141 - Linked List Cycle
 * https://leetcode.com/problems/linked-list-cycle/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list, determine if it contains a cycle.
 *   A cycle exists if a node can be reached again by continuously following
 *   the `next` pointer. Return true if a cycle exists, false otherwise.
 *
 * Example:
 *   Input:  head = [3,2,0,-4], pos = 1  (tail connects to index 1)
 *   Output: true
 *
 *   Input:  head = [1,2], pos = -1  (no cycle)
 *   Output: false
 *
 * Approach: Fast & Slow Pointers (Floyd's Cycle Detection)
 *   - `slow` moves one step at a time; `fast` moves two steps.
 *   - If there is no cycle, `fast` will reach null and we return false.
 *   - If there is a cycle, `fast` and `slow` will eventually meet at the
 *     same node inside the cycle → return true.
 *
 * Complexity:
 *   Time:  O(n) — in the worst case both pointers traverse the full list.
 *   Space: O(1) — only two pointer variables used.
 *
 * Difficulty: Easy
 * Tags:       Linked List, Two Pointers, Hash Table
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
    bool hasCycle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (fast == slow) {
                return true;
            }
        }
        return false;
    }
};
