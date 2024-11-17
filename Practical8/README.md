# Euclid's Algorithm: Iterative and Recursive Versions

## Overview

This program implements both iterative and recursive versions of Euclid's algorithm to calculate the greatest common divisor (GCD) of two positive integers.

## Code Description

### Features

1. **Iterative Version**:
   - Calculates the GCD using a `while` loop.
   - Repeatedly replaces the larger number with the remainder of its division by the smaller number until the remainder becomes zero.

2. **Recursive Version**:
   - Uses recursion to calculate the GCD.
   - Continues to call itself with the smaller number and the remainder until the remainder is zero.

3. **Input Validation**:
   - Ensures the user enters two integers.
   - Validates that the input integers are positive.

### Functions

1. `iterativeGCD(int a, int b)`:
   - Parameters: Two integers `a` and `b`.
   - Returns: The GCD of `a` and `b` using the iterative approach.

2. `recursiveGCD(int a, int b)`:
   - Parameters: Two integers `a` and `b`.
   - Returns: The GCD of `a` and `b` using the recursive approach.

3. `main()`:
   - Handles input/output and input validation.
   - Displays the GCD results for both iterative and recursive methods.

## Compilation and Execution

### Compilation Steps

1. Compile the program using `gcc`:
   gcc GCD.c -o GCDC

### Executions

1. Execution of the program :
  - ./GCDC

### Results 

1. Output of the program :

Please enter two positive integers :
   - IterativeGCD(10, 6) = 2
   - RecursiveGCD(10, 6) = 2
