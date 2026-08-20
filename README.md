# 🚀 DSA — LeetCode Solutions

A curated collection of my solutions to LeetCode problems, organized by topic and difficulty.  
Each solution includes a detailed comment header covering the **problem statement**, **approach**, **time & space complexity**, and relevant **tags**.

---

## 📂 Repository Structure

```
dsa/
├── Arrays/
│   ├── Easy/
│   │   ├── 0001_Two_Sum.cpp
│   │   ├── 0026_Remove_Duplicates_from_Sorted_Array.cpp
│   │   ├── 0027_Remove_Element.cpp
│   │   ├── 0066_Plus_One.cpp
│   │   ├── 0121_Best_Time_to_Buy_and_Sell_Stock.cpp
│   │   ├── 0136_Single_Number.cpp
│   │   ├── 0268_Missing_Number.cpp
│   │   ├── 0628_Maximum_Product_of_Three_Numbers.cpp
│   │   ├── 1260_Shift_2D_Grid.cpp
│   │   ├── 1464_Maximum_Product_of_Two_Elements_in_an_Array.cpp
│   │   ├── 1732_Find_the_Highest_Altitude.cpp
│   │   ├── 1979_Find_Greatest_Common_Divisor_of_Array.cpp
│   │   ├── 2996_Smallest_Missing_Integer_Greater_Than_Sequential_Prefix_Sum.cpp
│   │   ├── 3731_Find_Missing_Elements.cpp
│   │   ├── 3895_Count_Digit_Appearances.cpp
│   │   └── 3069_Distribute_Elements_Into_Two_Arrays_I.cpp
│   └── Medium/
│       ├── 0053_Maximum_Subarray.cpp
│       ├── 0054_Spiral_Matrix.cpp
│       └── 3282_Reach_End_of_Array_With_Max_Score.cpp
├── Strings/
│   ├── Easy/
│   │   ├── 0013_Roman_to_Integer.cpp
│   │   ├── 0014_Longest_Common_Prefix.cpp
│   │   ├── 0028_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp
│   │   ├── 0058_Length_of_Last_Word.cpp
│   │   ├── 0125_Valid_Palindrome.cpp
│   │   └── 0884_Uncommon_Words_from_Two_Sentences.cpp
│   └── Medium/
│       └── 0680_Valid_Palindrome_II.cpp
├── Math/
│   ├── Easy/
│   │   ├── 0009_Palindrome_Number.cpp
│   │   ├── 0231_Power_of_Two.cpp
│   │   ├── 0258_Add_Digits.cpp
│   │   ├── 1323_Maximum_69_Number.cpp
│   │   ├── 3014_Minimum_Number_of_Pushes_to_Type_Word_I.cpp
│   │   ├── 3345_Smallest_Divisible_Digit_Product_I.cpp
│   │   ├── 3536_Maximum_Product_of_Two_Digits.cpp
│   │   ├── 3658_GCD_of_Odd_and_Even_Sums.cpp
│   │   └── 3754_Concatenate_Non_Zero_Digits_and_Multiply_by_Sum_I.cpp
│   └── Medium/
│       └── 0877_Stone_Game.cpp
├── Stack/
│   └── Easy/
│       └── 0020_Valid_Parentheses.cpp
├── DynamicProgramming/
│   └── Easy/
│       ├── 0070_Climbing_Stairs.cpp
│       ├── 0118_Pascals_Triangle.cpp
│       ├── 0119_Pascals_Triangle_II.cpp
│       └── 0509_Fibonacci_Number.cpp
├── LinkedList/
│   ├── Easy/
│   │   ├── 0021_Merge_Two_Sorted_Lists.cpp
│   │   ├── 0083_Remove_Duplicates_from_Sorted_List.cpp
│   │   ├── 0141_Linked_List_Cycle.cpp
│   │   ├── 0203_Remove_Linked_List_Elements.cpp
│   │   ├── 0206_Reverse_Linked_List.cpp
│   │   ├── 0234_Palindrome_Linked_List.cpp
│   │   ├── 0876_Middle_of_the_Linked_List.cpp
│   │   └── 1290_Convert_Binary_Number_in_a_Linked_List_to_Integer.cpp
│   └── Medium/
│       ├── 0019_Remove_Nth_Node_From_End_of_List.cpp
│       ├── 0061_Rotate_List.cpp
│       ├── 0142_Linked_List_Cycle_II.cpp
│       ├── 0237_Delete_Node_in_a_Linked_List.cpp
│       └── 1721_Swapping_Nodes_in_a_Linked_List.cpp
└── README.md
```

Solutions are organized as:

```
<Topic>/<Difficulty>/<ProblemNumber>_<ProblemName>.cpp
```

---

