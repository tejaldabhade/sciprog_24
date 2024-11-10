# Practical_7

**Explanation [Polynomial.c]** 


**Description**

This C program approximates the value of e using a polynomial series expansion by setting x = 1.
The user inputs the polynomial order, dynamically allocates memory to store each term, 
and sums these terms to approximate e. 
The results are compared to the true value to observe the accuracy of the approximation. 
Higher-order polynomials may lead to worse estimates due to floating-point precision issues.


**Key Points**

- Memory Allocation: Dynamically allocates memory for storing terms.

- Factorial Calculation: Recursive function to compute factorials.

- Summation: Adds terms to approximate e.

- Comparison: Prints the estimate and difference from the actual value.


**Explanation [Pointers.c]**


**Description**

This C program demonstrates dynamic memory allocation and pointer manipulation. 
It uses functions to allocate memory for an array, fill the array with specific values, 
print the array elements, and free the allocated memory.


**Key Points**

- Memory Allocation: The allocatearray() function allocates memory for an array of integers.

- Filling Values: The fillwithones() function fills the array with the value 1.

- Printing: The printarray() function displays the contents of the array.

- Memory Deallocation: The freepointer() function releases the allocated memory to prevent memory leaks.


**Compilation**

- gcc Polynomial.c -o PolynomialC -lm
- gcc Pointers.c -o PointersC -lm


**Execution**
- ./PolynomialC
- ./PointersC


**Results**

**Polynomial.c**
- e is estimated as 2.7166666667, with difference -1.615162e-03

**Pointers.c** 
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
