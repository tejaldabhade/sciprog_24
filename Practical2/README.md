# Practical_2

Explaination [Conversion.C] 

* This C program converts an integer value to its binary string representation.
* Afterwards reverses that string.
* It also converts the integer value to a float value.
* Then calculating the number of binary digits using logarithmic functions.
* Finally printing the output.

## Key Points 

* Array: binnum[] stores the binary string
* Loops: while loop converts the integer value to binary value, for loop reverses the string.
* Math: logf() and ceil() compute the number of binary digits
* Functions: sprintf() for appending binary digits, strlen() for string length


Explaination [Sum.c]

* This C program calculates the harmonic series sum in two different ways and compares the output.

## Key Points 

* Loops: For loop sums from 1 to 1000 and second for loop sums from 1000 down to 1.
* Calculation: Both loops add 1/i to sum1 and sum2, respectively.


## Compilation 

* gcc Conversion.c ConversionC ConversionC -lm
* gcc Sum.c SumC -lm

## Execution

* ./ConversionC
* ./SumC

## Results 

* Conversion.c : The number of digits is 25 inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111

* Sum.c : Sum1=7.485478  Sum2=7.485472 Difference between the two is 0.000007