## 📋 Solutions

| # | Problem | Difficulty | Topic | Approach | Time | Space |
|---|---------|------------|-------|----------|------|-------|
| 1 | [Two Sum](Arrays/Easy/0001_Two_Sum.cpp) | 🟢 Easy | Array, Hash Table | Hash Map (One-Pass) | O(n) | O(n) |
| 13 | [Roman to Integer](Strings/Easy/0013_Roman_to_Integer.cpp) | 🟢 Easy | String, Math | Linear Scan with Lookahead | O(n) | O(1) |
| 19 | [Remove Nth Node From End of List](LinkedList/Medium/0019_Remove_Nth_Node_From_End_of_List.cpp) | 🟡 Medium | Linked List, Two Pointers | Fast & Slow Pointers (One Pass) | O(L) | O(1) |
| 21 | [Merge Two Sorted Lists](LinkedList/Easy/0021_Merge_Two_Sorted_Lists.cpp) | 🟢 Easy | Linked List, Recursion | Iterative Merge with Dummy Head | O(m+n) | O(1) |
| 61 | [Rotate List](LinkedList/Medium/0061_Rotate_List.cpp) | 🟡 Medium | Linked List, Two Pointers | Make Circular + Break at New Tail | O(n) | O(1) |
| 83 | [Remove Duplicates from Sorted List](LinkedList/Easy/0083_Remove_Duplicates_from_Sorted_List.cpp) | 🟢 Easy | Linked List, Two Pointers | Iterative In-Place Skip | O(n) | O(1) |
| 141 | [Linked List Cycle](LinkedList/Easy/0141_Linked_List_Cycle.cpp) | 🟢 Easy | Linked List, Two Pointers | Floyd's Cycle Detection | O(n) | O(1) |
| 142 | [Linked List Cycle II](LinkedList/Medium/0142_Linked_List_Cycle_II.cpp) | 🟡 Medium | Linked List, Two Pointers | Floyd's Two-Phase Detection | O(n) | O(1) |
| 1721 | [Swapping Nodes in a Linked List](LinkedList/Medium/1721_Swapping_Nodes_in_a_Linked_List.cpp) | 🟡 Medium | Linked List, Two Pointers | Fast & Slow Two-Pointer Value Swap | O(n) | O(1) |
| 203 | [Remove Linked List Elements](LinkedList/Easy/0203_Remove_Linked_List_Elements.cpp) | 🟢 Easy | Linked List, Recursion | Iterative with Dummy Head | O(n) | O(1) |
| 206 | [Reverse Linked List](LinkedList/Easy/0206_Reverse_Linked_List.cpp) | 🟢 Easy | Linked List, Recursion | Iterative Three-Pointer Reversal | O(n) | O(1) |
| 234 | [Palindrome Linked List](LinkedList/Easy/0234_Palindrome_Linked_List.cpp) | 🟢 Easy | Linked List, Two Pointers | Fast & Slow + In-Place Reversal | O(n) | O(1) |
| 121 | [Best Time to Buy and Sell Stock](Arrays/Easy/0121_Best_Time_to_Buy_and_Sell_Stock.cpp) | 🟢 Easy | Array, DP, Greedy | Greedy Running Minimum | O(n) | O(1) |
| 136 | [Single Number](Arrays/Easy/0136_Single_Number.cpp) | 🟢 Easy | Array, Bit Manipulation | XOR Bit Manipulation | O(n) | O(1) |
| 268 | [Missing Number](Arrays/Easy/0268_Missing_Number.cpp) | 🟢 Easy | Array, Bit Manipulation, Math | XOR Bit Manipulation | O(n) | O(1) |
| 231 | [Power of Two](Math/Easy/0231_Power_of_Two.cpp) | 🟢 Easy | Math, Bit Manipulation | Bitwise AND Trick | O(1) | O(1) |
| 1323 | [Maximum 69 Number](Math/Easy/1323_Maximum_69_Number.cpp) | 🟢 Easy | Math, Greedy | Greedy — First 6 to 9 | O(d) | O(d) |
| 9 | [Palindrome Number](Math/Easy/0009_Palindrome_Number.cpp) | 🟢 Easy | Math, Two Pointers | String Conversion + Two Pointers | O(d) | O(d) |
| 14 | [Longest Common Prefix](Strings/Easy/0014_Longest_Common_Prefix.cpp) | 🟢 Easy | String, Trie | Vertical Scanning | O(S) | O(m) |
| 20 | [Valid Parentheses](Stack/Easy/0020_Valid_Parentheses.cpp) | 🟢 Easy | String, Stack | Stack-Based Matching | O(n) | O(n) |
| 125 | [Valid Palindrome](Strings/Easy/0125_Valid_Palindrome.cpp) | 🟢 Easy | String, Two Pointers | Filter + Two Pointers | O(n) | O(n) |
| 258 | [Add Digits](Math/Easy/0258_Add_Digits.cpp) | 🟢 Easy | Math, Simulation | Iterative Digit Sum | O(log n) | O(1) |
| 26 | [Remove Duplicates from Sorted Array](Arrays/Easy/0026_Remove_Duplicates_from_Sorted_Array.cpp) | 🟢 Easy | Array, Two Pointers | Two Pointers (Slow & Fast) | O(n) | O(1) |
| 27 | [Remove Element](Arrays/Easy/0027_Remove_Element.cpp) | 🟢 Easy | Array, Two Pointers | Two Pointers (Overwrite) | O(n) | O(1) |
| 53 | [Maximum Subarray](Arrays/Medium/0053_Maximum_Subarray.cpp) | 🟡 Medium | Array, DP | Kadane's Algorithm | O(n) | O(1) |
| 54 | [Spiral Matrix](Arrays/Medium/0054_Spiral_Matrix.cpp) | 🟡 Medium | Array, Matrix, Simulation | Four-Boundary Shrinking | O(m*n) | O(1) |
| 66 | [Plus One](Arrays/Easy/0066_Plus_One.cpp) | 🟢 Easy | Array, Math | Reverse Traversal with Carry | O(n) | O(1) |
| 70 | [Climbing Stairs](DynamicProgramming/Easy/0070_Climbing_Stairs.cpp) | 🟢 Easy | Math, DP, Memoization | Space-Optimized Fibonacci | O(n) | O(1) |
| 118 | [Pascal's Triangle](DynamicProgramming/Easy/0118_Pascals_Triangle.cpp) | 🟢 Easy | Array, DP | DP Row by Row | O(n²) | O(n²) |
| 119 | [Pascal's Triangle II](DynamicProgramming/Easy/0119_Pascals_Triangle_II.cpp) | 🟢 Easy | Array, DP | Build All Rows Up To rowIndex | O(n²) | O(n²) |
| 509 | [Fibonacci Number](DynamicProgramming/Easy/0509_Fibonacci_Number.cpp) | 🟢 Easy | Math, DP, Recursion | Recursive (Top-Down) | O(2^n) | O(n) |
| 876 | [Middle of the Linked List](LinkedList/Easy/0876_Middle_of_the_Linked_List.cpp) | 🟢 Easy | Linked List, Two Pointers | Fast & Slow Pointers | O(n) | O(1) |
| 628 | [Maximum Product of Three Numbers](Arrays/Easy/0628_Maximum_Product_of_Three_Numbers.cpp) | 🟢 Easy | Array, Math, Sorting | Linear Scan Top-3 Max & Bottom-2 Min | O(n) | O(1) |
| 680 | [Valid Palindrome II](Strings/Medium/0680_Valid_Palindrome_II.cpp) | 🟡 Medium | String, Two Pointers, Greedy | Two Pointers + Helper Check | O(n) | O(1) |
| 877 | [Stone Game](Math/Medium/0877_Stone_Game.cpp) | 🟡 Medium | Array, Math, DP, Game Theory | Mathematical Observation | O(1) | O(1) |
| 1260 | [Shift 2D Grid](Arrays/Easy/1260_Shift_2D_Grid.cpp) | 🟢 Easy | Array, Matrix, Simulation | Index Mapping (Flatten + Shift) | O(m*n) | O(m*n) |
| 1464 | [Maximum Product of Two Elements in an Array](Arrays/Easy/1464_Maximum_Product_of_Two_Elements_in_an_Array.cpp) | 🟢 Easy | Array, Sorting | Linear Scan Top-2 | O(n) | O(1) |
| 1979 | [Find Greatest Common Divisor of Array](Arrays/Easy/1979_Find_Greatest_Common_Divisor_of_Array.cpp) | 🟢 Easy | Array, Math | Linear Scan + Euclidean Algorithm | O(n) | O(1) |
| 28 | [Find the Index of the First Occurrence in a String](Strings/Easy/0028_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) | 🟢 Easy | String, Two Pointers | Brute Force (Sliding Window Match) | O(n*m) | O(1) |
| 58 | [Length of Last Word](Strings/Easy/0058_Length_of_Last_Word.cpp) | 🟢 Easy | String | Linear Scan | O(n) | O(1) |
| 1732 | [Find the Highest Altitude](Arrays/Easy/1732_Find_the_Highest_Altitude.cpp) | 🟢 Easy | Array, Prefix Sum | Prefix Sum | O(n) | O(1) |
| 3014 | [Minimum Number of Pushes to Type Word I](Math/Easy/3014_Minimum_Number_of_Pushes_to_Type_Word_I.cpp) | 🟢 Easy | Math, Greedy, String | Greedy Batch Assignment | O(n) | O(1) |
| 3536 | [Maximum Product of Two Digits](Math/Easy/3536_Maximum_Product_of_Two_Digits.cpp) | 🟢 Easy | Math, String | Linear Scan for Top-2 Maximum | O(d) | O(d) |
| 3345 | [Smallest Divisible Digit Product I](Math/Easy/3345_Smallest_Divisible_Digit_Product_I.cpp) | 🟢 Easy | Math, Brute Force | Linear Search | O(k*d) | O(1) |
| 3282 | [Reach End of Array With Max Score](Arrays/Medium/3282_Reach_End_of_Array_With_Max_Score.cpp) | 🟡 Medium | Array, Greedy | Greedy Running Maximum | O(n) | O(1) |
| 3658 | [GCD of Odd and Even Sums](Math/Easy/3658_GCD_of_Odd_and_Even_Sums.cpp) | 🟢 Easy | Math, Number Theory | Mathematical Observation | O(1) | O(1) |
| 3754 | [Concatenate Non-Zero Digits and Multiply by Sum I](Math/Easy/3754_Concatenate_Non_Zero_Digits_and_Multiply_by_Sum_I.cpp) | 🟢 Easy | Math, String | String Manipulation | O(d) | O(d) |
| 3731 | [Find Missing Elements](Arrays/Easy/3731_Find_Missing_Elements.cpp) | 🟢 Easy | Array, Hash Table | Range Scan with Linear Search | O(k*n) | O(k) |
| 3895 | [Count Digit Appearances](Arrays/Easy/3895_Count_Digit_Appearances.cpp) | 🟢 Easy | Array, Math | Digit Extraction | O(n*d) | O(1) |
| 3069 | [Distribute Elements Into Two Arrays I](Arrays/Easy/3069_Distribute_Elements_Into_Two_Arrays_I.cpp) | 🟢 Easy | Array, Simulation | Greedy Simulation | O(n) | O(n) |
| 884 | [Uncommon Words from Two Sentences](Strings/Easy/0884_Uncommon_Words_from_Two_Sentences.cpp) | 🟢 Easy | String, Hash Table | Frequency Map | O(n+m) | O(k) |
| 2996 | [Smallest Missing Integer Greater Than Sequential Prefix Sum](Arrays/Easy/2996_Smallest_Missing_Integer_Greater_Than_Sequential_Prefix_Sum.cpp) | 🟢 Easy | Array, Hash Table | Hash Set + Prefix Sum | O(n) | O(n) |
| 1290 | [Convert Binary Number in a Linked List to Integer](LinkedList/Easy/1290_Convert_Binary_Number_in_a_Linked_List_to_Integer.cpp) | 🟢 Easy | Linked List, Math | Base-2 Horner's Accumulation | O(n) | O(1) |
| 237 | [Delete Node in a Linked List](LinkedList/Medium/0237_Delete_Node_in_a_Linked_List.cpp) | 🟡 Medium | Linked List | Value Copy & Next Bypass | O(1) | O(1) |

---

## 🏷️ Topics Covered

| Topic | Count |
|-------|-------|
| Arrays | 19 |
| Strings | 8 |
| Linked List | 13 |
| Stack | 1 |
| Hash Table | 1 |
| Two Pointers | 1 |
| Dynamic Programming | 5 |
| Math | 11 |
| Prefix Sum | 1 |

---

## 🛠️ Comment Style

Every solution follows a consistent comment format for readability and interview readiness:

```
/*
 * ============================================================================
 * LeetCode #<number> - <Problem Name>
 * <URL>
 * ============================================================================
 *
 * Problem:    <problem statement>
 * Example:    <sample input/output>
 * Approach:   <algorithm / technique used>
 * Complexity: <time and space analysis>
 * Difficulty: <Easy | Medium | Hard>
 * Tags:       <relevant topic tags>
 * ============================================================================
 */
```

---

## 🧑‍💻 Language

All solutions are written in **C++**.

---

## 📌 How to Use

1. Browse by **topic folder** (e.g., `Arrays/`) then by **difficulty** (`Easy/`, `Medium/`, `Hard/`).
2. Each file is named `<ProblemNumber>_<ProblemName>.cpp` for easy lookup.
3. Read the comment header at the top of each file for a full breakdown before diving into the code.

---

## 📈 Progress

| Difficulty | Solved |
|------------|--------|
| 🟢 Easy   | 44     |
| 🟡 Medium | 10     |
| 🔴 Hard   | 0      |
| **Total**  | **54** |

---

*Continuously updated as I solve more problems.*
