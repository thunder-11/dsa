/*
 * ============================================================================
 * LeetCode #61 - Rotate List
 * https://leetcode.com/problems/rotate-list/
 * ============================================================================
 *
 * Problem:
 *   Given the head of a linked list, rotate the list to the right by k places.
 *
 * Example:
 *   Input:  head = [1,2,3,4,5], k = 2
 *   Output: [4,5,1,2,3]
 *
 *   Input:  head = [0,1,2], k = 4
 *   Output: [2,0,1]
 *
 * Approach: Make Circular + Break at New Tail
 *   - Find the tail and length n in one pass.
 *   - Connect tail to head to form a circular list.
 *   - Reduce k = k % n (full rotations cancel out).
 *   - Traverse to position (n - k - 1) — this is the new tail.
 *   - The node after it is the new head; break the circle there.
 *
 * Complexity:
 *   Time:  O(n) — two passes at most (find length + find new tail).
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
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || k == 0)
            return head;
        ListNode* tail = head;
        ListNode* curr = head;
        int n = 1;

        while (tail->next) {
            tail = tail->next;
            n++;
        }
        tail->next = head;

        k %= n;
        if (k == 0) {
            tail->next = nullptr;
            return head;
        }

        for (int i = 0; i < n - k - 1; i++) {
            curr = curr->next;
        }
        ListNode* newhead = curr->next;
        curr->next = nullptr;

        return newhead;
    }
};
