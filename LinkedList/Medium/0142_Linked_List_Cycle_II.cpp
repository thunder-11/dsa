/*
 * ============================================================================
 * LeetCode #142 - Linked List Cycle II
 * https://leetcode.com/problems/linked-list-cycle-ii/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list, return the node where the cycle begins.
 *   If there is no cycle, return null.
 *
 * Example:
 *   Input:  head = [3,2,0,-4], pos = 1  (tail connects back to index 1)
 *   Output: node with value 2
 *
 *   Input:  head = [1,2], pos = -1  (no cycle)
 *   Output: null
 *
 * Approach: Floyd's Cycle Detection — Two-Phase
 *   Phase 1 (Detect cycle):
 *     - Move `slow` one step and `fast` two steps at a time.
 *     - If they meet, a cycle exists. If `fast` or `fast->next` is null,
 *       there is no cycle → return nullptr.
 *
 *   Phase 2 (Find cycle entry):
 *     - Reset `slow` to head, keep `fast` at the meeting point.
 *     - Move both one step at a time until they meet again.
 *     - The meeting point is the start of the cycle.
 *     - Mathematical proof: distance from head to cycle entry equals
 *       distance from meeting point to cycle entry.
 *
 * Complexity:
 *   Time:  O(n) — both phases together traverse the list at most twice.
 *   Space: O(1) — only two pointer variables used.
 *
 * Difficulty: Medium
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                break;
            }
        }

        if(!fast || !fast->next) return nullptr;

        slow = head;

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
