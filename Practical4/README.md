# Practical4

### Explanation [Trap4.c]

- This C program uses the **trapezoidal rule** to approximate the integral of the tangent function from 0 to 60 degrees.
- It calculates the tangent values for angles between 0 and 60 degrees in 5-degree increments.
- It uses a numerical integration approach (trapezoidal rule) to approximate the area under the curve of the tangent function.
- The result is compared with the **exact** result of `log(2.0)`.

### Key Points

- **Array**: `TanArr[]` stores the calculated tangent values for angles between 0 to 60 degrees.
- **Loops**: A `for` loop is used to compute tangent values for each angle increment.
- **Trapezoidal Rule**: A separate `Traprule()` function sums the areas using the trapezoidal rule for approximation.
- **Math**: `log(2.0)` is used to calculate the real result for comparison.

### Explanation [Functions]

1. **degtorad()**:
    - Converts degrees to radians using the formula:
      \[
      \text{radians} = \frac{\pi \times \text{degrees}}{180}
      \]
      
2. **Traprule()**:
    - Implements the trapezoidal rule to approximate the area.
    - Calculates the sum of tangent values at endpoints and doubles the intermediate values.

### Compilation

gcc Trap4.c -o Trap4 -lm

### Execution

./Trap4

### Results

TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148

initial area (sum at x(0) and x(12)) = 0.000000

The value for the sum after the loop is: 14.197204 
