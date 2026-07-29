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
│   │   ├── 0066_Plus_One.cpp
│   │   ├── 0628_Maximum_Product_of_Three_Numbers.cpp
│   │   ├── 1260_Shift_2D_Grid.cpp
│   │   ├── 1464_Maximum_Product_of_Two_Elements_in_an_Array.cpp
│   │   ├── 1732_Find_the_Highest_Altitude.cpp
│   │   └── 1979_Find_Greatest_Common_Divisor_of_Array.cpp
│   └── Medium/
│       ├── 0053_Maximum_Subarray.cpp
│       └── 0054_Spiral_Matrix.cpp
├── Strings/
│   └── Easy/
│       ├── 0028_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp
│       └── 0058_Length_of_Last_Word.cpp
├── Math/
│   └── Easy/
│       ├── 3536_Maximum_Product_of_Two_Digits.cpp
│       ├── 3658_GCD_of_Odd_and_Even_Sums.cpp
│       └── 3754_Concatenate_Non_Zero_Digits_and_Multiply_by_Sum_I.cpp
├── Stack/
│   └── Easy/
│       └── 0020_Valid_Parentheses.cpp
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
| 20 | [Valid Parentheses](Stack/Easy/0020_Valid_Parentheses.cpp) | 🟢 Easy | String, Stack | Stack-Based Matching | O(n) | O(n) |
| 26 | [Remove Duplicates from Sorted Array](Arrays/Easy/0026_Remove_Duplicates_from_Sorted_Array.cpp) | 🟢 Easy | Array, Two Pointers | Two Pointers (Slow & Fast) | O(n) | O(1) |
| 53 | [Maximum Subarray](Arrays/Medium/0053_Maximum_Subarray.cpp) | 🟡 Medium | Array, DP | Kadane's Algorithm | O(n) | O(1) |
| 54 | [Spiral Matrix](Arrays/Medium/0054_Spiral_Matrix.cpp) | 🟡 Medium | Array, Matrix, Simulation | Four-Boundary Shrinking | O(m*n) | O(1) |
| 66 | [Plus One](Arrays/Easy/0066_Plus_One.cpp) | 🟢 Easy | Array, Math | Reverse Traversal with Carry | O(n) | O(1) |
| 628 | [Maximum Product of Three Numbers](Arrays/Easy/0628_Maximum_Product_of_Three_Numbers.cpp) | 🟢 Easy | Array, Math, Sorting | Linear Scan Top-3 Max & Bottom-2 Min | O(n) | O(1) |
| 1260 | [Shift 2D Grid](Arrays/Easy/1260_Shift_2D_Grid.cpp) | 🟢 Easy | Array, Matrix, Simulation | Index Mapping (Flatten + Shift) | O(m*n) | O(m*n) |
| 1464 | [Maximum Product of Two Elements in an Array](Arrays/Easy/1464_Maximum_Product_of_Two_Elements_in_an_Array.cpp) | 🟢 Easy | Array, Sorting | Linear Scan Top-2 | O(n) | O(1) |
| 1979 | [Find Greatest Common Divisor of Array](Arrays/Easy/1979_Find_Greatest_Common_Divisor_of_Array.cpp) | 🟢 Easy | Array, Math | Linear Scan + Euclidean Algorithm | O(n) | O(1) |
| 28 | [Find the Index of the First Occurrence in a String](Strings/Easy/0028_Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) | 🟢 Easy | String, Two Pointers | Brute Force (Sliding Window Match) | O(n*m) | O(1) |
| 58 | [Length of Last Word](Strings/Easy/0058_Length_of_Last_Word.cpp) | 🟢 Easy | String | Linear Scan | O(n) | O(1) |
| 1732 | [Find the Highest Altitude](Arrays/Easy/1732_Find_the_Highest_Altitude.cpp) | 🟢 Easy | Array, Prefix Sum | Prefix Sum | O(n) | O(1) |
| 3536 | [Maximum Product of Two Digits](Math/Easy/3536_Maximum_Product_of_Two_Digits.cpp) | 🟢 Easy | Math, String | Linear Scan for Top-2 Maximum | O(d) | O(d) |
| 3658 | [GCD of Odd and Even Sums](Math/Easy/3658_GCD_of_Odd_and_Even_Sums.cpp) | 🟢 Easy | Math, Number Theory | Mathematical Observation | O(1) | O(1) |
| 3754 | [Concatenate Non-Zero Digits and Multiply by Sum I](Math/Easy/3754_Concatenate_Non_Zero_Digits_and_Multiply_by_Sum_I.cpp) | 🟢 Easy | Math, String | String Manipulation | O(d) | O(d) |

---

## 🏷️ Topics Covered

| Topic | Count |
|-------|-------|
| Arrays | 10 |
| Strings | 2 |
| Stack | 1 |
| Hash Table | 1 |
| Two Pointers | 1 |
| Dynamic Programming | 1 |
| Math | 4 |
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
| 🟢 Easy   | 14     |
| 🟡 Medium | 2      |
| 🔴 Hard   | 0      |
| **Total**  | **16** |

---

*Continuously updated as I solve more problems.*
