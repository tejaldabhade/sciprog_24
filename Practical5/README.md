# Practical 5

## Explanation

### Arctanh.c
- This C program calculates the inverse hyperbolic tangent (artanh(x)) of a given value x using two methods:
  - Maclaurin Series Approximation
  - Natural Logarithms
- The user is prompted to input a positive real number delta, which controls the precision of the Maclaurin series calculation.
- The program then iterates over values of x from -0.9 to 0.9, comparing the results from both methods and displaying the difference.

### Fibonacci.c
- This C program generates the Fibonacci sequence up to a specified term n, which the user provides as input.
- The program initializes the first two terms of the series (0 and 1) and then calculates subsequent terms using a helper function fibonacci_step.
- The entire series up to the n-th term is then printed.

## Key Points

### Arctanh.c
- Methods: Implements both Maclaurin series (arctanh1) and natural logarithm-based (arctanh2) calculations.
- Input: Real positive number delta to control the precision.
- Loop: Iterates over x values from -0.9 to 0.9 in increments of 0.01.
- Output: Displays the difference between the two calculation methods for each x value.

### Fibonacci.c
- Input: User specifies the value of n to determine the number of terms.
- Function: fibonacci_step computes each term by adding the two previous terms.
- Loop: Iterates to generate the sequence up to the n-th term.
- Output: Displays the Fibonacci sequence up to n.

## Compilation

To compile the programs, use the following commands:
- gcc Arctanh.c -o ArctanhC -lm
- gcc Fibonacci.c -o FibonacciC

## Execution

To execute the compiled programs, use these commands:
- ./ArctanhC
- ./FibonacciC

## Result 

### Arctanh.c

Sample output:
please enter a positive real number delta:
0.1
The difference at x=-0.900000 is 0.0969918969
The difference at x=-0.890000 is 0.0858465246
...
The difference at x=-0.010000 is 0.0000012852
The difference at x=0.000000 is 0.0000000000


### Fibonacci.c

Sample output:


Enter the value of n for Fibonacci series: 6
Fibonacci series up to 6:
0, 1, 1, 2, 3, 5, 8



