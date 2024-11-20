# Practical 6

## Explanation
- This practical demonstrates matrix multiplication using multiple C files and a structured directory.
   - MatMult.c : Contains the main executable functionality.
   - Step6_MatMult/Main.c : Initializes matrices A, B and C and calls the matrix multiplication function.
   - Step6_MatMult/MatM.c : Defines the MatMult function, which performs matrix multiplication.

## Key Point
### Step6_MatMult/Main.c
- Matrix Initialization: Initializes matrices A and B on given rules:
	- A[i][j] = i + j
	- B[i][j] = i - j
- Function Calls : Calls MatMult to perform the matrix multiplication on matrices A and B, storing the result in matrix C

### Step6_MatMult/MatM.C
- Matrix Multiplication Function : Contains the MatMult function which performs the multiplication operation using nested loops

### MatMult.c 
- Performs the matrix multiplication within one file using function called MatMult.

## Compilation 

To compile the program you need to create the object files for Step6_MatMult folder and for MatMult.c tthe compilation doesnot require the object files 

### Commands
	- gcc MatMult.c -o MatMultC -lm
	- for files under Step6_MatMult folder :
	- gcc -c Main.c 
	- gcc -c MatM.c [This will create the object file]
	- gcc -o matmultC Main.c MatM.c [ This will compile both the files and will create an executable]


## Execution 

	- ./MatMultC
	- ./matmult.c

## Result 

- Matrix A  : 

  	0  1  2
  	1  2  3
  	2  3  4
  	3  4  5
  	4  5  6

- Matrix B :
	0 -1 -2 -3
  	1  0 -1 -2
  	2  1  0 -1

- Matrix C :
	5  2 -1 -4
 	 8  2 -4-10
 	11  2 -7-16
 	14  2-10-22
 	17  2-13-28
	 
