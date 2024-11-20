# Magic Square Program

## Overview
This program determines whether a given square matrix is a magic square. A magic square is a matrix where the sum of every row, column, and both diagonals equals a constant value \( M = n \cdot (n^2 + 1) / 2 \), where \( n \) is the matrix dimension.

## Code Description

### Features
1. **Magic Square Validation:**
   - Reads a square matrix from a file.
   - Calculates \( M \), the target sum for rows, columns, and diagonals.
   - Verifies that all rows, columns, and diagonals sum up to \( M \).
   - Outputs whether the matrix is a magic square or not.

2. **Dynamic Memory Allocation:**
   - Dynamically allocates memory for the square matrix using `malloc`.

3. **File Handling:**
   - Prompts the user for a file name.
   - Reads the matrix data from the specified file.
   - Counts the number of lines in the file to determine the size of the matrix.

4. **Error Handling:**
   - Ensures the input matrix has valid dimensions.
   - Frees allocated memory after processing.

### Functions
#### `main()`
- Handles file input, memory allocation, and program execution.
- Reads a matrix from a user-specified file and determines whether it is a magic square.

#### `getlines(char filename[MAX_FILE_NAME])`
- Parameters: A string `filename` representing the file name.
- Counts the number of lines in the file to determine the matrix dimensions.

#### `isMagicSquare(int **square, const int n)`
- Parameters:
  - `square`: The matrix to be checked.
  - `n`: The dimension of the matrix.
- Returns:
  - `1` if the matrix is a magic square.
  - `0` otherwise.
- Validates rows, columns, and diagonal sums.

## Compilation and Execution

### Compilation Steps
1. Compile the program using `gcc`:
   gcc main.c -o magic

### Execution Steps
1. The execution of program :
	./magic

### Result 
1. Enter file name: magic_square.txt
   No. lines, 3
   M = 15
   This is a magic square

2.Enter file name: not_magic_square.txt
  No. lines, 3
  M = 15
  Row 1 does not sum to 15 (row sum = 6).
  This is not a magic square
