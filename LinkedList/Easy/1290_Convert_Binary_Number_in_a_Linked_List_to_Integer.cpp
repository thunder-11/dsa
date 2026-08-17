/*
 * ============================================================================
 * LeetCode #1290 - Convert Binary Number in a Linked List to Integer
 * https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 * ============================================================================
 *
 * Problem:
 *   Given head which is a reference node to a singly-linked list. The value
 *   of each node in the linked list is either 0 or 1. The linked list holds
 *   the binary representation of a number.
 *
 *   Return the decimal value of the number in the linked list.
 *   The most significant bit is at the head of the linked list.
 *
 * Example:
 *   Input:  head = [1,0,1]
 *   Output: 5
 *   Explanation: (101) in base 2 = (5) in base 10
 *
 *   Input:  head = [0]
 *   Output: 0
 *
 * Approach: Iterative Base-2 Accumulation (Horner's Method)
 *   - Initialize `decimal` to 0.
 *   - Traverse through each node of the linked list from head to tail:
 *       `decimal = decimal * 2 + head->val` (or `(decimal << 1) | head->val`)
 *       Advance head to head->next.
 *   - As we move from most significant bit to least significant bit,
 *     multiplying by 2 shifts existing bits left, making room for the new bit.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the linked list with n nodes.
 *   Space: O(1) — constant extra space (single accumulator variable).
 *
 * Difficulty: Easy
 * Tags:       Linked List, Math, Bit Manipulation
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
    int getDecimalValue(ListNode* head) {
        int decimal = 0;
        while (head) {
            decimal = decimal * 2 + head->val;
            head = head->next;
        }
        return decimal;
    }
};
