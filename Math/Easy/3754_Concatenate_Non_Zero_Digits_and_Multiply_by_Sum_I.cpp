/*
 * ============================================================================
 * LeetCode #3754 - Concatenate Non-Zero Digits and Multiply by Sum I
 * https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
 * ============================================================================
 *
 * Problem:
 *   Given a positive integer `n`, filter out all zero digits, then:
 *   - Concatenate the remaining (non-zero) digits to form a new number.
 *   - Compute the sum of those non-zero digits.
 *   Return the product of the concatenated number and the digit sum.
 *   If all digits are zero, return 0.
 *
 * Example:
 *   Input:  n = 1234
 *   Output: 110  (non-zero digits: "1234", concat = 1234, sum = 10, 1234*10 is wrong)
 *
 *   Input:  n = 1020
 *   Output: 6   (non-zero digits: "12", concat = 12, sum = 1+2 = 3, 12*3 = 36... 
 *                wait: non-zero from 1020 → "12", concat=12, sum=3, result=36)
 *
 * Approach: String Manipulation
 *   - Convert n to a string and iterate over each character.
 *   - Skip '0' digits; append non-zero digits to a result string and
 *     accumulate their integer values into a sum.
 *   - Parse the concatenated string back to a long long and multiply by sum.
 *
 * Complexity:
 *   Time:  O(d) — where d is the number of digits in n.
 *   Space: O(d) — for the concatenated string of non-zero digits.
 *
 * Difficulty: Easy
 * Tags:       Math, String
 * ============================================================================
 */

class Solution {
public:
    long long sumAndMultiply(int n) {
        string x = "";
        string str = to_string(n);
        long long sum = 0;

        for (char a: str){
            if (a != '0'){
                x += a;
                sum += a - '0';
            }
        }

        if (x.empty()) return 0;
        
        long long final = stoll(x);
        return final * sum;
    }
};
