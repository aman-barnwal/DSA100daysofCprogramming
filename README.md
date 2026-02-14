# 100 Days of C Programming and DSA

**Name:** Aman Barnwal  
**SAP ID:** 590028933  
**Batch:** 78  

---

## Introduction

This repository contains the work completed as part of the **100 Days of Code** initiative with a focus on **C Programming** and **Data Structures & Algorithms (DSA)**.  
The objective of this practice is to build strong programming fundamentals, improve logical reasoning, and apply algorithmic concepts through consistent hands-on coding.

Each section below represents the problems solved on a particular day, along with source code references and output screenshots.

---

## Day 01

### Problem 1: Two Sum (LeetCode)

**Description**  
Given an integer array and a target value, identify two distinct indices such that the sum of the elements at those indices equals the target.  
Exactly one valid solution exists for each input.

**Concepts Used**
- Arrays  
- Nested loops  
- Index-based traversal  

**Output Screenshot**

![LeetCode Output](Day01/day01leetcode.png)

---

### Problem 2: Insert Element at Given Position in Array

**Description**  
A C program to insert an element `x` at a specified **1-based position** in an array of `n` integers.  
All elements following the position are shifted one index to the right.

**Concepts Used**
- Arrays  
- Index manipulation  
- Element shifting  

**Source Code**  
[Day01/insert_element_at_position.c](Day01/insert_element_at_position.c)

**Output Screenshot**

![Program Output](Day01/insert_element_at_position.png)

---

## Day 02

### Problem 1: Delete Element at Given Position in Array

**Description**  
This program deletes an element from a given **1-based index** in an array.  
Remaining elements are shifted left to maintain the array structure.

**Concepts Used**
- Arrays  
- Index-based traversal  
- Element shifting  

**Source Code**  
[Day02/delete_element.c](Day02/delete_element.c)

**Output Screenshot**

![Program Output](Day02/delete_element.png)

---

### Problem 2: Best Time to Buy and Sell Stock (LeetCode)

**Description**  
An array representing stock prices on consecutive days is provided.  
The objective is to choose one day to buy and a later day to sell to maximize profit.  
If no profit is possible, the output is `0`.

**Concepts Used**
- Greedy approach  
- Single-pass traversal  

**Time Complexity**  
O(n)

**Output Screenshot**

![LeetCode Output](Day02/leetcodeday02.png)

---

## Day 03

### Problem: Linear Search and Missing Number

**Description**  
This day focuses on basic searching techniques using arrays.  
The tasks include performing linear search to locate a given element and identifying a missing number from a sequence.

**Concepts Used**
- Arrays  
- Linear traversal  
- Conditional statements  

**Source Code**  
[Day03/linear_search.c](Day03/linear_search.c)

**Output Screenshot**

![Program Output](Day03/linear_search.png)

**Platform Submission Screenshot**

![Submission Output](Day03/solution.png)

---

## Day 04

### Problem 1: Reverse an Array Using Two-Pointer Technique

**Description**  
Given an array of integers, the task is to reverse the array **in-place** using the two-pointer approach.  
Elements from both ends are swapped until the entire array is reversed.

**Concepts Used**
- Two-pointer technique  
- In-place array modification  

**Source Code**  
[Day04/reverse_array.c](Day04/reverse_array.c)

**Output Screenshot**

![Program Output](Day04/reverse_array.png)

---

### Problem 2: Remove Element from Array (LeetCode)

**Description**  
Given an integer array `nums` and a value `val`, remove all occurrences of `val` **in-place**.  
The function returns the number of elements not equal to `val`.  
The order of elements may change.

**Concepts Used**
- Arrays  
- Conditional filtering  

**Output Screenshot**

![LeetCode Output](Day04/remove_element.png)

---

## Day 05

### Problem 1: Merge Two Sorted Logs

**Description**  
Two sorted arrays representing arrival times from two different servers are provided.  
The task is to merge both arrays into a single sorted list while preserving chronological order.

**Concepts Used**
- Arrays  
- Two-pointer traversal  
- Merging logic  

**Source Code**  
[Day05/merge_logs.c](Day05/merge_logs.c)

**Output Screenshot**

![Program Output](Day05/merge_logs.png)

---

### Problem 2: Merge Two Sorted Arrays (LeetCode)

**Description**  
Two sorted arrays `nums1` and `nums2` are given along with integers `m` and `n`.  
The goal is to merge `nums2` into `nums1` so that the final array remains sorted in non-decreasing order.  
The merged result is stored directly in `nums1`.

**Concepts Used**
- Arrays  
- Two-pointer technique  
- In-place merging  

**Output Screenshot**

![LeetCode Output](Day05/merge_sorted_array.png)

---

## Day 06

### Problem 1: Remove Duplicates from Sorted Array

**Description**  
Since the array is already sorted, we traverse it once and compare each element with the previous unique element.  
Only the first occurrence of each value is kept, and duplicates are skipped to produce a list of unique elements.

**Concepts Used**
- Arrays  
- Two-pointer technique  
- In-place modification  

**Source Code**  
[Day06/remove_duplicates.c](Day06/remove_duplicates.c)

**Output Screenshot**

![Program Output](Day06/remove_duplicates.png)

---

### Problem 2: Move Zeroes (LeetCode)

**Description**  
All non-zero elements are shifted to the front of the array while maintaining their relative order.  
Zeroes are automatically moved to the end by overwriting positions during traversal.

**Concepts Used**
- Arrays  
- Two-pointer technique  
- In-place updates  

**Output Screenshot**

