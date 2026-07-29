/*
 * ============================================================================
 * LeetCode #20 - Valid Parentheses
 * https://leetcode.com/problems/valid-parentheses/
 * ============================================================================
 *
 * Problem:
 *   Given a string `s` containing only '(', ')', '{', '}', '[' and ']',
 *   determine if the input string is valid. A string is valid if:
 *     - Open brackets are closed by the same type of bracket.
 *     - Open brackets are closed in the correct order.
 *     - Every close bracket has a corresponding open bracket.
 *
 * Example:
 *   Input:  s = "()[]{}"
 *   Output: true
 *
 *   Input:  s = "(]"
 *   Output: false
 *
 * Approach: Stack-Based Matching
 *   - Push every opening bracket onto the stack.
 *   - For every closing bracket, check if the stack is non-empty and the top
 *     matches the expected opening bracket. If not, return false.
 *   - At the end, the stack must be empty (all opens were matched).
 *
 * Complexity:
 *   Time:  O(n) — single pass through the string.
 *   Space: O(n) — stack can hold at most n/2 opening brackets.
 *
 * Difficulty: Easy
 * Tags:       String, Stack
 * ============================================================================
 */

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '{' || ch == '(' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();

                if ((ch == '}' && top != '{') || (ch == ')' && top != '(') ||
                    (ch == ']' && top != '['))
                    return false;
            }
        }

        return st.empty();
    }
};
