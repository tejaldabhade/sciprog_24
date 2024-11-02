#include <stdio.h>

void fibonacci_step(int *Fn1, int *Fn2) {
    int Fn = *Fn1 + *Fn2;
    *Fn2 = *Fn1;
    *Fn1 = Fn;
}

int main() {
    int n;

    // Getting the  user to enter the value of n
    printf("Enter the value of n for Fibonacci series: ");
    scanf("%d", &n);

    // Initialising the first two Fibonacci numbers F0 = 0, F1 = 1
    int F0 = 0, F1 = 1;
    printf("Fibonacci series up to %d: \n", n);

    // Printing the values
    printf("%d, %d", F0, F1);


    for (int i = 2; i <= n; i++) {
        fibonacci_step(&F1, &F0);
        printf(", %d", F1);
    }

    printf("\n");

    return 0;
}