![LeetCode Output](Day06/movezeroes.png)

---

## Day 07

### Problem 1: Fibonacci Number Using Recursion

**Description**  
A recursive function is used to compute the n-th Fibonacci number by directly applying the recurrence relation fib(n) = fib(n−1) + fib(n−2).  
The base cases fib(0) = 0 and fib(1) = 1 are handled explicitly to terminate recursion.

**Concepts Used**
- Recursion  
- Function calls  
- Mathematical recurrence  

**Source Code**  
[Day07/fibonacci_recursive.c](Day07/fibonacci_recursive.c)

**Output Screenshot**

![Program Output](Day07/fibonacci_recursive.png)

---

### Problem 2: Fibonacci Number (LeetCode – Problem 509)

**Description**  
The Fibonacci value is calculated based on the definition that each number is the sum of the previous two numbers in the sequence.  
This problem reinforces understanding of recursion and sequence-based computation.

**Concepts Used**
- Recursion  
- Mathematical sequence  

**Output Screenshot**

![LeetCode Output](Day07/509_fibonacci_number.png)

---

## Day 08

### Problem 1: Fibonacci Number Using Recursion

**Description**  
A recursive function is implemented to compute the n-th Fibonacci number by repeatedly calling the function for smaller values of n.  
The base conditions fib(0) = 0 and fib(1) = 1 ensure correct termination of the recursion.

**Concepts Used**
- Recursion  
- Function calls  
- Mathematical recurrence  

**Source Code**  
[Day08/DSA_Power.c](Day08/DSA_Power.c)

**Output Screenshot**

![Program Output](Day08/DSA_Power.png)

---

### Problem 2: Fibonacci Number Calculation (LeetCode)

**Description**  
This problem computes the Fibonacci value using the standard definition where each term is the sum of the two preceding terms.  
It reinforces understanding of recursive sequence generation.

**Concepts Used**
- Recursion  
- Mathematical sequences  

**Output Screenshot**

![LeetCode Output](Day08/DSA_PowerOfTwo.png)

---

## Day 09

### Problem 1: Reverse a String (Mirror Transformation)

**Description**  
The given string is reversed by rearranging its characters so that the first character moves to the last position and so on.  
This transformation produces the mirror image of the original string.

**Concepts Used**
- Strings  
- Index-based traversal  
- Character swapping  

**Source Code**  
[Day09/reverse_string.c](Day09/reverse_string.c)

**Output Screenshot**

![Program Output](Day09/reverse_string.png)

---

### Problem 2: Reverse String In-Place (LeetCode)

**Description**  
The input character array is reversed directly by swapping characters from both ends using a two-pointer approach.  
The operation is performed in-place with constant extra memory.

**Concepts Used**
- Two-pointer technique  
- In-place modification  

**Output Screenshot**

![LeetCode Output](Day09/reverse_string_leetcode.png)

---

## Day 10

### Problem 1: Check Whether a String is Palindrome

**Description**  
The string is checked for palindrome property by comparing characters from the beginning and end using two pointers.  
If all corresponding characters match, the string is identified as a palindrome.

**Concepts Used**
- Strings  
- Two-pointer comparison  
- Conditional logic  

**Source Code**  
[Day10/palindrome.c](Day10/palindrome.c)

**Output Screenshot**

![Program Output](Day10/palindrome.png)

---

### Problem 2: Intersection of Two Arrays (LeetCode)

**Description**  
The task is to find common elements between two integer arrays while considering the frequency of each element.  
Each element in the result appears as many times as it occurs in both arrays.

**Concepts Used**
- Arrays  
- Frequency counting  
- Comparison logic  

**Output Screenshot**

![LeetCode Output](Day10/two_arrays.png)

---

## Day 11

### Problem 1: Matrix Addition

**Description**  
Two matrices of the same dimensions are read as input, and their corresponding elements are added to form a resultant matrix.  
The result matrix is printed row-wise, where each element represents the sum of elements at the same position in both matrices.

**Concepts Used**
- 2D Arrays  
- Nested loops  
- Matrix traversal  

**Source Code**  
[Day11/matrix_addition.c](Day11/matrix_addition.c)

**Output Screenshot**

![Program Output](Day11/matrix_addition.png)

---

### Problem 2: Transpose Matrix (LeetCode)

**Description**  
The matrix is transformed by interchanging rows and columns such that element at position (i, j) becomes (j, i).  
A new matrix is constructed to store the transposed values.

**Concepts Used**
- 2D Arrays  
- Matrix indexing  
- Nested iteration  

**Output Screenshot**

![LeetCode Output](Day11/transpose_matrix.png)

---

## Day 12

### Problem 1: Symmetric Matrix Check

**Description**  
The matrix is first verified to ensure it is square.  
It is considered symmetric if every element satisfies the condition matrix[i][j] == matrix[j][i].

**Concepts Used**
- 2D Arrays  
- Nested loops  
- Matrix property validation  

**Source Code**  
[Day12/symmetric_matrix.c](Day12/symmetric_matrix.c)

**Output Screenshot**

![Program Output](Day12/symmetric_matrix.png)

---

### Problem 2: Toeplitz Matrix (LeetCode 766)

**Description**  
A matrix is identified as Toeplitz if each diagonal from top-left to bottom-right contains identical values.  
The condition matrix[i][j] == matrix[i-1][j-1] is checked for all valid positions.

**Concepts Used**
- Diagonal traversal  
- 2D arrays  
- Conditional comparison  

**Output Screenshot**

![LeetCode Output](Day12/toeplitmatrix.png)

