/*
 * ============================================================================
 * LeetCode #13 - Roman to Integer
 * https://leetcode.com/problems/roman-to-integer/
 * ============================================================================
 *
 * Problem:
 *   Given a Roman numeral string `s`, convert it to an integer.
 *   Roman numerals use 7 symbols: I(1), V(5), X(10), L(50), C(100), D(500), M(1000).
 *   Subtractive notation: IV=4, IX=9, XL=40, XC=90, CD=400, CM=900.
 *
 * Example:
 *   Input:  s = "III"    → Output: 3
 *   Input:  s = "LVIII"  → Output: 58  (L=50, V=5, III=3)
 *   Input:  s = "MCMXCIV"→ Output: 1994  (M+CM+XC+IV = 1000+900+90+4)
 *
 * Approach: Linear Scan with Lookahead
 *   - Iterate through each character of the string.
 *   - For single-symbol values (M, D, V, L), add directly.
 *   - For symbols that can form subtractive pairs (C, X, I), peek at the
 *     next character: if it forms a pair (e.g. CM, CD, XC, XL, IX, IV),
 *     add the pair value and skip the next character.
 *   - Otherwise, add the base value.
 *
 * Complexity:
 *   Time:  O(n) — single pass through the string.
 *   Space: O(1) — only scalar variables used.
 *
 * Difficulty: Easy
 * Tags:       String, Math, Hash Table
 * ============================================================================
 */

class Solution {
public:
    int romanToInt(string s) {
        int i =0;
        int total =0;
        while(i < s.length()){
            if (s[i] == 'M') total +=1000;
            else if (s[i] == 'D') total += 500;
            else if (s[i] == 'C') {
                if (s[i+1] == 'M'){
                    total += 900;
                    i++;
                } else if (s[i+1] == 'D'){
                    total += 400;
                    i++;
                } else {
                    total += 100;
                }
            } else if (s[i] == 'X') {
                if (s[i+1] == 'C'){
                    total += 90;
                    i++;
                } else if (s[i+1] == 'L'){
                    total += 40;
                    i++;
                } else {
                    total += 10;
                }
            } else if (s[i] == 'I') {
                if (s[i+1] == 'V'){
                    total += 4;
                    i++;
                } else if (s[i+1] == 'X'){
                    total += 9;
                    i++;
                } else {
                    total += 1;
                }
            }
            else if (s[i] == 'V') total += 5;
            else if (s[i] == 'L') total += 50;
            i++;
        }
        
        return total;  
    }
};
