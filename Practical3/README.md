# Practical_3

## Explanation [Trapezoidal.c]

This C program implements the **Trapezoidal Rule** to approximate the integral of a function using numerical methods. The Trapezoidal Rule is used to estimate the definite integral by dividing the area under the curve into trapezoids.

### Key Points

- **Math Functions**: The program utilizes `tan()` to calculate the tangent of the angles in radians.
- **Loops**: A `while` loop is used to iterate and compute the sum of the function values at different points.
- **Functions**: 
  - `logf()` computes the natural logarithm for comparison.
  - `fabs()` computes the absolute difference between the calculated and actual values.
- **Switch Case**: A switch case checks if the iteration variable is even, displaying appropriate output.

## Explanation [Numerical Integration]

The program approximates the integral of the function `f(x) = tan(x)` over a defined interval. The approximation is made more accurate by increasing the number of intervals.

### Key Points

- **Intervals**: The function is divided into small subintervals.
- **Calculation**: The sum is calculated using the formula for the trapezoidal rule and compared with the actual value (`log(2)`).

## Compilation

gcc Trapezoidal.c -o TrapezoidalC -lm

## Execution

./TrapezoidalC

## Results 

The value of the sum before the loop is : 1.732051

I am even and here's the value of sum: 1.907028

I am even and here's the value of sum: 2.795581

I am even and here's the value of sum: 4.456137

I am even and here's the value of sum: 7.011252

I am even and here's the value of sum: 10.689451

I am even and here's the value of sum: 15.929254

The value of the sum after the loop is: 15.929254

The final value of the sum is: 0.695045

The actual value is: 0.693147

The absolute difference = 0.001898

The real difference = 0.002738

